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
 class Solution 
 {
    public:
        ListNode* reverseList(ListNode* head) 
        {
            ListNode* next_nodo = nullptr;
            ListNode* new_list = nullptr;

            while(head)
            {
                next_nodo = head->next;
                head->next = next_list;

                new_list = head;
                head = next_nodo;
            }

            return new_list;
        }
};
