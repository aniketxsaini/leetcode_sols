/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return nullptr;
        Node* temp = head;

        while (temp != nullptr) {
            Node* copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;
        }
        temp = head;
        while (temp != nullptr) {
            if (temp->random != nullptr) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
        temp = head;
        Node* copyHead = head->next;
        Node* ctemp = copyHead;

        while (temp != nullptr) {
            temp->next = temp->next->next;
            ctemp->next =
                (ctemp->next != nullptr) ? ctemp->next->next : nullptr;

            temp = temp->next;
            ctemp = ctemp->next;
        }

        return copyHead;
    }
};