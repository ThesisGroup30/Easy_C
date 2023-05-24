class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;
        int min_freq = INT_MAX;
        
        // Count the frequency of each card in the deck
        for (int card : deck) {
            freq[card]++;
        }
        
        // Find the minimum frequency of a card
        for (auto& [card, count] : freq) {
            min_freq = min(min_freq, count);
        }
        
        // Check if we can find a common divisor greater than 1
        for (int i = 2; i <= min_freq; i++) {
            bool is_divisor = true;
            for (auto& [card, count] : freq) {
                if (count % i != 0) {
                    is_divisor = false;
                    break;
                }
            }
            if (is_divisor) {
                return true;
            }
        }
        
        return false;
    }
};
