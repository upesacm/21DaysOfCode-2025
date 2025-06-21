import java.util.Scanner; // Remove all occurrences of the given value and return the new length of the array.
public class Question3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a value:");
        int val=sc.nextInt();
        int[] nums={0, 1, 2, 2, 3, 0, 4, 2};
        System.out.println("Length of previous array:"+ nums.length);
        int occurrence=0;
        for(int i=0;i<nums.length;i++){
            if(val==nums[i]){
                occurrence++;
            }
        }
        System.out.println(val+" occured "+occurrence+ " times in an array");
        System.out.println("Length of new array:"+(nums.length-occurrence));

    }
    
}
