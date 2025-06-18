import java.util.*;
public class Day3_Q1 {
    public static int Ksum(int arr[],int n,int k){
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
        int sum =0;
        int i=0;
        for(int num : freq){
            if(num==k){
                sum += (i+min);
            }
            i++;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the size of first array");
        int n = scan.nextInt();
        System.out.println("Start entering elements of array");
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]= scan.nextInt();
        }
        System.out.println("Enter value of k");
        int k = scan.nextInt();
        System.out.println("Sum = "+Ksum(arr,n,k));
   
    }
}
