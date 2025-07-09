import java.util.*;

public class question2{
    public static void main(String[] args) {
        List<Integer> list1 = Arrays.asList(1, 3, 5);
        List<Integer> list2 = Arrays.asList(2, 4, 6);

        List<Integer> mergedList = mergeSortedLists(list1, list2);
        System.out.println("Merged List: " + mergedList);
    }

    public static List<Integer> mergeSortedLists(List<Integer> a, List<Integer> b) {
        List<Integer> result = new ArrayList<>();
        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {
            if (a.get(i) < b.get(j)) {
                result.add(a.get(i++));
            } else {
                result.add(b.get(j++));
            }
        }

        while (i < a.size()) {
            result.add(a.get(i++));
        }

        while (j < b.size()) {
            result.add(b.get(j++));
        }

        return result;
    }
}
