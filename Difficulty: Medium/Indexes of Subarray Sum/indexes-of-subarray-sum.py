#User function Template for python3
class Solution:
    def subArraySum(self, arr, target):
        # code here
        left = 0
        current_sum = 0
        
        for right in range(len(arr)):
            current_sum += arr[right]
            
            # Shrink the window from the left if current_sum is too large
            while current_sum > target and left <= right:
                current_sum -= arr[left]
                left += 1
            
            # Check if the current sum matches the target
            if current_sum == target:
                return [left + 1, right + 1]  # 1-based indices
        
        return [-1]

#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input().strip())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        d = int(input().strip())
        ob = Solution()
        result = ob.subArraySum(arr, d)
        print(" ".join(map(str,
                           result)))  # Print the result in the desired format
        tc -= 1
        print("~")

# } Driver Code Ends