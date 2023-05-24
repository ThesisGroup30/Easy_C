class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // Create an empty map to store the frequency of each number in nums1
        unordered_map<int, int> freq;
        for (int num : nums1) {
            freq[num]++;
        }
        
        // Create a vector to store the intersection of nums1 and nums2
        vector<int> result;
        for (int num : nums2) {
            if (freq[num] > 0) {
                // If the number is in both arrays, add it to the result
                result.push_back(num);
                // Decrement the frequency of the number in nums1
                freq[num]--;
            }
        }
        
        return result;
    }
};
