public class Day2_Question2{
    public static void main(String [] args){
        int [] nums = {1,2,3,4};

        FirstAndLast(nums);
    }
    public static void FirstAndLast(int nums[]){
        int first = nums[0];
        int last = nums[nums.length - 1];

        System.out.println("The first: " + first + ", the last: " + last);
    }
}
