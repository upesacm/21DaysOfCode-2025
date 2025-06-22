import java.util.*;
class Day4Question2 
{
    public static void display(int nums[], int n)
    {
        int i;
        for(i=0; i<n; i++)
        {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }

    public static void rotate(int nums[], int n, int k) 
    {
        k = k % n; // if k is greater than the length of array
        rev(nums, 0, n - 1);
        rev(nums, 0, k - 1);
        rev(nums, k, n - 1);
    }

    public static void rev(int nums[], int s, int e) 
    {
        while (s < e) 
        {
            int temp;
            temp = nums[s];
            nums[s] = nums[e];
            nums[e] = temp;
            s++;
            e--;
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size: ");
        int n = sc.nextInt();
        int nums[] = new int[n];
        int i;
        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            nums[i] = sc.nextInt();
        }

        System.out.println("Enter value of k: ");
        int k = sc.nextInt();
        System.out.println("Original Array: ");
        display(nums, n);
        rotate(nums, n, k);
        System.out.println("Rotated Array: ");
        display(nums, n);
    }
}

