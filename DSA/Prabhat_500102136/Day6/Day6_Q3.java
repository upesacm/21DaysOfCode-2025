import java.util.*;
public class Day3_Q3 {
    public static int LongestConsecutiveIncreasing(int arr[],int n){
        int count = 1;
        int maxCount = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1] + 1) {
                count++;
            } else {
                count = 1;
            }
            maxCount = Math.max(maxCount, count);
        }
        return maxCount;
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
        System.out.println("Longest Consecutive Increasing Subarray length is  "+(LongestConsecutiveIncreasing(arr,n)));
   
    }
}
