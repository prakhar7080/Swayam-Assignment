class Solution {
public:
    struct Node {
        char ch;
        Node* left;
        Node* right;
        Node(char c){
            ch = c;
            left = right = nullptr;
        }
    };
    
    string decodeHuffman(Node* root, string s){
        string res = "";
        Node* curr = root;
        for(char &bit : s){
            if(bit == '0') curr = curr->left;
            else curr = curr->right;
            
            if(!curr->left && !curr->right){
                res += curr->ch;
                curr = root;
            }
        }
        return res;
    }
};
