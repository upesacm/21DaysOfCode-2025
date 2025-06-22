public class Q3 {
    public static void main(String args[])
    {
        int nums[] = {0, 1, 2, 2, 3, 0, 4, 2}, val = 2, count=0;
        for(int i :nums)
            if(i==val)
            count++;
        System.out.println(nums.length-count);
    }
}
