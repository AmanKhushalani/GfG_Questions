#Question link :- https://practice.geeksforgeeks.org/problems/decode-the-pattern1138/1
#Dificulty = Easy

class Solution:

    def lookandsay(self, n):
        string = "1"
        for j in range(n):
            if j>(n-2):
                break
            new_string=""
            count=0
            last=''
            for i in string:
                if(last==''):
                    last = i
                if i==last:
                    count+=1
                else:
                    new_string += (str(count) + str(last))
                    last = i
                    count = 1
        
            new_string += (str(count) + str(last))
            string = new_string
                #self.lookandsay(new_string,num-1)
        return string

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        n = int(input())

        solObj = Solution()
