class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int zero_count=0;
        int ans=1;
    
        
        for(int j=0; j<n; j++)
        {
            if(nums[j]==0)
            zero_count++;
        while(zero_count > 1)
        {
            if(nums[i]==0)
            zero_count--;

            i++;
        }
        ans=max(ans,j-i+1);
        
    }
    return ans-1;
    }
};