class Solution {
public:
    using int2=pair<int, int>;
    int V;
    int L1(vector<int>& P, vector<int>& Q){
        return abs(P[0]-Q[0])+abs(P[1]-Q[1]);
    }

    vector<vector<int2>> adj;
    void build_graph(vector<vector<int>>& points){
        adj.resize(V);
        for(int i=0; i<V-1; i++){
            for(int j=i+1; j<V; j++){
                int&& wt=L1(points[i], points[j]);
                adj[i].push_back({wt, j});
                adj[j].push_back({wt, i});
            }
        }

    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        V=points.size();
        build_graph(points);
        priority_queue<int2, vector<int2>, greater<int2>> pq;
        pq.push({0, 0});
        vector<bool> visited(V, 0);
        int ans = 0;
        int n = 0;
        while (!pq.empty()) {
            auto [w, i] = pq.top();
            pq.pop();
            if (visited[i]) continue; // Skip visited 
            visited[i]=1;
            ans+= w;
            n++;
            if (n == V) return ans;
            for (auto& [wt, j] : adj[i]) {
                if (!visited[j]) pq.push({wt, j});
            }
        }
        return -1;
    }
};