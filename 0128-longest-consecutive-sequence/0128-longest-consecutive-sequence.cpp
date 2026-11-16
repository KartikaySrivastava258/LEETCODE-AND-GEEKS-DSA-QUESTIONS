class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st (nums.begin(),nums.end());

        int longest=0;

        for(auto x : st)
        {
            if(st.find(x-1)==st.end())
            {
                int current_num=x;
                int count=1;
                while(st.find(current_num+1)!=st.end())
                {
                    current_num++;
                    count++;
                }
                longest=max(count,longest);
            }
    
        }

        return longest;
    }
};