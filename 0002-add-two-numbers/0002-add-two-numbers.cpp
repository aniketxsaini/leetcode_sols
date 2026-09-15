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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode(-1);
        ListNode* temp=res;
        ListNode* h1=l1;
        ListNode* h2=l2;
        int carry=0;
        while(h1!=nullptr&&h2!=nullptr){
            int sum=(h1->val+h2->val)+carry;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
            h1=h1->next;
            h2=h2->next;
        }
        while(h1!=nullptr){
            int sum=h1->val+carry;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
            h1=h1->next;
        }
        while(h2!=nullptr){
            int sum=h2->val+carry;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
            h2=h2->next;
        }
        if(carry>0){
            temp->next=new ListNode(carry);
        }

        return res->next;
    }
};