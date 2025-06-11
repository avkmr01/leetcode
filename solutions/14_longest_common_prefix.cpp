#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:

    // Helper function to find the shortest word
    string findShortestWord(const vector<string>& words) {
        return *min_element(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.size() < b.size();
        });
    }

    struct trie {
        trie* children[26];
        bool endOfWord;

        trie() {
            endOfWord = false;
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
    };

    string longestCommonPrefix(vector<string>& strs) {
        int numOfWords = strs.size();
        if (numOfWords == 0) return "";
        if (numOfWords == 1) return strs[0];

        trie* root = new trie();

        // Insert only the shortest word into trie
        string smallestWord = findShortestWord(strs);
        trie* node = root;
        for (char c : smallestWord) {
            int index = c - 'a';
            node->children[index] = new trie();
            node = node->children[index];
        }
        node->endOfWord = true;

        // Now check for each word how much prefix matches
        int minPrefixLength = smallestWord.length();

        for (const string& word : strs) {
            trie* nodeCheck = root;
            int matchLength = 0;
            for (char c : word) {
                int index = c - 'a';
                if (nodeCheck->children[index] != nullptr) {
                    matchLength++;
                    nodeCheck = nodeCheck->children[index];
                } else {
                    break;
                }
            }
            minPrefixLength = min(minPrefixLength, matchLength);
            if (minPrefixLength == 0) break;  // early exit optimization
        }

        return smallestWord.substr(0, minPrefixLength);
    }
};
