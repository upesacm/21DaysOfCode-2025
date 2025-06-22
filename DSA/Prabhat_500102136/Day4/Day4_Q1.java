import java.util.*;
public class Day4_Q1 {
    public static int MinimumElement(int arr[],int n){
        int min = Integer.MAX_VALUE;
        for(int num:arr){
            if(num < min){
                min= num;
            }
        }
        return min;
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
        System.out.println("Minimum element in array is "+MinimumElement(arr,n));
   
    }
}
