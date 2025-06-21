/* Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
Your task: Find the missing number from the sequence 0 to n.*/
import java.util.Scanner;

public class Question2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter value for n:"); //user input
        int n=sc.nextInt();
        int[] nums=new int[n];
        int i,j;

        System.out.println("Enter Elements of an array from 0 to "+n+":"); //user input
        for(i=0;i<n;i++){
            nums[i]=sc.nextInt();
        }

        for(i=0;i<=n;i++) //missing element
        {
            int count=0;
            for(j=0;j<nums.length;j++){
                if(i==nums[j]){
                    count++;
                    break;
                }
            }
            if(count==0){
                System.out.println("Number not found in array:"+i);
            }
        }
    }
}
