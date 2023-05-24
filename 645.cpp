class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2, 0);
        int n = nums.size();
        unordered_set<int> seen;
        int sum = n * (n + 1) / 2;
        int duplicate = 0;
        for (int num : nums) {
            if (seen.count(num)) {
                duplicate = num;
            } else {
                seen.insert(num);
                sum -= num;
            }
        }
        result[0] = duplicate;
        result[1] = sum + duplicate;
        return result;
    }
};
