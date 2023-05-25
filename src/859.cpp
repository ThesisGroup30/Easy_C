class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        int diff1 = -1, diff2 = -1;
        bool hasDuplicate = false;
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            if (s[i] != goal[i]) {
                if (diff1 == -1) {
                    diff1 = i;
                } else if (diff2 == -1) {
                    diff2 = i;
                } else {
                    return false;
                }
            }
            if (freq[s[i] - 'a'] > 1) {
                hasDuplicate = true;
            }
        }

        if (diff1 != -1 && diff2 != -1) {
            return s[diff1] == goal[diff2] && s[diff2] == goal[diff1];
        } else if (diff1 != -1 || diff2 != -1) {
            return false;
        } else {
            return hasDuplicate;
        }
    }
};
