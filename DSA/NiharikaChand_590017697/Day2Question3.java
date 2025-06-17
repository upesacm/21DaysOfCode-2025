import java.util.*;
class Day2Question3
{
    public static void display(int[] nums, int n)
    {
        int i;
       for(i=0; i<n-1; i++)
        {
            System.out.print(nums[i]+", ");
        } 
        System.out.print(nums[n-1]);
        System.out.println();
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array 1 and array 2: ");
        int n = sc.nextInt();
        int m = sc.nextInt();

        int nums1[] = new int[n];
        int nums2[] = new int[m];
        int i, j, f=0;
            
        // input for first array
        System.out.println("First array: ");
        for(i=0; i<n; i++)
        {
            System.out.println("Enter an element: ");
            nums1[i] = sc.nextInt();
        }

        // input for second array
        System.out.println("Second array: ");
        for(i=0; i<m; i++)
        {
            System.out.println("Enter an element: ");
            nums2[i] = sc.nextInt();
        }
            
        System.out.println();
        System.out.println("First Array: ");
        display(nums1, n);
        System.out.println("Second array: ");
        display(nums2, m);

        //check if both arrays are equal
        if(n != m)
        System.out.println("False");
        else
        {
            boolean visited[] = new boolean[n];
            for(i=0; i<n; i++)
            {
                f=0;
                for(j=0; j<m; j++)
                {
                    if(nums1[i] == nums2[j] && !visited[j])
                    {
                        f=1;
                        visited[j] = true;
                        break;
                    }
                }
                if(f == 0)
                {
                    System.out.println("False");
                    return;
                }
            }
            System.out.println("True");
        }
    }   
}
