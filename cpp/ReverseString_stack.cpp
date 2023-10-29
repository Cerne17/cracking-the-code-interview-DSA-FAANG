// 1. Push all chars
// 2. Pop all chars
// T = O(n) (length), S = O(n) (stack)
class Solution {
    public:
        void reverseString(vector<char>& A) {
            stack<char> st;
            for (int i=0; i<s.size(); i++) {
                st.push(A[i]);
            } // Pushing
            for (int i=0; i<s.size(); i++) {
                A[i] = st.top();
                st.pop();
            } // Popping
        }
};

// Using constant memory: S = O(1)
class Solution {
    public:
        void reverseString(vector<char>& s) {
            int n = s.size();
            for (int i=0; i<n/2; i++) {
                swap(s[i], s[n-i-1]);
            }
        }
};

// Using recursion
class Solution {
    public:
        void reverseString(vector<char>& s) {
            helper(s, 0, s.size()-1);
        }
        void helper(vector<char>& s, int left, int right) {
            if (left >= right) return;
            swap(s[left], s[right]);
            helper(s, left+1, right-1);
        }
};

// Using reverse() function
class Solution {
    public:
        void reverseString(vector<char>& s) {
            reverse(s.begin(), s.end());
        }
};
