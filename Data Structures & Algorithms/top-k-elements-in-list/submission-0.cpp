class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> count;
        vector<pair<int, int>> v; // { 빈도, 숫자 }
        vector<int> res;

        for (const auto& x : nums)
        {
            count[x]++;
        }

        // 빈도수에 따라 그룹화   
        for (const auto& p : count)
        {
            v.push_back({p.second, p.first});
        }

        sort(v.rbegin(), v.rend());

        for (int i = 0; i < k; i++)
        {
            res.push_back(v[i].second);
        }

        return res;
    }
};

// Time : O(n long n)
