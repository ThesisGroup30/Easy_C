class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s) { // iterate over every character in s
            if (c >= 'A' && c <= 'Z') { // if it's an uppercase letter
                c = c - 'A' + 'a'; // replace it with the lowercase letter
            }
        }
        return s;
    }
};
