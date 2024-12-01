using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        Node *current = head;

        while(current){
            Node *newNode = new Node(current->val);
            newNode->next = current->next;
            current->next = newNode;
            current = newNode->next;
        }

        current = head;

        while(current){
            if(current->random){
                current->next->random = current->random->next;
            }
            current = current->next->next;
        }

        Node *newHead = head->next;
        current = head;

        while(current){
            Node *copy = current->next;
            current->next = copy->next;
            current = current->next;
            if(current){
                copy->next = current->next;
            }
        }

        return newHead;
    }
};