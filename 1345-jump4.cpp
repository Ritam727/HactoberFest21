class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i<n; i++){
            mp[arr[i]].push_back(i);
        }
        vector<int> dp(n, INT_MAX);
        dp[0] = 0;
        queue<int> q;
        int ans = 1;
        q.push(0);
        unordered_set<int> st;
        while(!q.empty()){
            int len = q.size();
            for(int i = 0; i<len; i++){
                int curr = q.front();
                q.pop();
                if(st.find(arr[curr]) == st.end()){
                    for(auto next : mp[arr[curr]]){
                        if(dp[next] == INT_MAX){
                            q.push(next);
                            dp[next] = ans;
                        }
                    }
                    st.insert(arr[curr]);
                }
                if(curr+1<n && dp[curr+1] == INT_MAX){
                    dp[curr+1] = ans;
                    q.push(curr+1);
                }
                if(curr-1>=0 && dp[curr-1] == INT_MAX){
                    dp[curr-1] = ans;
                    q.push(curr-1);
                }
            }
            ans++;
        }
        return dp[n-1];
    }
};