class Solution {
public:
    struct Node {
        char ch;
        int freq;
        Node *left, *right;
        Node(char c, int f){
            ch = c;
            freq = f;
            left = right = nullptr;
        }
    };
    
    struct cmp{
        bool operator()(Node* a, Node* b){
            return a->freq > b->freq;
        }
    };
    
    void buildCodes(Node* root, string code, vector<string> &res, unordered_map<char,int> &mp){
        if(!root) return;
        if(!root->left && !root->right){
            res[mp[root->ch]] = code;
            return;
        }
        buildCodes(root->left, code + "0", res, mp);
        buildCodes(root->right, code + "1", res, mp);
    }
    
    vector<string> huffmanCodes(string S, vector<int> f, int N) {
        priority_queue<Node*, vector<Node*>, cmp> pq;
        unordered_map<char,int> mp;
        for(int i=0; i<N; i++){
            Node* node = new Node(S[i], f[i]);
            pq.push(node);
            mp[S[i]] = i;
        }
        
        while(pq.size() > 1){
            Node* a = pq.top(); pq.pop();
            Node* b = pq.top(); pq.pop();
            Node* parent = new Node('$', a->freq + b->freq);
            parent->left = a;
            parent->right = b;
            pq.push(parent);
        }
        
        Node* root = pq.top();
        vector<string> res(N);
        buildCodes(root, "", res, mp);
        return res;
    }
};
