class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs[0] == "")
            return ans;
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[strs.size()-1];
        for(int i=0;i<first.size();i++) {
            if(first[i] == last[i])
                ans += first[i];
            else 
                break;
        }
        return ans;
    }
};
