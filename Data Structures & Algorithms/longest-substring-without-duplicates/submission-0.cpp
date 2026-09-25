class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, res = 0;
        unordered_set<char> charSet;
        for(int i = 0; i < s.size(); i++){
            while(charSet.count(s[i]) > 0){
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[i]);
            res = max(res, i - l + 1);
        }
        return res;
    }
};
