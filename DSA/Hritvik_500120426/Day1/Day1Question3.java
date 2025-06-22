import java.util.Scanner;

public class Day1Question3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array:");
        int size=sc.nextInt();
        int[] arr=new int[size];
        int I,sum=0;
        for( I=0; I<size;i++){
            System.out.println("Enter "+(I+1)+ " Element:");
            arr[I]=sc.nextInt();
            sum=sum+arr[I];
        }
        for (I=0;i<size;i++){
            System.out.print(arr[I]+(I<size-1?",":"\n"));
        }
        System.out.println("Sum of Elements of array:"+sum);
    }
}
