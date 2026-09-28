class Solution {
public:
    int trailingZeroes(int num) {
        int count = 0;
        while(num >= 5){
            count += num/5;
            num = num/5;
        }
    return count;
    }
};
