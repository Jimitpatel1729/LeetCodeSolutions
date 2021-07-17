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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=0,target;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        if(cnt%2==0){
            target=cnt/2;
        }
     
        ListNode* curr=head;
        while(target--){
            curr=curr->next;
            
        }
        return curr;
    }
    
};