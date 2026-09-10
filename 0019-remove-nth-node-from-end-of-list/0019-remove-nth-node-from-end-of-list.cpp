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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }

        if(n==count){
            return head->next;
        }
        int counter=0;
        temp=head;
       
        
        while(counter!=count-n-1){
            counter++;
            temp=temp->next;
        }

        temp->next=temp->next->next;
        
        
       
        return head;
        
    }
};