/*
 * You have to print all the numbers from 1 to N, each on a new line, except for the following conditions:
 * If the number is a multiple of 3, print Fizz instead of the number.
 * If the number is a multiple of 5, print Buzz instead of the number.
 * If the number is a multiple of both 3 and 5, print FizzBuzz instead of the number.
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for (int i=1;i<=n;i++) {
            if (i%15==0) {
                ans.push_back("FizzBuzz");
            }
            else if (i%5==0) {
                ans.push_back("Buzz");
            }
            else if (i%3==0) {
                ans.push_back("Fizz");
            }
            else {
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};
