import os
import datetime
import matplotlib.pyplot as plt
from matplotlib import cm
import subprocess

TEMPLATE_FILE = "readme_template.txt"
README_FILE = "README.md"
EXCLUDED = {"__pycache__", ".git", ".vscode"}

def count_files(root):
    summary = {}
    for category in sorted(os.listdir(root)):
        if category.startswith(".") or category in EXCLUDED:
            continue
        path = os.path.join(root, category)
        if os.path.isdir(path):
            sub_summary = {}
            total = 0
            for sub in os.listdir(path):
                sub_path = os.path.join(path, sub)
                if os.path.isdir(sub_path):
                    count = sum(1 for f in os.listdir(sub_path)
                                if f.endswith((".cpp", ".py", ".java", ".c")))
                    sub_summary[sub] = count
                    total += count
            summary[category] = {"total": total, "subs": sub_summary}
    return summary

def generate_table(summary):
    lines = ["| Category | Sub-Category | Questions Solved |", "|-----------|---------------|------------------|"]
    for category, data in summary.items():
        if data["subs"]:
            for sub, count in data["subs"].items():
                lines.append(f"| {category} | {sub} | {count} |")
        else:
            lines.append(f"| {category} | — | {data['total']} |")
    return "\n".join(lines)

def generate_chart(summary):
    categories = [cat for cat in summary.keys()]
    values = [data["total"] for data in summary.values()]

    if not values or sum(values) == 0:
        return ""

    # Use modern donut chart look
    fig, ax = plt.subplots(figsize=(6,6))
    colors = cm.Set3(range(len(categories)))
    wedges, texts, autotexts = ax.pie(
        values, labels=categories, autopct='%1.1f%%',
        startangle=140, pctdistance=0.85, colors=colors
    )
    # Create donut hole
    centre_circle = plt.Circle((0,0),0.70,fc='white')
    fig.gca().add_artist(centre_circle)
    ax.set_title("DSA Progress by Category", fontsize=14, fontweight='bold')
    plt.tight_layout()
    plt.savefig("progress_chart.png", bbox_inches="tight", dpi=150)
    plt.close()

    return "![Progress Chart](progress_chart.png)"

def git_commit_push(message):
    try:
        subprocess.run(["git", "add", "-A"], check=True)
        subprocess.run(["git", "commit", "-m", message], check=True)
        subprocess.run(["git", "push"], check=True)
        print("🚀 Changes committed and pushed!")
    except subprocess.CalledProcessError:
        print("⚠️ Git commit/push failed — please check your credentials or branch.")

def update_readme():
    summary = count_files(os.getcwd())
    table_md = generate_table(summary)
    chart_md = generate_chart(summary)
    last_updated = datetime.datetime.now().strftime("%d %B %Y, %I:%M %p")

    with open(TEMPLATE_FILE, "r", encoding="utf-8") as f:
        content = f.read()

    final_readme = (
        content.replace("{CATEGORY_SUMMARY}", table_md)
               .replace("{PIE_CHART}", chart_md)
               .replace("{LAST_UPDATED}", last_updated)
    )

    with open(README_FILE, "w", encoding="utf-8") as f:
        f.write(final_readme)

    print("✅ README.md updated successfully.")
    git_commit_push(f"Auto update: {last_updated}")

if __name__ == "__main__":
    update_readme()
