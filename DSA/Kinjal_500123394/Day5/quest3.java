package day5;

public class quest3 {
    public int[] Palindrome(int[] arr) {
        int n = arr.length;
        int[] result = new int[n];
        int index = 0;

        for (int i = 0; i < n; i++) {
            String str = String.valueOf(arr[i]);
            String reversedStr = new StringBuilder(str).reverse().toString();

            if (str.equals(reversedStr)) {
                result[index++] = arr[i];
            }
        }

        // Resize the result array to contain only the palindromes found
        int[] finalResult = new int[index];
        System.arraycopy(result, 0, finalResult, 0, index);

        return finalResult;
    }

    public static void main(String[] args) {
        quest3 q3 = new quest3();
        int arr[] = { 121, 123, 454, 789, 676, 101 }; // Example array
        int[] palindromes = q3.Palindrome(arr);

        System.out.print("Palindromes in the array: ");
        for (int num : palindromes) {
            System.out.print(num + " ");
        }
    }
}
