// Imports: vector, string
#include <vector>
#include <string>

using namespace std;

// Solution begins: Implementation problem (character by character matching)
class Solution {
    public:
        string logestCommonPrefix(vector<string>& strs) {
            string ans = "";
            string s = *min_element(strs.begin(), strs.end()); /// Returns the minimum string: the minimum sized string

            for (int i=0; i<s.size(); i++) {
                for (int j=0; j<strs.size(); j++) {
                    if (s[i] != strs[j][i]) return ans;
                }
                ans.push_back(s[i]);
            }
            return ans;
        }
};
