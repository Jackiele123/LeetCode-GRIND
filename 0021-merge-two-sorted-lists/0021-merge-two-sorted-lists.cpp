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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* temp = nullptr;
        ListNode* result = nullptr;
        ListNode* iterator = nullptr;
        
        
        if (!list1 && !list2) {
            return nullptr;
        }
        if (!list1) {
            return list2;
        }
        if (!list2) {
            return list1;
        }
        
        if (list1->val > list2->val){
            result = list2;
            iterator = result;
            list2 = list2->next;
        }
        else {
            result = list1;
            iterator = result;
            list1 = list1->next;
        }
        
        while (list1 && list2){
            
            if (list1->val > list2->val){
                iterator->next = list2;
                iterator = iterator->next;
                list2 = list2->next;
            }
            else {
                iterator->next = list1;
                iterator = iterator->next;
                list1 = list1->next;
            }  
        }
        if(!list1)
            iterator->next = list2;
        else 
            iterator->next = list1;
            
        return result;
    }
};