class Solution {
    int temp;
    int skip;
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        
        int count = 0;
        for(int i = 0; i < nums.length; i++){
            if(i == 0){
                temp = nums[i];
                continue;
            }else if(temp == nums[i]){
                count++;
                continue; //skip
            }else if(temp != nums[i]){
                if(count > 0){
                    count = 0;
                    temp = nums[i];
                }else{
                    return temp;
                }
            }
        }
        return temp;
    }
}