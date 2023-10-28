// https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        char temp;
        while(i<j) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};

/*
 * Complexity analysis
 * Time: O(n)
 * Since we iterate through all the string once and once only
 * we have a linear dependency on the size of the string.
 * Space: O(1)
 * We use a constant number of variables, thus, our space complexity is independent of string's size.
*/
