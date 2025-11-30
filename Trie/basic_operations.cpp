#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;

struct trie_node {
    int value; // non zero if leaf
    trie_node* children[ALPHABET_SIZE];
    
    trie_node(){
        value = 0;
        for(int i=0; i<ALPHABET_SIZE; i++) children[i] = nullptr;
    }
};

class Trie {
public:
    trie_node* root;
    
    Trie(){
        root = new trie_node();
    }
    
    void insertKey(char key[], int val){
        trie_node* node = root;
        for(int i=0; key[i]!='\0'; i++){
            int idx = key[i] - 'a';
            if(!node->children[idx]) node->children[idx] = new trie_node();
            node = node->children[idx];
        }
        node->value = val;
    }
    
    bool searchKey(char key[]){
        trie_node* node = root;
        for(int i=0; key[i]!='\0'; i++){
            int idx = key[i] - 'a';
            if(!node->children[idx]) return false;
            node = node->children[idx];
        }
        return node->value != 0;
    }
    
    bool deleteHelper(trie_node* node, char key[], int depth){
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
    
    void deleteKey(char key[]){
        deleteHelper(root, key, 0);
    }
};
