import java.util.*;
public class Day_4_Question_2{
    public static void main(String[] args) {
        int[] nums= {1,2,3,4,-5};
        int[] res = rot(nums, 2);
        System.out.println(Arrays.toString(res));
    }
    static int[] rot(int[] nums,int k){
        int n =nums.length;
        int rot[]= new int[n];
        k=k%n;
        //new index
        for (int i = 0; i < n; i++) {
            rot[(i + k) % n] = nums[i];
        }

        return rot;

    }
}
