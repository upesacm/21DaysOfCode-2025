
class Q3 {

    public static void main(String[] args) {

        int[] arr = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
        int n = arr.length;

        System.out.println(maxSublen(arr, n));
    }

    public static int maxSublen(int[] arr, int n) {
        if (n == 0) {
            return 0;
        }

        int currentlen = 1;
        int maxlen = 1;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] == arr[i] + 1) {
                currentlen++;
                maxlen = Math.max(currentlen, maxlen);
            } else {
                currentlen = 1;
            }

        }
        return maxlen;

    }
}