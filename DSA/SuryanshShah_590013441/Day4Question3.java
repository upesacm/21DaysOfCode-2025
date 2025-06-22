import java.util.*;

public class Day4Question3 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);

        System.out.println("Enter the number of elements in the array:");
        int n = scr.nextInt();

        int[] array = new int[n];

        System.out.println("Enter the elements into the array:");
        for (int i = 0; i < n; i++) {
            array[i] = scr.nextInt();
        }

        System.out.println("Enter the value to be removed:");
        int value = scr.nextInt();

        int count = 0;
        for (int i = 0; i < array.length; i++) {
            if (array[i] != value) {
                count++;
            }
        }

        System.out.println("The total number of
}
