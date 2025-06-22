import java.util.Scanner;

public class Day1Question3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array:");
        int size=sc.nextInt();
        int[] arr=new int[size];
        int i,sum=0;
        for( i=0; i<size;i++){
            System.out.println("Enter "+(i+1)+ " Element:");
            arr[i]=sc.nextInt();
            sum=sum+arr[i];
        }
        for (i=0;i<size;i++){
            System.out.print(arr[i]+(i<size-1?",":"\n"));
        }
        System.out.println("Sum of Elements of array:"+sum);
    }
}
