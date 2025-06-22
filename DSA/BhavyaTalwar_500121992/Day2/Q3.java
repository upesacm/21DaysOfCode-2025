
import java.util.*;

public class Q3 {

    public static void main(String[] args) {
        int arr1[] = {1, 2, 3, 4};
        int arr2[] = {4, 3, 2, 1};
        System.out.println(compare(arr1, arr2));
    }

    public static boolean compare(int arr1[], int arr2[]) {
        int n = arr1.length;
        int m = arr2.length;

        if (n != m) {
            return false;
        }

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        return Arrays.equals(arr1, arr2);
    }
}
