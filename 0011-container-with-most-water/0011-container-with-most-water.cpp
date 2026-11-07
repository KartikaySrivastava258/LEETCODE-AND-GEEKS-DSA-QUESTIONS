class Solution {
public:
int maxArea(vector<int>& h) {
    int l=0,r=h.size()-1,ans=0,mini=0;
    while(l<r)
    {
        mini=min(h[l],h[r]);
        ans=max(ans,(r-l)*mini);
        h[l]<h[r]?l++:r--;
    }
    return ans;
}
};