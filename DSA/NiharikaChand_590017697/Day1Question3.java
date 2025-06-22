import java.util.*;
class Day1Question3
{
    public static int calSum(int arr[], int n)
    {
        int i, sum=0;
        for(i=0; i<n; i++)
        {
            sum = sum+arr[i];
        }
        return sum;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int n = sc.nextInt();
        int arr[] = new int [n];
        int i, sum=0;
        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            arr[i] = sc.nextInt();
        }

        sum = calSum(arr, n);
        System.out.println("Sum of all elements: " + sum);

    }
}
