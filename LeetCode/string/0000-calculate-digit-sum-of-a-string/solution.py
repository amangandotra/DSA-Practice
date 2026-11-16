class Solution:
    def digitSum(self, s: str, k: int) -> str:
        output = s
        temp = ""
        d = 0 
        summ = 0
        
        while(len(output)> k):
            print(len(output))
            for i in output:
                if d < k:
                    summ = summ + int(i)
                    d+=1
                else:
                    print('sum',summ)
                    temp = temp + str(summ)
                    d = summ = 0
                    summ = summ + int(i)
                    d+=1
            if d>0:
                temp = temp + str(summ)
                d = summ = 0
            output = temp
            temp = ''
            print(output)
        return output