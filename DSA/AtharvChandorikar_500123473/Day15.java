import java.util.Arrays;

public class SimpleSort {
    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
    }
}

import java.util.*;

public class SortByLength {
    public static void main(String[] args) {
        String[] arr = {"apple", "pie", "washington", "cat"};
        Arrays.sort(arr, Comparator.comparingInt(String::length));
        System.out.println(Arrays.toString(arr));
    }
}

public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {5, 2, 8, 1, 9};

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int t = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = t;
                }
            }
        }

        for (int x : arr) {
            System.out.print(x + " ");
        }
    }
}
