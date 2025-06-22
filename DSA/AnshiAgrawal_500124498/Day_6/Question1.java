//Given an integer array of n+1 integers where each integer is between 1 and n (inclusive), find one duplicate number that appears in the array.
import java.util.Scanner;
public class Question1{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in); //user input
        System.out.println("Enter value for n:");
        int n=sc.nextInt();
        int[] nums= new int[n+1];
        int i,j;

        System.out.println("Enter Elements of array with size "+(n+1)+":");
        for(i=0;i<nums.length;i++){
            nums[i]=sc.nextInt();
        }

        for(i=1;i<(n+1);i++){
            int count=0;
            for(j=0;j<nums.length;j++){
                if(i==nums[j]){
                count++;
                }
            }
            if(count==2){
                System.out.println("The number "+ i +" appears twice in the array");
                return;
            }
        }
    }
}