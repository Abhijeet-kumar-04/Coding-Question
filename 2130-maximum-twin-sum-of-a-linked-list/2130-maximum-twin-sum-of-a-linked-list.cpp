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
    ListNode* reverse (ListNode* head){
        ListNode* curr=head;
        ListNode* NEXT=head;
        ListNode* pre=head;
        while(curr){
            NEXT=curr->next;
            curr->next=pre;
            pre=curr;
            curr=NEXT;
        }
        return pre;
    }
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* head2=slow->next;
        slow->next=NULL;
        head2=reverse(head2);
        int maxi=0;
        while(head2 && head){
            maxi=max(head->val+head2->val,maxi);
            head=head->next;
            head2=head2->next;
        }
        return maxi;
    }
};