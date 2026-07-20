class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> group; // nums, index
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++)
        {
            int sub = target - nums[i];
            auto it = group.find(sub);
            if (it != group.end()) return {it->second, i};
            group.emplace(nums[i], i);
        }

        
        return answer;
    }
};
