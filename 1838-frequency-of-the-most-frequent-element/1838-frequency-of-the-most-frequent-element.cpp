class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        int n=nums.size();
        long long  sum=0;
        int ans=1;
        int i=0;

        sort(nums.begin(), nums.end());
        for(int j=0; j<n; j++)
        {
            sum+=nums[j];

            while(1LL *(j-i+1)*(nums[j])-sum > k)
            {
                sum-=nums[i];
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};