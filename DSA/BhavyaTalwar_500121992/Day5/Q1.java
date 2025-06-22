
class Q1 {

    public static void main(String[] args) {

        int[] arr = {4, 1, 2, 1, 2};
        int result = 0;

        for (int i : arr) {
            result ^= i;
        }

        System.out.println("The unique element is: " + result);
    }
}
