class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return len(haystack.split(needle)[0]) if needle in haystack else -1