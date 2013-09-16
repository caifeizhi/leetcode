/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* pHeader = new ListNode(-1);
        ListNode* pNode = pHeader;
        
        int add = 0;
        while(p1 && p2)
        {
            pNode->next = new ListNode( (add + p1->val + p2->val) % 10);
            pNode = pNode->next;
            add = (add + p1->val + p2->val) / 10;
            p1 = p1->next;
            p2 = p2->next;
        }
        
        while (p1 != NULL)
        {
            pNode->next = new ListNode( (add + p1->val) % 10);
            pNode = pNode->next;
            add = (add + p1->val) / 10;
            p1 = p1->next;
        }
        while (p2 != NULL)
        {
            pNode->next = new ListNode( (add + p2->val) % 10);
            pNode = pNode->next;
            add = (add + p2->val) / 10;
            p2 = p2->next;
        }
        
        if (add > 0)
        {
            pNode->next = new ListNode(add);
        }
        return pHeader->next;
    }
};