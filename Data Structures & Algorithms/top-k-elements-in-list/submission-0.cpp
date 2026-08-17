class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto x : nums){ //frequency count
            mp[x]++;
        }
        vector<pair<int, int>> result; //stored in vector so that sorting becomes easier
        for(auto x : mp){
            result.push_back({x.second, x.first});
        }
        sort(result.begin(), result.end(), greater<pair<int,int>>());
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(result[i].second);
        }
        return ans;
    }
};
