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
    int CreateGraphAndReturnTime(TreeNode* root, int target){
        map<int,vector<int>>mp;
        queue<TreeNode*> q;
        q.push(root);
        int parent=0;
        TreeNode* f=NULL;
        while(!q.empty()){
            int n=q.size();
                f = q.front();
                q.pop();
                if(f->left) {
                    q.push(f->left);
                    mp[f->val].push_back(f->left->val);
                    mp[f->left->val].push_back(f->val);
                }
                if(f->right) {
                    q.push(f->right);
                    mp[f->val].push_back(f->right->val);
                    mp[f->right->val].push_back(f->val);
                }
        }
         queue<int> que;
         que.push(target);
         bool visited[100001] = {0};
         visited[target] = 1;
         int time = 0;
         while (!que.empty()) {
            int n = que.size();
            bool spread = false;
            for (int i = 0; i < n; i++) {
                int fr = que.front();
                que.pop();
                for (auto num : mp[fr]) {
                    if (!visited[num]) {
                        visited[num] = 1;
                        que.push(num);
                        spread = true;  // Spread has occurred
                    }
                }
            }

        // Increment time if we spread to a new level
        if (spread) time++;
    }
    return time;
    } 
    int amountOfTime(TreeNode* root, int start) {
        return CreateGraphAndReturnTime(root,start);
    }
};