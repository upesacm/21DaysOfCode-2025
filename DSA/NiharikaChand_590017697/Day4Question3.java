import java.util.*;
class Day4Question3 
{
    public static int remove(int arr[], int n, int val)
    {
        int i, k = 0;
        for(i=0; i<n; i++)
        {
            if(arr[i] != val)
            {
                arr[k] = arr[i];
                k++;
            }
        }
        return k;
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
        System.out.println("Enter value to be removed: ");
        int val = sc.nextInt();
        int len = remove(nums, n, val);
        System.out.println("Length of new array after removals: " + len);
    }
}





