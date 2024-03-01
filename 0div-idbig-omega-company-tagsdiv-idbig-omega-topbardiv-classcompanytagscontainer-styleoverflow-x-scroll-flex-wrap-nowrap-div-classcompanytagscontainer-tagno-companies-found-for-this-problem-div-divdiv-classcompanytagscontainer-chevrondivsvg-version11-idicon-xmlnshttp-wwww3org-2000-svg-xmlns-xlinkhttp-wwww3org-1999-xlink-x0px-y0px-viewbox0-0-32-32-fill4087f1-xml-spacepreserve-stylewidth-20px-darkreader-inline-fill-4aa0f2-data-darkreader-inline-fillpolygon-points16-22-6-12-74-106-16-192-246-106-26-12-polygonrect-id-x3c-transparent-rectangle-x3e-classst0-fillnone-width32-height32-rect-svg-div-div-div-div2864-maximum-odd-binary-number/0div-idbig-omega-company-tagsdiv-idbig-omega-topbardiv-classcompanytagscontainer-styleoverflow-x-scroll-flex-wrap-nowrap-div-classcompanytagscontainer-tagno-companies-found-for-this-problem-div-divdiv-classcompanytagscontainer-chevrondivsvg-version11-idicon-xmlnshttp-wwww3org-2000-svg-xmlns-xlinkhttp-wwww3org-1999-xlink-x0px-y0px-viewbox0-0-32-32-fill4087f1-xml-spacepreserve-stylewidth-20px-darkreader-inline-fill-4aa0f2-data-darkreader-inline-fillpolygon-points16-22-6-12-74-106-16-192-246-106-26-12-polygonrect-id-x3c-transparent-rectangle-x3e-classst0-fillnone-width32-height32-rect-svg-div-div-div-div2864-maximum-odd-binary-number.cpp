class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = count(s.begin(), s.end(), '1');
        int zeros = s.size() - ones;

        string result;
        result += string(ones - 1, '1');
        result += string(zeros, '0');
        result += '1';

        return result;
    }
};