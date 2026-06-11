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
    bool isPalindrome(ListNode* head) {
        int n=0;
        vector<int> num;
        ListNode* temp=head;
        while(temp){
            num.push_back(temp->val);
            temp=temp->next;
            n++;
        }
        for(int i=0;i<n/2;i++){
            if(num[i]!=num[n-i-1]) return false;
        }
        return true;
    }
};