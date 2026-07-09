class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> res; // empty set
        for (int x : nums) {
            if (res.contains(x)) return true;
            res.insert(x);
        }
        return false;            
    }
};