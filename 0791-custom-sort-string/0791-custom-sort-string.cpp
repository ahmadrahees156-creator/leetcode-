class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";

        for (int i = 0; i < order.length(); i++) {
            for (int j = 0; j < s.length(); j++) {
                if (order[i] == s[j]) {
                    ans += s[j];
                    s.erase(j, 1);
                    j--;
                }
            }
        }

        ans += s;
        return ans;
    }
};
