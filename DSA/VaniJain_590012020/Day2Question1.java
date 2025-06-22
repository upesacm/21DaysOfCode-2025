public class SumOfEvenNumbers 
{
  public static int sumEven(int[] nums) 
  {
    int sum = 0;
      for (int num : nums) 
      {
            if (num % 2 == 0) 
            {
                sum += num;
            }
        }

        return sum;
    }
    public static void main(String[] args) 
    {
        int[] nums = {1, 2, 3, 4, 5, 6};
        int result = sumEven(nums);
        System.out.println("Sum of even numbers: " + result);
    }
}
