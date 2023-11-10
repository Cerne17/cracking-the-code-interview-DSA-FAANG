'''
Complexity: O(nlogn)
'''
from typing import List
def containsDuplicate(nums: List[int]) -> bool:
    nums.sort()
    n = len(nums)
    for i in range(1, n):
        if nums[i] == nums[i-1]:
            return True
    return False
