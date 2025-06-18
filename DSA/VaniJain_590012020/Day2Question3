import java.util.Arrays;
public class ArraysAreEqualSimple 
{
  public static boolean areEqual(int[] arr1, int[] arr2) 
  {
        if (arr1.length!=arr2.length) 
        {
            return false;
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        return Arrays.equals(arr1, arr2);
    }
    public static void main(String[] args) 
    {
        int[] arr1 = {1, 2, 3, 2};
        int[] arr2 = {2, 3, 1, 2};
        int[] arr3 = {1, 2, 3};
        int[] arr4 = {3, 2, 2};
        System.out.println("Arrays are equal: " + areEqual(arr1, arr2));
        System.out.println("Arrays are equal: " + areEqual(arr3, arr4)); 
    }
}
