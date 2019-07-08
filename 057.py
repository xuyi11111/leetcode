class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        temp = 0
        len1 = len(intervals)
        left = 0
        right = len1 - 1
        while (left <= right):
            mid = (left + right) // 2
            if intervals[mid][0] == newInterval[0]:
                temp = mid
                break
            elif intervals[mid][0] < newInterval[0]:
                left = mid + 1
            else:
                right = mid - 1
        if temp == 0:
            temp = left
        intervals.insert(temp, newInterval)
        len1 += 1
        if (intervals[temp - 1][1] >= intervals[temp][0] and temp - 1 >= 0):
            intervals[temp - 1][1] = max(intervals[temp - 1][1], intervals[temp][1])
            del intervals[temp]
            len1 -= 1
            temp -= 1
        while (temp < len1 - 1):
            if (intervals[temp][1] >= intervals[temp + 1][0]):
                intervals[temp][1] = max(intervals[temp][1], intervals[temp + 1][1])
                del intervals[temp + 1]
                len1 -= 1
            else:
                break
        return intervals

