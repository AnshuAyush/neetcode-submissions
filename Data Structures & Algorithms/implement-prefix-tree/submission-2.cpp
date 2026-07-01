#include <bits/stdc++.h>

class PrefixTree {
public:
    map <string, int> mp;
    PrefixTree() {

        
    }
    
    void insert(string word) {
        mp[word] += 1;
    }
    
    bool search(string word) {
        return mp.count(word);
    }
    
   bool startsWith(string prefix) {

    for (auto &it : mp) {

        string word = it.first;

        if (word.substr(0, prefix.size()) == prefix) {
            return true;
        }
    }

    return false;
}
};
