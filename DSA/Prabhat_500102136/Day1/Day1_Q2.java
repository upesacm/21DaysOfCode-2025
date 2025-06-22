import java.util.*;
class Main {
    public static void findmiss(int arr[],int n){
        int miss =0;
        int dup =0;
        int freq[] = new int[n+1];
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                miss = i;
            }
            else if(freq[i]>1){
                dup=i;
            }
        }
        System.out.println("MISSING value ="+ miss+" Duplicate value = "+ dup);
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
        findmiss(arr,n);
        System.out.println("Printing array after modifications");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
