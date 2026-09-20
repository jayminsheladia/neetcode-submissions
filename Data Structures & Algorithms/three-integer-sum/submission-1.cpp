class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            int a = nums[i];
            if(a>0)
                break;
            if(i > 0 && a == nums[i - 1]){
                continue;
            }
            int l = i + 1, r = n-1;
            while(l < r){
                int threeSum = nums[i] + nums[l] + nums[r];
                if(threeSum > 0){
                    r = r - 1;
                }
                else if(threeSum < 0){
                    l = l + 1; 
                }
                else{
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l-1]){
                        l++;
                    }
                }
            }
        }
        return res;
    }
};
