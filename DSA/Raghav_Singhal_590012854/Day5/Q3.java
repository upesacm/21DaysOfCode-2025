public class Q3 {
    public static void main(String args[])
    {
        int nums[] = {1, 2, 3, 2, 1};
        System.out.println(palin(nums));
    }
    public static boolean palin(int nums[])
    {
        int half;
        if(nums.length%2==0) half=nums.length/2;
        else half=nums.length/2+1;
        for (int i = 0; i < half; i++) {
            if(nums[i]!=nums[nums.length-i-1])
            return false;
        }
        return true;
    }
}