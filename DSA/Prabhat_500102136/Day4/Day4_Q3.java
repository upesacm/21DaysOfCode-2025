import java.util.*;
public class Day4_Q3 {
    public static int removeVal(int[] arr, int val) {
        int count=0;
        for(int num:arr){
            if(num==val){
                count++;
            }
        } 
        return arr.length-count;
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
        System.out.println("Enter the value");
        int val = scan.nextInt();
        System.out.println("New length of array after removing "+val+" = "+ removeVal(arr,val));
    }
}
