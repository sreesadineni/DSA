/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s=head,*f=head;
        while(f && f->next){
            f=f->next->next;
            s=s->next;
            if(s==f) return true;
        }
        //Approach -2
        // if(head==NULL) return false;
        // map<ListNode*,bool>mp;
        // while(head!=NULL){
        //     if(mp[head]==false){
        //     mp[head]=true;
        //     }
        //     else{
        //         return true;       
        //     }
        //     head=head->next;
        // }
        return false;
    }
};