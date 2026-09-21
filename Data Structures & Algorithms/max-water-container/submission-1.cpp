class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n - 1;
        int maxArea = 0;
        while(l < r){       
            if(heights[l] <= heights[r]){
                maxArea = max(maxArea, heights[l]*(r - l));
                l++;
            }
            else {
                maxArea = max(maxArea, heights[r]*(r - l));
                r--;
            }
        }
        return maxArea;
    }
};
