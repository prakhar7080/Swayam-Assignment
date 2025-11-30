class Solution {
public:
    bool deleteHelper(trie_node_t* node, char key[], int depth){
        if(!node) return false;
        
        if(key[depth] == '\0'){
            node->value = 0;
            
            for(int i=0; i<ALPHABET_SIZE; i++){
                if(node->children[i]) return false;
            }
            return true;
        }
        
        int idx = key[depth] - 'a';
        if(deleteHelper(node->children[idx], key, depth+1)){
            delete node->children[idx];
            node->children[idx] = nullptr;
            
            if(node->value != 0) return false;
            for(int i=0; i<ALPHABET_SIZE; i++){
                if(node->children[i]) return false;
            }
            return true;
        }
        return false;
    }
    
    void deleteKey(trie_node_t *root, char key[]) {
        deleteHelper(root, key, 0);
    }
};
