class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string start,end;
        start=strs[0];
        end=strs[n-1];
        string ans="";
        
        for(int i=0; i<min(start.size(),end.size());i++)
        {
            if(start[i]!=end[i])
            {
                return ans;
            }
                ans+=start[i];
            
        }
        return ans;
    }
};