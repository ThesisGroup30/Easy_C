class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> integers;
        int i = 0, n = word.size();
        while (i < n) {
            if (isdigit(word[i])) {
                int j = i;
                while (j < n && isdigit(word[j])) {
                    ++j;
                }
                while (i < j && word[i] == '0') {
                    ++i;
                }
                integers.insert(word.substr(i, j - i));
                i = j;
            } else {
                ++i;
            }
        }
        return integers.size();
    }
};
