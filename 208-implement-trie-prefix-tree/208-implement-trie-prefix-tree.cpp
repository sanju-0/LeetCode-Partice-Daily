class Trie {
private:
    struct TrieNode{
        struct TrieNode *cell[26];
        bool isEnd;
    };
    TrieNode* node;
public:
    Trie() {
      node = new TrieNode();  
    }
    
    void insert(string word) {
     TrieNode* curr = node;
     for(char c:word){
         if(curr->cell[c-'a']==NULL) curr->cell[c-'a'] = new TrieNode();
         curr = curr->cell[c-'a'];
      }
       curr->isEnd = true; 
    }
    
    bool search(string word) {
     TrieNode* curr = node;
        for(char c:word){
            if(curr->cell[c-'a']==NULL) return false;
            curr = curr->cell[c-'a'];
        }
        if(curr->isEnd == true) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
      TrieNode* curr = node;
        for(char c:prefix){
            if(curr->cell[c-'a']==NULL) return false;
            curr = curr->cell[c-'a'];
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