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
    int maxLevelSum(TreeNode* root) {
      queue<TreeNode*>q;
       q.push(root);
      int level=0,ans=0,sum=INT_MIN;
        map<int,int>mp;
        while(!q.empty())
       {
           int size = q.size();
           int s=0;
           for(int i = 0 ; i < size ; i++)
           {
               TreeNode* node = q.front();
               s+=node->val;
               q.pop();
               if(node->right) q.push(node->right);
               if(node->left) q.push(node->left);
             
           }
            level++;
            if(sum<s){
                sum=max(sum,s);
                ans=level;
            }
       }
       return ans;
    }
};