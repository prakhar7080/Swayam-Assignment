class Solution {
  public:
    bool isHeap(Node* root) {
        if (!root) return true;
        queue<Node*> q;
        q.push(root);
        bool nullFound = false;

        while (!q.empty()) {
            Node* cur = q.front(); q.pop();

            if (cur->left) {
                if (nullFound) return false;                   // completeness violated
                if (cur->left->data > cur->data) return false; // heap-order violated
                q.push(cur->left);
            } else {
                nullFound = true;
            }

            if (cur->right) {
                if (nullFound) return false;                    // completeness violated
                if (cur->right->data > cur->data) return false; // heap-order violated
                q.push(cur->right);
            } else {
                nullFound = true;
            }
        }

        return true;
    }
};
