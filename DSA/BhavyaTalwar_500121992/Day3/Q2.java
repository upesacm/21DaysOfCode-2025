
import java.util.*;

class Q2 {

    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 2};
        System.out.println(isDuplicate(arr));
    }

    public static boolean isDuplicate(int[] arr) {

        HashSet<Integer> map = new HashSet<>();

        for (int i : arr) {
            if (map.contains(i)) {
                return true;
            } else {
                map.add(i);
            }
        }
        return false;

    }
}
