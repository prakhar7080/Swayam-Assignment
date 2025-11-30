class Solution {
public:
    int wordCount(TrieNode* root) {
        if(!root) return 0;
        
        int count = 0;
        if(root->isEndOfWord) count++;
        
        for(int i=0; i<26; i++){
            if(root->children[i]){
                count += wordCount(root->children[i]);
            }
        }
        return count;
    }
};
