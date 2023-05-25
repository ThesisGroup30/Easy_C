class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        int volume = length * width * height;
        bool isBulky = (length >= 104 || width >= 104 || height >= 104 || volume >= 1e9);
        bool isHeavy = (mass >= 100);
        if (isBulky && isHeavy) {
            return "Both";
        } else if (isBulky) {
            return "Bulky";
        } else if (isHeavy) {
            return "Heavy";
        } else {
            return "Neither";
        }
    }
};
