import java.util.Arrays;

public class Q2 {
    public static void main(String args[])
    {
        int nums[] = {1, 2, 3, 4, 5}, k = 2,temp;
        for(int i=0;i<k;i++)
        {
            temp=nums[nums.length-1];
            for(int j=nums.length-1;j>0;j--)
                nums[j]=nums[j-1];
            nums[0]=temp;
        }
        System.out.println(Arrays.toString(nums));
    }
}
