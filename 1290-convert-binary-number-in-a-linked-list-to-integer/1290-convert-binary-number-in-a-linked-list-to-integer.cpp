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
    int l(ListNode* head){
        int n=0;
        while(head){
            n++;
            head=head->next;
        }
        return n;
    }
    int getDecimalValue(ListNode* head) {
        int i=l(head)-1;
        int res=0;
        ListNode* temp=head;
        while(temp){
            res+=pow(2,i)*(temp->val);
            temp=temp->next;
            i--;
        }
        return res;
    }
};