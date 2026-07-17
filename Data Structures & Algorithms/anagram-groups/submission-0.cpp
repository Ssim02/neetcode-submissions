class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> group;
        vector<vector<string>> answer;


        for (const auto& str : strs)
        {
            string label = str; // sort의 반환 타입이 void이므로, 복사한 후 정렬
            sort(label.begin(), label.end());
            group[label].push_back(str);                
        }

        for (auto res : group)
        {
            answer.push_back(res.second);
        }

        return answer;
    }
};
