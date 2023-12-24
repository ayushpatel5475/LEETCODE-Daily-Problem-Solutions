class Solution {
public:
    int minOperations(string s) {
        int l = s.length();
        int count = 0;
        for (int i = 0; i < l; i++) {
            if (i % 2) {                //  0  1  2  3  4
                                        //  0  1  0  1  0
                                        // even index=0 , odd index =1
                if (s[i] == '0') {
                    count++;
                }
            } else {
                if (s[i] == '1') {
                    count++;
                }
            }
        }

        return min(count, l - count);
    }
};

