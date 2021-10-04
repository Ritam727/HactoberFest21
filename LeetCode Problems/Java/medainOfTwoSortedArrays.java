import java.util.*;
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int i = 0;
        int j = 0;
        int k = 0;
        int med1 = -1;
        int med2 = -1;
        double median1 = 0.0;
        double median2 = 0.0;
        if((m+n)%2==0){
             med1 = (m+n)/2-1;
             med2 = med1+1;
        }else{
            med1 = (m+n)/2;
            med2 = med1;
        }
        while(i<m&&j<n){
                if(k==med1){
                median1 = Math.min(nums1[i], nums2[j]);
                }
                if(k==med2){
                median2 = Math.min(nums1[i], nums2[j]);
                }
                if(nums1[i]<nums2[j]){
                    i++;
                }else{
                    j++;
                }
            k++;
            
            
        }
        while(i<m){
            
            if(k==med1){
                median1 = nums1[i];
            }
            if(k==med2){
                median2 = nums1[i];
            }
            i++;
            k++;
        }
        
        while(j<n){
            
            if(k==med1){
                median1 = nums2[j];
            }
            if(k==med2){
                median2 = nums2[j];
            }
            j++;
            k++;
        }
        double median = (median1+median2)/2;
        return median;
    }
}
