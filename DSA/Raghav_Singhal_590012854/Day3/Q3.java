public class Q3 {
    public static int findSecondLargest(int[] nums) 
    {
        Integer max = null,secondMax = null;
        for (int num : nums) {
            if (max == null || num > max) 
            {
                secondMax = max;
                max = num;
            } 
            else if (num < max && (secondMax == null || num > secondMax))
                secondMax = num;
        }
        return secondMax != null ? secondMax : -1;
    }

    public static void main(String[] args) {
        int nums[]={10,20,30,40};
        System.out.println(findSecondLargest(nums));
    }
}
