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
    ListNode* middleNode(ListNode* head) {
       ListNode* temp = head;
        int size = 0;

        // Step 1: Calculate the size of the list
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        // Step 2: Find the middle index (second middle in case of even length)
        int middleIndex = size / 2;

        // Step 3: Traverse to the middle node
        temp = head;
        for (int i = 0; i < middleIndex; i++) {
            temp = temp->next;
        }

        // Return the middle node
        return temp;
        
    }
};