class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return true;
        int mx = 0;
        int i = 0;
        while(i<n && i <= mx){
            mx = max(mx, nums[i] + i);
            if(mx>=n-1) return true;
            i++;
        }
        return false;
    }
};