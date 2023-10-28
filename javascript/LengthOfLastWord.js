// Leetcode: https://leetcode.com/problems/length-of-last-word/
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let lastWordSize = 0;
    let stringSize = s.length;
    let i = 0;

    while (i<stringSize) {
        if (s[i] != " ") {
            lastWordSize++;
            i++;
        }
        else {
            while (i<stringSize && s[i]==" ") i++;

            if (i==stringSize) {
                return lastWordSize;
            } else {
                lastWordSize = 0;
            }
        }
    }
    return lastWordSize;
};
/*
 * Complexity analysis
 * Time: O(n)
 * Since we iterate through all the string once and once only
 * we have a linear dependency on the size of the string.
 * Space: O(1)
 * We use a constant number of variables to keep track of the size of the last word.
*/
