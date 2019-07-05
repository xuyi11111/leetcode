#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:019.py
@ide:PyCharm
@create_time:2019/7/5 11:11
'''


class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        def len_List(head):
            length=0
            while head:
                length+=1
                head=head.next
            return length
        ans=head
        length=len_List(head)-n
        tale=None
        while length>0:
            length-=1
            tale=head
            head=head.next
        if tale==None:#这里是判题的精髓
            ans=head.next
        else:
            tale.next=tale.next.next
        return ans