/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    void inorder(TreeNode* root,int k){
        if(root==NULL) return;
        inorder(root->left,k);
        pq.push(root->val);
        inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
       inorder(root,k);
    if(k==1) return pq.top();
       
      else{
           k=k-1;
        while(k--){
            pq.pop();
        }
    }
         return pq.top();
    }
};