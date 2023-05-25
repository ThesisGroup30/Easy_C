class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        int length = 0;
        bool hasOdd = false;
        
        // count frequency of each character in s
        for (char c : s) {
            freq[c]++;
        }
        
        // count the length of the longest palindrome
        for (auto p : freq) {
            if (p.second % 2 == 0) {
                length += p.second;
            } else {
                length += p.second - 1;
                hasOdd = true;
            }
        }
        
        // if s contains at least one character with an odd frequency,
        // we can add one more character to the palindrome
        if (hasOdd) {
            length++;
        }
        
        return length;
    }
};
