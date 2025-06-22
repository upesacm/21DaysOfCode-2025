import java.util.Scanner; //Given an array nums of size n, replace all negative numbers in the array with zero.

public class Day1Question1 {
    public static void main(String[] args) {
        System.out.println("Enter the size of array:");
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] nums=new int[n];
        int i;
        System.out.println("Enter values of array:");
        for(i=0;i<n;i++){
            nums[i]=sc.nextInt();
        }
        System.out.println("Before:");
        for (i=0;i<n;i++){
            System.out.print(nums[i] + (i < n - 1 ? ", " : "\n"));
        }
        for (i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]=0;
            }
        }
        System.out.println("After:");
        for (i=0;i<n;i++){
            System.out.print(nums[i] + (i < n - 1 ? ", " : "\n"));
        }
    }
}
