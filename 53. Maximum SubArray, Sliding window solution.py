# Neetcode solution, question 53 on leetcode, SLiding window
def maxSubarray(nums):
    maxSub = nums[0]
    curSum = 0
    for n in nums:
        if curSum<0:
            curSum = 0
        curSum+=n
        maxSub = max(curSum,maxSub)
    return maxSub
maxSubarray()
#GIVE SOME INPUT lol

