class Solution:
  #check one can reach the last index #greedy
    def canJump(self, nums: List[int]) -> bool:
        n=len(nums)
        f=n-1
        for i in range(n-2,-1,-1):
            if nums[i]+i>=f:
                f=i
        return f==0
