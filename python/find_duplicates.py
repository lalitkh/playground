from typing import List


def check_duplicates(nums: List):
    nums.sort()

    for i in range(len(nums) - 1):
        if nums[i] == nums[i + 1]:
            return True
    return False


print(check_duplicates([1, 2, 3]))
