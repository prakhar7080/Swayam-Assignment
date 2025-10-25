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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        TreeNode *root;
        unordered_map<int, TreeNode*>mp;
        unordered_set<int>child;
        for(auto &ele : descriptions){
            if(mp[ele[0]] == nullptr){
                TreeNode *newnode = new TreeNode(ele[0]);
                mp[ele[0]] = newnode;
            }
            if(mp[ele[1]] == nullptr){
                TreeNode *newnode = new TreeNode(ele[1]);
                mp[ele[1]] = newnode;
            }
            if(ele[2] == 1){
                mp[ele[0]]->left = mp[ele[1]];
            }
            else{
                mp[ele[0]]->right = mp[ele[1]];
            }
            child.insert(ele[1]);
        }
        for(auto &n : mp){
            if(child.find(n.first) == child.end()){
                root = n.second;
                break;
            }
        }
        return root;
    }
};
