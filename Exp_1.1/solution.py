# LeetCode 219 - Contains Duplicate II

class Solution:
    def containsNearbyDuplicate(self, nums, k):
        last_index = {}

        for i, value in enumerate(nums):
            if value in last_index and i - last_index[value] <= k:
                return True

            last_index[value] = i

        return False