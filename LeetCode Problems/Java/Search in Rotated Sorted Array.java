33. Search in Rotated Sorted Array

There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.
    
class Solution {
    public int search(int[] nums, int target) {
       int fp = findpivot(nums);
        if(fp == -1){
            return binarysearch(nums, 0, nums.length - 1, target );
        }
        if(nums[fp] == target){
                return fp;
            }
        else if(target >= nums[0]){
                return binarysearch(nums, 0, fp - 1, target);
            }
        else{
                return binarysearch(nums, fp + 1, nums.length - 1, target);
            }
        
        
    }
    public int findpivot(int[] arr){
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if(mid < end && arr[mid] > arr[mid+1] ){
                return mid;
            }
            else if(start < mid && arr[mid-1] > arr[mid] ){
                return mid - 1;
            }
            else if(arr[start] >= arr[mid] ){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
    public int binarysearch(int[] arr, int start, int end, int target){
        
        while (start <= end){
            int mid = start + (end-start) / 2;
            if(arr[mid] == target){
                return mid;
            }
            else if (arr[mid] > target){
                end = mid -1;
            }
            else{
                start = mid +1;
            }

        }return -1;
        }
}
