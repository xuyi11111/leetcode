#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:002.py
@ide:PyCharm
@create_time:2019/7/4 16:19
'''
# Definition for singly-linked list.

'''
该算法的时间复杂度为maxlen（l1,l2)，空间复杂度为1

'''
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        def len(l1: ListNode):
            len1 = 0
            while (l1):
                len1 += 1
                l1 = l1.next
            return len1

        def printf(l1: ListNode):
            while (l1):
                print(l1.val)
                l1 = l1.next

        carry = 0
        if (len(l2)> len(l1)):
            temp_listnode = l1
            l1 = l2
            l2 = temp_listnode
        tale = l1
        ans = l1
        while l1 or l2:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0
            last = (x + y + carry) % 10
            carry = (x + y + carry) // 10
            l1.val = last
            tale = l1
            l1 = l1.next
            if l2: l2 = l2.next
        if carry > 0:
            tale.next = ListNode(1)
        return ans

if __name__=="__main__":
    add1=ListNode(1)
    add2 = ListNode(9)
    add3 = ListNode(9)
    add2.next=add3
    tt=Solution()
    add5=tt.addTwoNumbers(add1,add2)