import java.util.*;
public class Day3_Q2 {
    public static boolean Duplicatecheck(int arr[],int n){
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int num:arr){
            if(num>max){
                max =num;
            }
            if(num<min){
                min = num;
            }
        }
        int freq[] = new int[max-min+1];
        for(int num:arr){
            freq[num-min]++;
        }
       for(int num:freq){
           if(num>1){
               return true;
           }
       }
       return false;
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
        System.out.println("Duplicates are "+(Duplicatecheck(arr,n)?"Present":"Not Present"));
   
    }
}
