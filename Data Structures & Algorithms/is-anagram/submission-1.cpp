class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s.length() != t.length()) return false; // can't make an anagram

        int i = 0;

        for (auto x : s) {
            if (x != t[i++]) return false;
        }

        return true;
    }
};
