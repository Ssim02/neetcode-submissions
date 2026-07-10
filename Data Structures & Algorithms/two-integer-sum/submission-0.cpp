class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        int complement = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            complement = target - nums[i];
            auto it = myMap.find(complement);
            if (it != myMap.end()) 
            {
                return {it->second, i};
            }
        
            myMap.insert({nums[i], i}); // can't find complement

        }
        return {};
    }
};
