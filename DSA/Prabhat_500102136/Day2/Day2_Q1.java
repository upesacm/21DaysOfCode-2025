import java.util.*;
class Day2_Q1 {
    public static int sumeven(int arr[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
            sum+=arr[i];
            }
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
        System.out.println("Sum of all even elements "+sumeven(arr,n));
   
    }
}
