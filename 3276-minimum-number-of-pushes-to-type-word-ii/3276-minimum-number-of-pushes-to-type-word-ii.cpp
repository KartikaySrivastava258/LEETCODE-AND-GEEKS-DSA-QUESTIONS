class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        vector<int> freq(26,0);

        for(char ch : word)
        {
            freq[ch - 'a']++;
        }
        sort(freq.rbegin(),freq.rend());

        int push=0;
        for(int i=0; i<26; i++)
        {
            int cost=(i/8)+1;
            push=push+freq[i]*cost;
        }
        return push;
        
    }
};