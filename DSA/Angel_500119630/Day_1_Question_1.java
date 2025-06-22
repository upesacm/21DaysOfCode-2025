 import java.util.*;
 // Solution here
public class Day_1_Question_1{
    public static void main(String[] args) {
        int nums[]= {1,2,-4,-5,2};
        int res[] = nonegative(nums,nums.length);

        System.out.println(Arrays.toString(res));

    }
    public static int[] nonegative(int nums[],int len){
        for (int i=0; i<len;i++){
            if(nums[i]<0){
                nums[i]=0;
            }
        }
       return nums;
    }
}
