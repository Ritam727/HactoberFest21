1051. Height Checker
A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.
You are given an integer array heights representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).
Return the number of indices where heights[i] != expected[i].


package com.company;
import java.util.Arrays;

public class Height {
    public static void main(String[] args) {
        int[] heights = {1,1,4,2,1,3};
        System.out.println(Arrays.toString(heightChecker(heights)));

    }
    static int[] heightChecker(int[] heights) {
        int[] expected = new int[heights.length];
        for(int i = 0; i < heights.length; i++){
            expected[i] = heights[i];
        }
        int count = 0;
        int j = 0;
        int index;
        while(j < expected.length){
            index = expected[j] - 1;
            if(expected[index] != expected[j]){
                swap(expected, index, j);
            }
            else{
                j++;
            }
        }
        return expected;
    }
    static void swap(int[] expected, int index, int j){
        int temp = expected[index];
        expected[index] = expected[j];
        expected[j] = expected[temp];
    }
}
