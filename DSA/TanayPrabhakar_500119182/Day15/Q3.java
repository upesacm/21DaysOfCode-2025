public class question3 {
    public static void main(String[] args) {
          int[] arr = {5, 2, 8, 1, 9};

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int s : arr) {
            System.out.print(s + " ");
    }
}

}
