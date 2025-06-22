
class Q3 {

    public static void main(String[] args) {

        int[] arr = {10, 20, 30, 40};

        int max1 = Integer.MIN_VALUE;
        int max2 = Integer.MIN_VALUE;

        for (int i : arr) {
            if (i > max1) {
                max2 = max1;
                max1 = i;
            } else if (i < max1 && i > max2) {
                max2 = i;
            }
        }

        System.out.println("Second Maximum Number is: " + max2);

    }
}
