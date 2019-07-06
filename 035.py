#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:035.py
@ide:PyCharm
@create_time:2019/7/6 16:08
'''
class Solution:
    def searchInsert(self, nums, target) :
        left=0
        right=len(nums)-1
        while left<=right:
            mid=(left+right)//2
            if nums[mid]==target:
                return mid
            elif nums[mid]<target:
                left=mid+1
            else:
                right=mid-1
        return left


if __name__ == '__main__':
    nums=[1,3]
    a=Solution()
    ans=a.searchInsert(nums,2)