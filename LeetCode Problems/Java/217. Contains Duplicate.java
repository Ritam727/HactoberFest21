/* Question
Given an integer array nums, return true if any value appears at least twice in 
the array, and return false if every element is distinct.
Example 1:
Input: nums = [1,2,3,1]
Output: true
Example 2:
Input: nums = [1,2,3,4]
Output: false */
class Solution {
    public boolean containsDuplicate(int[] nums) {
        int dup=0,n=nums.length;
        Arrays.sort(nums);
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                dup=1;
                break;
            }
        }
        if(dup==1){
            return true;
        }
        else{
            return false;
        }
        
    }
}