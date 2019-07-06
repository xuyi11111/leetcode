#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:034.py
@ide:PyCharm
@create_time:2019/7/6 15:22
'''
class Solution:
    def searchRange(self, nums, target):
        def find_two(num_temp, low, high, target):
            while (low <= high):
                mid = (low + high) // 2
                if num_temp[mid] == target:
                    return mid
                elif num_temp[mid] < target:
                    low = mid+1
                else:
                    high = mid-1
            return -1

        first = find_two(nums, 0, len(nums) - 1, target)
        if first is -1:
            return [-1, -1]
        first_left = first
        first_right = first
        temp = first_left
        while (temp >= 0 and first_left > 0):
            temp = find_two(nums, 0, first_left - 1, target)
            if temp is not -1:
                first_left = temp
        temp = first_right
        while (temp >= 0 and first_right < len(nums) - 1):
            temp = find_two(nums, first_right + 1, len(nums) - 1, target)
            if temp is not -1:
                first_right = temp
        ans = [first_left, first_right]

if __name__ == '__main__':
    nums=[2,2]
    a=Solution()
    ans=a.searchRange(nums,2)






