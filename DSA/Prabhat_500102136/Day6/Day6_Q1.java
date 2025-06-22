import java.util.*;
public class Day6_Q1 {
    public static int FindDuplicate(int arr[],int n){
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
        int i=0;
       for(int num:freq){
           if(num==2){
               return i+min;
           }
           i++;
       }
       return -1;
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
        System.out.println("Duplicate in array is "+(FindDuplicate(arr,n)!=-1?FindDuplicate(arr,n):"Not Present"));
   
    }
}
