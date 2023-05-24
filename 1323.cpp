class Solution {
public:
    int maximum69Number (int num) {
        // Convert the integer to a string to access each digit
        string numStr = to_string(num);
        
        // Loop through each digit and change the first 6 to a 9
        for (int i = 0; i < numStr.size(); i++) {
            if (numStr[i] == '6') {
                numStr[i] = '9';
                break;  // Only change one digit
            }
        }
        
        // Convert the modified string back to an integer and return it
        return stoi(numStr);
    }
};
