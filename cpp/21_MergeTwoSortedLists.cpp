/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mergedList = new ListNode();
        ListNode* head = mergedList;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                mergedList->next = list1;
                list1 = list1->next;
            }
            else {
                mergedList->next = list2;
                list2 = list2->next;
            }
            mergedList = mergedList->next;
        }

        if (list1 != NULL) {
            mergedList->next = list1;
        }
        else if (list2 != NULL) {
            mergedList->next = list2;
        }

        return head->next;
    }
};