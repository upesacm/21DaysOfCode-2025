import java.util.Scanner;

public class SumOfNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("How many numbers do you want to add?");
        int count = sc.nextInt();

        int total = 0;
        int i = 1;

        while (i <= count) {
            System.out.println("Enter number " + i + ":");
            int num = sc.nextInt();

            total = total + num; // keep adding to total
            i++;
        }

        System.out.println("Total sum is: " + total);
    }
}
