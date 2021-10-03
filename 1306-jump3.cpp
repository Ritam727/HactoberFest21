class Solution {
public:
    
    bool dfs(vector<int>& arr, vector<int>& vis, int curr){
        vis[curr] = true;
        if(arr[curr] == 0) return true;
        int left = curr - arr[curr];
        int right = curr + arr[curr];
        bool ans = false;
        if(left >= 0 && vis[left] == false){
            ans = ans || dfs(arr, vis, left);
        }
        if(right < arr.size() && vis[right] == false){
            ans = ans || dfs(arr, vis, right);
        }
        return ans;
    }
    
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<int> vis(n, false);
        return dfs(arr, vis, start);
    }
};