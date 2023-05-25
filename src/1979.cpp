#include <vector>
#include <algorithm>

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int smallest = *min_element(nums.begin(), nums.end());
        int largest = *max_element(nums.begin(), nums.end());
        return gcd(smallest, largest);
    }
    
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }
};
