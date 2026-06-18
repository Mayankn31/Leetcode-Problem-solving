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
    ListNode* reverseList(ListNode* head){
        if(!head || !head->next) return head;

        ListNode* newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secondHead=slow->next;
        slow->next=NULL;

        secondHead=reverseList(secondHead);

        slow=head;
        fast=secondHead;

        while(slow && fast){
            ListNode* temp=slow->next;
            slow->next=fast;
            fast=fast->next;
            slow->next->next=temp;
            slow=temp;
        }
    }
};