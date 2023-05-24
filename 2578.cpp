#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int splitNum(int num) {
        vector<int> freq(10, 0); // frequency of each digit in num
        int sum = 0;
        
        // count the frequency of each digit in num
        while (num > 0) {
            freq[num % 10]++;
            num /= 10;
        }
        
        // create num1 and num2 by alternating digits from high to low
        int len = 0;
        for (int i = 9; i >= 0; i--) {
            for (int j = 0; j < freq[i]; j++) {
                if (len % 2 == 0) {
                    sum += i;
                }
                len++;
            }
        }
        
        return sum;
    }
};
