import java.util.*;
class Day1_Q3 {
    public static int sum(int arr[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
      return sum;
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
        System.out.println("Sum of all elements "+sum(arr,n));
   
    }
}
