#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:074.py
@ide:PyCharm
@create_time:2019/7/8 16:45
'''


class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        if (matrix == [] or matrix == [[]]):
            return False
        len1 = len(matrix)
        len2 = len(matrix[0])
        left = 0
        right = len1 - 1
        temp = 0
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] == target:
                return True
            elif matrix[mid][0] < target:
                left = mid + 1
            else:
                right = mid - 1

        temp = left
        if (temp == 0):
            return False
        left = 0
        right = len2 - 1
        while left <= right:
            mid = (left + right) // 2
            if matrix[temp - 1][mid] == target:
                return True
            elif matrix[temp - 1][mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return False

