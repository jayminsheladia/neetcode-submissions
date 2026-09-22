class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> temp(nums.begin(), nums.end());
        int longest_seq = 0;
        for(int i = 0; i < nums.size(); i++){
            if(temp.find(nums[i] - 1) == temp.end()){
                int len = 1;
                while(temp.find(nums[i] + len) != temp.end()){
                    len++;
                }
                longest_seq = max(longest_seq, len);
            }
        }
        return longest_seq;
    }
};
