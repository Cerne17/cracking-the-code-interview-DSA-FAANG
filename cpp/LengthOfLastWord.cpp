// Leetcode: https://leetcode.com/problems/length-of-last-word/
// Aproach: Reversing the string and then looking for the length of the first word in the reversed string

class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWordSize = 0;
        int stringSize = s.size();
        int i = 0;
        
        while (i<stringSize) {
            if (s[i] != ' ') {
                lastWordSize++;
                i++;
            } else {
                while (i<stringSize && s[i] == ' ') i++;

                if (i==stringSize) {
                    return lastWordSize;
                } else {
                    lastWordSize = 0;
                }
            }
        }
        return lastWordSize;
    }
};

/*
 * Complexity analysis
 * Time: O(n)
 * Since we iterate through all the string once and once only
 * we have a linear dependency on the size of the string.
 * Space: O(1)
 * We do not use any extra space.
*/
