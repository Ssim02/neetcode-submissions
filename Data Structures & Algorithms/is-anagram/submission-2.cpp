class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; // can't make an anagram

        unordered_map<char, int> count;
        
        for (auto x : s) {
            count[x]++;
        }
        for (auto y : t) {
            count[y]--;
        }

        for (auto [ch, cnt] : count) {
            if (cnt != 0) return false;
        }

        return true;
    }
};
