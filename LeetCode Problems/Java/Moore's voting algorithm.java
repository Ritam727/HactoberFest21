https://leetcode.com/problems/majority-element/

class Solution {
    /*moore's voting algorithm is being used here*/
    
    public int majorityElement(int[] nums) {
        
        int Count = 0;
        int element=0;
        for(int i=0; i<nums.length; i++)
        {
            if(Count == 0)
            {
                element= nums[i];
                Count = 1;
            }
            else if(element == nums[i])
            {
                Count++;
            }
            else
            {
                Count--;
            }
        }
        
        return element;
    }
}
