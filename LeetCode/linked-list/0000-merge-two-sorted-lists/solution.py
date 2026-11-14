# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: ListNode | None, list2: ListNode | None) -> ListNode | None:
        result = ListNode()
        temp = result
        while list1 and list2:
            a = list1.val
            b = list2.val
            if a < b:
                temp.next = ListNode(a)
                temp = temp.next
                list1 = list1.next
            elif a > b:
                temp.next = ListNode(b)
                temp = temp.next
                list2 = list2.next
            else:
                temp.next = ListNode(a)
                temp = temp.next
                list1 = list1.next
                temp.next = ListNode(b)
                temp = temp.next
                list2 = list2.next
        if list1:
            temp.next = list1
        if list2:
            temp.next = list2
        return result.next