# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: Optional[ListNode]
        :type n: int
        :rtype: Optional[ListNode]
        """
        dummy = ListNode(0, head)
        one = dummy
        two = dummy
        for i in range(n):
            two = two.next
        
        while two.next is not None:
            one = one.next
            two = two.next

        one.next = one.next.next

        return dummy.next