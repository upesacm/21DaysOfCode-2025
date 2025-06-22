import java.util.*;

class Q3 {

    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(0, 1, 2, 2, 3, 0, 4, 2));
        list.removeIf(n -> n == 2);
        System.out.println(list.size());
    }
}
