class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> charMap1, charMap2;
        for (int i = 0; i < s.size(); ++i) {
            if (charMap1.count(s[i]) && charMap1[s[i]] != t[i]) {
                return false;
            }
            if (charMap2.count(t[i]) && charMap2[t[i]] != s[i]) {
                return false;
            }
            charMap1[s[i]] = t[i];
            charMap2[t[i]] = s[i];
        }
        return true;
    }
};
