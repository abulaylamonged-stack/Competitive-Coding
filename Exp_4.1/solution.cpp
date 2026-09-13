
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> data;

        for (ListNode* current = head; current != nullptr; current = current->next) {
            data.push_back(current->val);
        }

        for (int left = 0, right = data.size() - 1; left < right; left++, right--) {
            if (data[left] != data[right])
                return false;
        }

        return true;
    }
};