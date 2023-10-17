class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& left, vector<int>& right) {
//       calculate indegree of each vertex indegree of root:must have 0 indegree
       vector<int> indegree(n, 0);
        for(int i = 0; i<n; i++){
            if(left[i] != -1){
                indegree[left[i]]++;
            }
            if(right[i] != -1){
                indegree[right[i]]++;
            }
        }
//         if there is no root or multiple roots then it is not a binary tree
        int root = -1;
        for(int i = 0; i<n; i++){
            if(indegree[i] == 0){     
                if(root == -1){
                    root = i;
                }
                else{        //if multiple vertex contain indegree 0 then tree has more than 1 root
                    return false;
                }
            }
        }
        if(root == -1){        //if no root present in then it is no binary tree
            return false;
        }
// bfs to find there is no cycles or repeated visited element
        vector<int> visited(n, 0);
        queue<int> q;
        q.push(root);

        while(!q.empty()){
            int temp = q.front();
            q.pop();
            if(visited[temp]){
                return false;
            }
            visited[temp] = 1;
            if(left[temp] != -1){
                q.push(left[temp]);
            }
            if(right[temp] != -1){
                q.push(right[temp]);
            }
        }
        int sum = 0;
        for(auto i : visited){
            if(i == 1){
                sum++;
            }
        }
        return sum == n;    //TC: O(n)  SC:O(n)
        
    }
};