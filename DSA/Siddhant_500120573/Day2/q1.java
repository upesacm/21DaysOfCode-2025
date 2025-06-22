
class q1 {

    public static void main(String[] args) {
        int[] arr = {4, 8, 9, 2, 6, 1, 3, 5, 7, 10};

        int sum = 0;
        for (int i : arr) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        System.out.println("Sum of even numbers is: " + sum);
    }
}
