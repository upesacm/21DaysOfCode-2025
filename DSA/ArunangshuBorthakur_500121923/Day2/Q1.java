
class Q1 {

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};

        int sum = 0;
        for (int i : arr) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        System.out.println("Sum of even numbers is: " + sum);
    }
}