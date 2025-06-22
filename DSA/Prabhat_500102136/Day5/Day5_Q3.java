import java.util.*;
public class Day5_Q3 {
    public static boolean IsPalindrome(int arr[],int n){
       for(int i=0;i<n/2;i++){
           if(arr[i]!=arr[n-i-1]){
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
        System.out.println("Array is "+(IsPalindrome(arr,n)?"Palindrome":"Not Palindrome"));
   
    }
}
