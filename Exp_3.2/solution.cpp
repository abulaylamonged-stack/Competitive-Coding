
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* oddNode = head;
        ListNode* evenNode = head->next;
        ListNode* firstEven = evenNode;

        while (evenNode != nullptr && evenNode->next != nullptr) {
            oddNode->next = evenNode->next;
            oddNode = oddNode->next;

            evenNode->next = oddNode->next;
            evenNode = evenNode->next;
        }

        oddNode->next = firstEven;

        return head;
    }
};