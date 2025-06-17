public class FirstAndLastElement 
  {

    public static int[] getFirstAndLast(int[] nums) 
    {
      if (nums==null||nums.length==0)
        {
            throw new IllegalArgumentException("Array is empty or null.");
        }

        int first = nums[0];
        int last = nums[nums.length-1];

        return new int[]{first, last};
    }
    public static void main(String[] args) 
    {
        int[] nums = {10, 20, 30, 40, 50};
        int[] result = getFirstAndLast(nums);

        System.out.println("First element: " + result[0]);
        System.out.println("Last element: " + result[1]);
    }
}
