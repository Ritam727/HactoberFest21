class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        int ans = 0;
        int end = 0;
        int mx = 0;
        for(int i = 0; i<n-1; i++){
            mx = max(mx, i+nums[i]);
            if(i == end){
                ans++;
                end = mx;
            }
        }
        return ans;
    }
};