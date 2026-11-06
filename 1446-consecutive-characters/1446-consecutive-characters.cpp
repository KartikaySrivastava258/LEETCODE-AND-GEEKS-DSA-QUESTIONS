class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int maxc = 1;
        int count = 1;

        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1]) {
                count++;
            }
            else {
                count = 1;
            }

            maxc = max(count, maxc);
        }

        return maxc;
    }
};