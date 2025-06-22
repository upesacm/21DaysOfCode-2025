
class Q2 {

    public static void main(String[] args) {

        int[] arr = {9, 6, 4, 2, 3, 5, 7, 0, 1};
        int n = arr.length;
        int sum = (n * (n + 1)) / 2;
        int sum2 = 0;

        for (int i : arr) {
            sum2 += i;
        }
        System.out.println("The missing number is: " + (sum - sum2));
    }
}
