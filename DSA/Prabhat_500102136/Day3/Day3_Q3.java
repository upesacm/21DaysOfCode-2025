import java.util.*;
public class Day3_Q3 {
    public static int Secondlargest(int arr[],int n){
        int max = Integer.MIN_VALUE;
        int maxsecond = Integer.MIN_VALUE;
        for (int num : arr) {
            if (num > max) {
                maxsecond = max;
                max = num;
            } else if (num > maxsecond && num < max) {
                maxsecond = num;
            }
        }
        return (maxsecond == Integer.MIN_VALUE) ? -1 : maxsecond;
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
        System.out.println("Second largest element in array is "+Secondlargest(arr,n));
   
    }
}
