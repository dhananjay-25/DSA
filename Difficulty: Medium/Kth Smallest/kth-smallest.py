#User function Template for python3


class Solution:
    def partition(self, arr, low, high):
        pivot = arr[high]
        i = low
        for j in range(low, high):
            if arr[j] <= pivot:
                arr[i], arr[j] = arr[j], arr[i]
                i += 1
        arr[i], arr[high] = arr[high], arr[i]
        return i

    def quickselect(self, arr, low, high, k):
        if low == high:
            return arr[low]

        pivot_index = self.partition(arr, low, high)

        if pivot_index == k:
            return arr[pivot_index]
        elif pivot_index > k:
            return self.quickselect(arr, low, pivot_index - 1, k)
        else:
            return self.quickselect(arr, pivot_index + 1, high, k)

    def kthSmallest(self, arr, k):
        
        return self.quickselect(arr, 0, len(arr) - 1, k - 1)
      



#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    import random
    t = int(input())
    for tcs in range(t):
        # n = int(input())
        arr = list(map(int, input().strip().split()))
        k = int(input())
        ob = Solution()
        print(ob.kthSmallest(arr, k))
        print("~")
# } Driver Code Ends