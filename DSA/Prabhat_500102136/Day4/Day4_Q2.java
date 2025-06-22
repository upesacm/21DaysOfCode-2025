import java.util.*;
public class Day4_Q2 {
    public static void rotate(int[] nums, int k) {
        int len=nums.length;
        k%=len;
        reverse(nums,0,len-1);
        reverse(nums,0,k-1);
        reverse(nums,k,len-1); 
    }
    public static void reverse(int[] nums,int start,int end){
        while(start < end){
            int temp = nums[start];
            nums[start++]=nums[end];
            nums[end--]=temp;
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int n = scan.nextInt();
        System.out.println("Start entering elements of array");
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]= scan.nextInt();
        }
        System.out.println("Enter the value of k");
        int k = scan.nextInt();
        rotate(arr,k);
        System.out.println("Array after rotation");
        System.out.println(Arrays.toString(arr));
    }
}
