

class Solution {
    ListNode* reversePart(ListNode* node) {
        ListNode* previous = nullptr;

        while (node != nullptr) {
            ListNode* temp = node->next;
            node->next = previous;
            previous = node;
            node = temp;
        }

        return previous;
    }

public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* rightSide = reversePart(slow);
        ListNode* leftSide = head;

        while (rightSide != nullptr) {
            if (leftSide->val != rightSide->val)
                return false;

            leftSide = leftSide->next;
            rightSide = rightSide->next;
        }

        return true;
    }
};