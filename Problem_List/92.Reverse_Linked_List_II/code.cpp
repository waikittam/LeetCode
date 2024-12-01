using namespace std;;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy;

        for(int i = 1; i < left; i++){
            prev = prev->next;
        }

        ListNode *current = prev->next;
        ListNode *next = nullptr;
        ListNode *tail = current;

        for (int i = 0; i < (right - left + 1); i++) {
            next = current->next;       
            current->next = prev->next; 
            prev->next = current;
            current = next;
        }

        tail->next = current;

        return dummy->next;
    }
};