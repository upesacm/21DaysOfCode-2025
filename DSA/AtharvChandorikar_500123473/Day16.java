public class LinearSearch {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};
        int target = 30;

        int index = -1;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                index = i;
                break;
            }
        }

        System.out.println(index);
    }
}

public class CountOccurrences {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 2, 2, 4};
        int target = 2;

        int count = 0;
        for (int num : arr) {
            if (num == target) {
                count++;
            }
        }

        System.out.println(count);
    }
}
public class FindMax {
    public static void main(String[] args) {
        int[] arr = {3, 7, 1, 9, 4, 6};
        int max = arr[0];

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        System.out.println(max);
    }
}

