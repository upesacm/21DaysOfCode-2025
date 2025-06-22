
import java.util.*;

class Q2 {

    public static void main(String[] args) {
        ArrayList<Integer> list1 = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
        int k = 2;

        rotate(list1, k);
        System.out.println(list1);
    }

    public static void rotate(ArrayList<Integer> list1, int k) {
        int n = list1.size();

        if (k > n) {
            k %= n;
        }

        Collections.reverse(list1);
        Collections.reverse(list1.subList(0, k));
        Collections.reverse(list1.subList(k, n));

    }
}
