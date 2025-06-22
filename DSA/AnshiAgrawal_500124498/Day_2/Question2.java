import java.util.Scanner; // return the first element and the last element of the array.

public class Question2{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter size of an array:");
        int size=sc.nextInt();
        int[] arr=new int[size];

        for(int i=0;i<arr.length;i++){ //user input
            System.out.println("Enter "+(i+1)+" Elements:");
            arr[i]=sc.nextInt();
        }
   
        System.out.println("First Element:"+ arr[0]);
        System.out.println("Last Element:" + arr[(arr.length-1)]);
    }
}