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
 public : ListNode* merger(ListNode* head1, ListNode* head2) {
    if (!head1)
        return head2;
    if (!head2)
        return head1;

    ListNode dummy(-1);
    ListNode* tail = &dummy;

    ListNode* temp1 = head1;
    ListNode* temp2 = head2;

    while (temp1 && temp2) {

        if (temp1->val <= temp2->val) {
            tail->next = temp1;
            temp1 = temp1->next;
        } else {
            tail->next = temp2;
            temp2 = temp2->next;
        }

        tail = tail->next;
    }

    if (temp1)
        tail->next = temp1;
    else {
        tail->next = temp2;
    }

    return dummy.next;
}
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;

        ListNode* head = nullptr;

        for (int i = 0; i < lists.size(); i++) {
            head = merger(head, lists[i]);
        }

        return head;
    }
};
