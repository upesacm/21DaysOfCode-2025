
class Q2 {

    public static void main(String[] args) {

        int[] arr = {1, 2, 2, 3};
        int n = arr.length;
        System.out.println(isIncreasing(arr, n));
    }

    public static boolean isIncreasing(int[] arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] >= arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
}