import java.util.*;
class Day1_Q1 {
    public static void replaceneg(int arr[],int n){
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr[i]=0;
            }
        }
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
        replaceneg(arr,n);
        System.out.println("Printing array after modifications");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
