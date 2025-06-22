import java.util.*;
public class Day2_Q3 {
    public static boolean Arrayequal(int arr1[],int arr2[]){
        int n1 = arr1.length;
        int n2 = arr2.length;
        if(n1!=n2){
            return false;
        }
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int num:arr1){
            if(num>max){
                max =num;
            }
            if(num<min){
                min = num;
            }
        }
        for(int num:arr2){
            if(num>max){
                max =num;
            }
            if(num<min){
                min = num;
            }
        }
        int freq[] = new int[max-min+1];
        for(int num:arr1){
            freq[num-min]++;
        }
        for(int num :arr2){
            freq[num-min]--;
        }
        for(int num:freq){
            if(num!=0){
                return false;
            }
        }
        return true;
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
        System.out.println("Enter the size of second array");
        int n2 = scan.nextInt();
        System.out.println("Start entering elements of array");
        int arr2[] = new int[n2];
        for(int i=0;i<n2;i++){
            arr2[i]= scan.nextInt();
        }
        System.out.println("Both arrays are : "+(Arrayequal(arr,arr2)?"equal":"not equal"));
   
    }
}
