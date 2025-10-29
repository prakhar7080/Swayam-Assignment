/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    void find(Node *root, int pos, int &l, int &r){
        if(root == nullptr) return;
        l = min(pos,l);
        r = max(pos,r);
        
        find(root->left,pos-1,l,r);
        find(root->right,pos+1,l,r);
    }
    vector<int> topView(Node *root) {
        int l = 0;
        int r = 0;
        find(root,0,l,r);
        vector<int>ans(r-l+1);
        vector<int>filled(r-l+1);
        queue<Node*>q;
        queue<int>index;
        q.push(root);
        index.push(-l);
        while(!q.empty()){
            Node *temp = q.front();
            q.pop();
            int pos = index.front();
            index.pop();
            if(filled[pos] == 0){
                filled[pos] = 1;
                ans[pos] = temp->data;
            }
            if(temp->left){
                q.push(temp->left);
                index.push(pos-1);
            }
            if(temp->right){
                q.push(temp->right);
                index.push(pos+1);
            }
        }
        return ans;
    }
};
