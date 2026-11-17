class Solution {
public:

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        unordered_map<int,vector<int>> mp;
        vector<bool> visited(n,false);

        for(auto &edge : edges)
        {
            int u= edge[0];
            int v= edge[1];

            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        queue<int> q;
        q.push(source);
        visited[source]=true;

        while(!(q.empty()))
        {
            int node=q.front();
            q.pop();

            if(node==destination)
            return true;

            for(auto &it : mp[node])
            {
                if(!visited[it])
                {
                    q.push(it);
                    visited[it]=true;
                }
            }
        }

      return false;
    }
};