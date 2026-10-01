class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        
        // Pre-allocate memory for efficiency (max possible length is max(N,M) + 1)
        std::string result;
        result.reserve(std::max(i, j) + 2); 

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            
            // Fast char conversion: '0' + (0 or 1)
            result.push_back((sum % 2) + '0'); 
            carry = sum / 2;
        }
        
        // Reverse is highly optimized in C++ when memory is contiguous
        std::reverse(result.begin(), result.end());
        return result;
    }
};