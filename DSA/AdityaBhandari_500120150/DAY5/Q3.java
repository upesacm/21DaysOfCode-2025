public class Q3{
    public static void palindrome(int nums[]){
        int flag = 0;
        for (int i = 0; i <= nums.length / 2 && nums.length != 0; i++) {
            if (nums[i] != nums[nums.length - i - 1]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            System.out.println("False");
        else
            System.out.println("True");
    }

    public static void main(String[] args) {
        int[] nums={1,2,3,2,1};
        palindrome(nums);

        int[] nums1={1,2,3,4};
        palindrome(nums1);

        int[] nums2={5,5,5,5};
        palindrome(nums2);
        
    }
}
