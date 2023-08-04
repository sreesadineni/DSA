#User function Template for python3
class Solution:

	
	def removeDuplicates(self,str):
	    nondup = []
	    freqarr = [0 for i in range(0,123)]
	    for i in str:
	        if freqarr[ord(i)] == 0:
	            freqarr[ord(i)]+=1
	    for i in str:
	        if freqarr[ord(i)] == 1:
	            nondup.append(i)
	            freqarr[ord(i)]-=1
	    return ''.join(nondup)
	        
#{ 
 # Driver Code Starts
#Initial Template for Python 3





if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        str = input().strip()
        ob = Solution()
        ans = ob.removeDuplicates(str)
        print(ans)
        tc -= 1

# } Driver Code Ends