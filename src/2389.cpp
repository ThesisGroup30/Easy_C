class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        // Sort the input array to simplify the search for subsequences
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int m = queries.size();
        vector<int> ans(m, 0);
        for (int i = 0; i < m; i++) {
            int sum = queries[i];
            int left = 0;
            int right = n - 1;
            // Binary search to find the largest element less than or equal to sum
            while (left <= right) {
                int mid = (left + right) / 2;
                if (nums[mid] <= sum) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            ans[i] = left;
        }
        return ans;
    }
};
