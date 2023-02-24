//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool areAnagrams(Node *root1, Node *root2)
    {
     vector<int>ans;
     vector<int>ans1;
     int cnt=1;
     queue<Node*>q;
     queue<Node*>q1;
     q.push(root1);
     q1.push(root2);
     while(!q.empty() && !q1.empty()){
         int n=q.size();
         vector<int>temp;vector<int>temp1;
         for(int i=0;i<n;i++){
             Node* curr=q.front();
             Node* cur=q1.front();
             q.pop();q1.pop();
             //cout<<curr->data<<" ";
            //  cout<<cur->data<<" ";
             temp.push_back(curr->data);
             temp1.push_back(cur->data);
             if(curr->left)q.push(curr->left);
             if(cur->left)q1.push(cur->left);
             if(curr->right)q.push(curr->right);
             if(cur->right)q1.push(cur->right);
         }
         sort(temp1.begin(),temp1.end());
         sort(temp.begin(),temp.end());
        //  for(auto x:temp) cout<<x<<" ";
        //   cout<<endl;
        //   for(auto x1:temp1) cout<<x1<<" ";
        //   cout<<endl;
         if(temp!=temp1) return 0;
     }
    return 1;  
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string treeString1, treeString2;
        getline(cin, treeString1);
        Node *root1 = buildTree(treeString1);
        getline(cin, treeString2);
        Node *root2 = buildTree(treeString2);
        Solution ob;
        cout << ob.areAnagrams(root1, root2) << endl;
    }
    return 0;
}

// } Driver Code Ends