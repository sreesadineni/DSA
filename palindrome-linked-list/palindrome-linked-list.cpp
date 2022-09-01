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
       vector<int>vec;
       while(head!=NULL){
           vec.push_back(head->val);
           head=head->next;
       }
        bool b;
        if(vec.size()==1) return true;
       for(int i=0 ;i <vec.size()/2 ;i++){
           //cout<<vec[i]<<" "<<vec[vec.size()-i-1<<endl;
           if(vec[i]==vec[vec.size()-i-1]){
              b=true;
           }
           else{
               return false;
           }
       }
        return b;
    }
};