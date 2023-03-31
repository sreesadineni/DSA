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
vector<int> inorder(TreeNode* r, vector<int>&v){
    if(r==NULL) return v;
    inorder(r->left,v);
    v.push_back(r->val);
    inorder(r->right,v);
    return v;
}
    bool findTarget(TreeNode* root, int k) {
        vector<int>in;
        vector<int>v=inorder(root,in);
        int n=v.size();
        for(int i=0 ; i<n ; i++){
            for(int j=i+1; j<n ; j++){
                if(v[j]+v[i]==k) {
                    return true;
                }
            }
        }
        return false;
    }
};