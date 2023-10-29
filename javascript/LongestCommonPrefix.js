/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let pivot = strs.reduce((a,b) => a.length <= b.length ? a:b);
    let ans = "";

    if (pivot=="" || strs.length == 0) return ans;

    for (let i=0; i<pivot.length; i++) {
        for (let j=0; j<strs.length; j++) {

            if (pivot[i] != strs[j][i]) return ans;

        };

        ans+=pivot[i];
    };

    return ans;
};
