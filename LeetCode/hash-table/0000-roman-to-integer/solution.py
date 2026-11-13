class Solution:
    def romanToInt(self, s: str) -> int:
        vals = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        sum = 0

        for i in range(len(s)):
            if i<len(s)-1:
                if s[i] == 'I':
                    if s[i+1] == 'V' or s[i+1] == 'X':
                        sum -= 1
                        continue
                if s[i] == 'X':
                    if s[i+1] == 'L' or s[i+1] == 'C':
