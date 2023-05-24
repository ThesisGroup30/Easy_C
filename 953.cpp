class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        // Build a mapping from characters to their order index
        vector<int> index(26);
        for (int i = 0; i < order.size(); ++i) {
            index[order[i] - 'a'] = i;
        }
        
        // Check if each adjacent pair of words is sorted
        for (int i = 1; i < words.size(); ++i) {
            const string& prev = words[i - 1];
            const string& curr = words[i];
            
            // Compare characters until we find a difference
            int j = 0;
            while (j < prev.size() && j < curr.size() && prev[j] == curr[j]) {
                ++j;
            }
            
            // If the prefix of prev matches the prefix of curr, check their lengths
            if (j == prev.size() && j < curr.size()) {
                return true;
            } else if (j == curr.size() && j < prev.size()) {
                return false;
            }
            
            // Compare the first different characters using the order index
            int prev_idx = index[prev[j] - 'a'];
            int curr_idx = index[curr[j] - 'a'];
            if (prev_idx > curr_idx) {
                return false;
            }
        }
        
        return true;
    }
};
