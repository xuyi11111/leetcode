#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:026.py
@ide:PyCharm
@create_time:2019/7/5 12:57
'''
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        len1 = len(nums)
        left = 1
        while left < len1:
            if nums[left] == nums[left-1]:
                del nums[left]
                len1-=1
            else:
                left += 1
        return len(nums)


if __name__ == '__main__':
    nums=[1,1,2]
    a=Solution()
    ans=a.removeDuplicates(nums)