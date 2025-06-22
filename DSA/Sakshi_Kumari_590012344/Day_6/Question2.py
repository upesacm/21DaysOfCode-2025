Your task:
Return true if the array is strictly increasing, otherwise return false.
def isStrictlyIncreasing(nums):
   i = 0
   while i < len(nums) - 1:
   if nums[i] >= nums[i + 1]:
   return False
   i = i + 1
   return True
                                            
