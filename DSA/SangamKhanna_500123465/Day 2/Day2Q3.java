import java.util.HashMap;

public class ArrayEquality {
    public static boolean areArraysEqual(int[] array1, int[] array2) {
        if (array1.length != array2.length) {
            return false;
        }

        HashMap<Integer, Integer> frequencyMap = new HashMap<>();

        for (int num : array1) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }

        for (int num : array2) {
            if (!frequencyMap.containsKey(num)) {
                return false;
            }
            frequencyMap.put(num, frequencyMap.get(num) - 1);
            if (frequencyMap.get(num) < 0) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        int[] array1 = {1, 2, 3, 4, 5};
        int[] array2 = {5, 4, 3, 2, 1};
        System.out.println(areArraysEqual(array1, array2)); // Output: true

        int[] array3 = {1, 2, 2, 3};
        int[] array4 = {1, 2, 3, 3};
        System.out.println(areArraysEqual(array3, array4)); // Output: false
    }
}
