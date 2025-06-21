import java.util.*;
public class Day6_Q2 {
    public static boolean IsFullyIncreasing(int arr[],int n){
        for(int i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]){
                return false;
            }
        }
        return true;
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
        System.out.println("Array is  "+(IsFullyIncreasing(arr,n)?"Fully Increasing":"Not Fully Increasing"));
   
    }
}
