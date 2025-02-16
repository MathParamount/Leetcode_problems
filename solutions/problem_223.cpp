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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
        {
            ListNode* head = nullptr;
            ListNode* tail = nullptr;

            //Verificação de existência de listas
            
            if(!list1) return list2;
            if(!list2) return list1;

            // Se o valor da lista for maior que o outro pega o menor iguala a cabeça e a calda e aponta pra próxima lista menor
            if(list1->val >= list2->val)
            {
                  head = tail = list2;
                  list2 = list2->next;
            }
            else 
            {
                head = tail = list1;
                list1 = list1 -> next;
            }

            //Conexão de listas
            while(list1 && list2)
            {
                if(list1->val >= list2->val)
                {
                    tail -> next = list2;
                    list2 = list2->next;
                }

                else
                {
                    tail -> next = list1;
                    list1 = list1 -> next;
                }

                tail = tail -> next;
            }

            tail -> next = list1 ? list1 : list2;
        }
        return head;
};
