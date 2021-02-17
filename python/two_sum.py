def two_sum(nums, target):
    for i in nums:
        for j in nums:
            # if i == j:
            #     continue
            if target == i + j:
                return [nums.index(i), nums.index(j)]


print(two_sum([3, 3], 6))
