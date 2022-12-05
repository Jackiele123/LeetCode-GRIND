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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* result = head;
        ListNode* iterator = head;
        ListNode* remover = head;
        ListNode* temp = head;
    
        if (n == 1 && head->next == nullptr)
            return nullptr;
        
        for (int i = 0; i < n-1; i++)
        {
            iterator = iterator->next;
            if (iterator == nullptr)
                return result;
        }
        while(iterator->next){
            iterator = iterator->next;
            temp = remover;
            remover = remover->next;
        }
        if(remover == head)
            result = result->next;
        temp->next = remover->next;
        return result;
    }
};