#include <iostream>
using namespace std;

class Solution {
public:
    int i = 0;  // Global index to track position

    string decodeString(string s) {
        string res = "";

        while (i < s.length() && s[i] != ']') {
            if (isdigit(s[i])) {
                int num = 0;
                while (isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i++;  // Skip '['
                string decoded = decodeString(s);
                i++;  // Skip ']'

                while (num--) {
                    res += decoded;
                }
            } else {
                res += s[i];
                i++;
            }
        }

        return res;
    }
};
