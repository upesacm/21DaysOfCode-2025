class Q3 {

    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 2, 1};
        System.out.println(isPalindrome(arr, arr.length));
    }
    public static boolean isPalindrome(int[] arr, int n) {

        int l = 0;
        int r = n - 1;

        while (l < n) {
            if (arr[l] != arr[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
}
