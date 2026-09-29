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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* temp1=dummy;
        ListNode* temp2=dummy;
        ListNode* temp3=dummy;
        for(int i=0;i<k;i++){
            temp1=temp1->next;
            temp3=temp3->next;
        }

        while(temp1!=nullptr){
            temp2=temp2->next;
            temp1=temp1->next;
        }

        int temp=temp2->val;
        temp2->val=temp3->val;
        temp3->val=temp;

    return head;
    }
};