#include<string>
using namespace std;;

class Trie {
private:
    bool isEnd;
    Trie* children[26];

public:
    Trie() {
        isEnd = false;
        for (int i = 0; i < 26; ++i) {
            children[i] = nullptr;
        }
    }
    
    void insert(string word) {
        Trie *node = this;

        for (char c : word){
            int index = c - 'a';
            if(node->children[index] == nullptr){
                node->children[index] = new Trie();
            }
            node = node->children[index];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        Trie *node = this;
        for(char c : word){
            int index = c - 'a';

            if(node->children[index] == nullptr){
                return false;
            }else{
                node = node->children[index];
            }
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        Trie *node = this;
        for(char c : prefix){
            int index = c - 'a';
            if(node->children[index] == nullptr){
                return false;
            }else{
                node = node->children[index];
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */