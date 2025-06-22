public class Q3 {
    public static void main(String args[])
    {
        int nums1[] = {1, 2, 3, 4}, nums2[] = {4, 3, 2, 1};
        System.out.println(isEqual(nums1,nums2));
    }
    public static boolean isEqual(int[] nums1,int[] nums2)
    {
        int freq1[] = freq(nums1), freq2[] = freq(nums2);
        
        for (int i = 0; i <= nums1.length; i++) 
            if(freq1[i] != freq2[i])
                return false;
        return true;
    }
    public static int[] freq(int[] num)
    {
        int freq[] = new int[num.length + 1];
        for (int i : num) {
            freq[i]++;
        }
        return freq;
    }
}
