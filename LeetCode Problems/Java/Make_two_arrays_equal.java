package com.prince;

import java.util.ArrayList;
import java.util.List;
class EqualArray {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 4};
        int[] b = {1, 2, 3, 4};
        System.out.println(canBeEqual(a, b));
    }

    static boolean canBeEqual(int[] target, int[] arr) {
        List<Integer> list = new ArrayList<>();
        if (target.length != arr.length) return false;
        for (int i = 0; i < target.length; i++) {
            list.add(target[i]);
        }
        for (int i = 0; i < target.length; i++) {
            if (!list.contains(arr[i])) return false;
        }
        return true;
    }
}