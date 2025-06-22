
import java.util.*;

class Q1 {

    public static void main(String[] args) {
        int[] arr = {-1, 2, -3, 4, 5};

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < 0) {
                arr[i] = 0;
            }
        }
        System.out.println(Arrays.toString(arr));

    }
}
