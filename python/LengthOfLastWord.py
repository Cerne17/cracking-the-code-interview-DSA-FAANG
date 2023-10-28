# Link: https://leetcode.com/problems/length-of-last-word/
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        last_word_size = 0
        string_size = len(s)
        i = 0

        while i<string_size:
            if s[i] != " ":
                last_word_size+=1
                i+=1

            else:
                while (i<string_size and s[i] == " "): i+=1

                if i == string_size:
                    return last_word_size
                
                else:
                    last_word_size = 0
        
        return last_word_size 

'''
    Complexity analysis:
    * Time: O(n)
        Since we loop through all the characters in the string, once, the time complexity grows linearly
        with the size of the input.
    * Space: O(1)
        We only use a constant number of variables, so the space complexity is constant.
'''
