class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        int n = strs.size();
        int i = 1;
        bool finished = false;

        while(i < n && !finished) {
            int j = 0;
            string actual = strs[i];
            int m = strs[i].size();
            
            while(j < m && res[j] == actual[j]) {
                j++;
            }

            if(j != res.size()) {
                if(j == 0) {
                    res = "";
                    finished = true;
                }
                else {
                    res.erase(j);
                }
            }

            i++;
        }

        return res;
    }
};