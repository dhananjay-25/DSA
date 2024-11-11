#User function Template for python3
class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        if len(arr) < 2:
            return -1  # Handle edge case: array with less than 2 elements
    
        first = second = -1
    
        for num in arr:
            if num > first:
                second = first
                first = num
            elif num != first and num > second:
                second = num
        
        return second

#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.getSecondLargest(arr)
        print(ans)
        print("~")
# } Driver Code Ends