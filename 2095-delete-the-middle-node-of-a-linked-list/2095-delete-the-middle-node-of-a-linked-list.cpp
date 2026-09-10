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
    ListNode* deleteMiddle(ListNode* head) {
        int countnodes=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            countnodes++;
            temp=temp->next;
        }
        int mid=countnodes/2;
       if(mid==0) return nullptr;
        temp=head;
        int counter=0;
        while(counter!=mid-1){
            counter++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};