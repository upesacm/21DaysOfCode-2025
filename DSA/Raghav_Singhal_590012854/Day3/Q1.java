public class Q1 {
    public static void main(String args[])
    {
        int nums[] = {1, 8, 8, 8, 5, 6, 2}, k = 3, freqArr[] = freq(nums), sum=0;
        for (int i = 1; i < freqArr.length; i++) {
            if(freqArr[i]==k)
            sum+=i;
        }
        System.out.println(sum);
    }
    public static int[] freq(int[] num)
    {
        int max = 0;
        for (int i : num) {
            if (i > max) max = i;
        }
        int freq[] = new int[max + 1];
        for (int i : num) {
            freq[i]++;
        }
        return freq;
    }
}