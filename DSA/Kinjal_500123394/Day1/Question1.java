import java.util.*;

public class Question1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of the array");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Array before removing negative elements");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");

        }

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                arr[i] = 0;

            }

        }

        System.out.println("\nArray after removing negative elements");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");

        }
    }
}
