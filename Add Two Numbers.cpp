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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return createList(l1,l2,0);
    }
    ListNode* createList(ListNode* l1, ListNode* l2,int carry) {
        int num=carry;
        if(!l1 and !l2 )
            if(carry) return new ListNode(carry, NULL);
            else    return NULL;
        if(l1)
        {
            num+=l1->val;
            l1=l1->next;
        }
        if(l2)
        {
            num+=l2->val;
            l2=l2->next;
        }
            return new ListNode(num%10, createList(l1,l2,num/10));
    }
        
};
