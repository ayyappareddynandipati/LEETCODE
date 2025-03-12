class Solution:
    def fourSum(self, nums, target):
        nums.sort()  # Sorting helps avoid duplicates and enables two-pointer approach
        n = len(nums)
        result = []
        
        for i in range(n - 3):  # First pointer
            if i > 0 and nums[i] == nums[i - 1]:  # Skip duplicates
                continue
            for j in range(i + 1, n - 2):  # Second pointer
                if j > i + 1 and nums[j] == nums[j - 1]:  # Skip duplicates
                    continue
                left, right = j + 1, n - 1  # Two-pointer approach
                while left < right:
                    total = nums[i] + nums[j] + nums[left] + nums[right]
                    if total == target:
                        result.append([nums[i], nums[j], nums[left], nums[right]])
                        # Move left and right to avoid duplicates
                        while left < right and nums[left] == nums[left + 1]:
                            left += 1
                        while left < right and nums[right] == nums[right - 1]:
                            right -= 1
                        left += 1
                        right -= 1
                    elif total < target:
                        left += 1
                    else:
                        right -= 1
        return result

# Example usage:
solution = Solution()
print(solution.fourSum([1, 0, -1, 0, -2, 2], 0))  # Output: [[-2,-1,1,2], [-2,0,0,2], [-1,0,0,1]]
print(solution.fourSum([2, 2, 2, 2, 2], 8))       # Output: [[2,2,2,2]]
