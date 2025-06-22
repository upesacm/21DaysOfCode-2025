import java.util.Arrays;
public class Q2 
{
    public static void main(String[] args){
        int[] arr = {1, 2, 3, 4, 5};
        int k = 2;
        rotate(arr, k);
        System.out.println(Arrays.toString(arr));
    }

    static void rotate(int[] nums, int k){
        int n = nums.length;
        if (n == 0|| k % n == 0){
            return;
        }
        k = k % n;
      
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }

    static void reverse(int[] nums, int start, int end){
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++ ;
            end--;

        }
  }
}
