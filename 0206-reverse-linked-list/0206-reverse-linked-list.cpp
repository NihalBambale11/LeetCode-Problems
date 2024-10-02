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
    ListNode* reverseList(ListNode* head) {
        ListNode *nextnode = head;
        ListNode *currentnode = head;
        ListNode *prevnode = NULL;
        
        while(nextnode != NULL){
            nextnode = nextnode->next;
            currentnode->next = prevnode;
            prevnode = currentnode;
            currentnode  = nextnode;
        }
            
        return prevnode;
        
        
    }
};