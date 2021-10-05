class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) 
    {
    
            for(int i=0;i<(m+n);i++)
            {
                if(i<m)
                {
                    nums1[i]=nums1[i];
                }
                else if(i>=m)
                {
                    nums1[i]=nums2[n+m-1-i];
                }
            }
            Arrays.sort(nums1);
            
        
    }
}