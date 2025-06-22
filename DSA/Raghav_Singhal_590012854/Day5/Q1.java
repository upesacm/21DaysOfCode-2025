public class Q1 {
    public static void main(String args[])
    {
        int nums[] = {4, 1, 2, 1, 2};
        System.out.println(unique(nums));
    }
    public static Integer unique(int nums[])
    {
        Integer uniq=null;
        for (int i : nums)
            if(uniq==null)
            uniq=i;
            else if(i==uniq)
            uniq=null;
        return uniq;
    }
}