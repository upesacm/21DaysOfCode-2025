// Find the sum of all distinct elements that appear exactly k times in the array.
import java.util.Scanner;
public class Question1 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter value for k:");
        int k=sc.nextInt();
        int[] nums={1,2,2,4,4};
        int i,j,sum=0,distinct=0;
        for(i=0;i<nums.length;i++) {
            int count = 0;
            for (j = 0; j < nums.length; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count == k && nums[i] != distinct) {
                sum = sum + nums[i];
                distinct=nums[i];
            }
        }
        System.out.println("Sum of Distinct elements appeared "+k+" times in array:"+sum);
    }
}
