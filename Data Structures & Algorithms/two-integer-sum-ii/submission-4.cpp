class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n; i++){
            int diff = target - numbers[i];

            int start = i+1, end = n-1;
            while(start <= end){
                int mid = (start + end)/2;
                if(numbers[mid] == diff)
                    return {i+1, mid+1};
                else if (numbers[mid] < diff){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return {};
    }
};
