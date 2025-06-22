import java.util.*;
public class Q2 {
    public static void main(String[] args) {
        int nums[] = {1, 2, 3, 4, 5};
        int k = 2; 
        arrRot(nums, nums.length, k);
    }
    public static void arrRot(int [] nums, int n, int k){
        int[] roatedArray = new int[n];
        for(int i =0 ; i < n; i++){
            roatedArray[(i+k)%n] =  nums[i];
        }
        for(int i = 0; i < n; i++){
            nums[i] = roatedArray[i];
        }
        System.out.println(Arrays.toString(nums));
    }
}


