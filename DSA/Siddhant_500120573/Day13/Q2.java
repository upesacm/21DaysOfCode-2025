public class Q2 {
    public static boolean canFormPalindrome(String s) {
        int[] freq = new int[256]; 
        for (char c : s.toCharArray()) {
            freq[c]++;
        }
        int oddCount = 0;
        for (int f : freq) {
            if (f % 2 != 0) oddCount++;
        }
        return oddCount <= 1;
    }

    public static void main(String[] args) {
        System.out.println(canFormPalindrome("aab")); 
        System.out.println(canFormPalindrome("abc")); 
    }
}