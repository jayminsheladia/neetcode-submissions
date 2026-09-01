class Solution {
   public:
    string encode(vector<string>& strs) {
        string answer = "";
        for (auto s : strs) {
            answer += to_string(s.size()) + "#" + s;
        }
        return answer;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string val = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#'){
                int x = stoi(val);
                ans.push_back(s.substr(i+1, x));
                i += x;
                val = "";
            }
            else{
                val += s[i];
            }
        }
        return ans;
    }
};
