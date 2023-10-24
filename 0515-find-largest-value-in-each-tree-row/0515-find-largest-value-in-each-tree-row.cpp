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
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
                if(root==NULL) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int mini=INT_MIN;
            for(int i=0 ; i<n ; i++){
                TreeNode* f=q.front();
                if(f!=NULL && f->val>mini) mini=f->val;
                q.pop();
                if(f->left!=NULL){
                     q.push(f->left);
                }
                 if(f->right){
                    q.push(f->right);
                }
            }
            res.push_back(mini);
        }
        return res;
    }
};