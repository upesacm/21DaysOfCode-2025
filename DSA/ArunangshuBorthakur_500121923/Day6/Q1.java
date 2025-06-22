
class Q1 {

    public static void main(String[] args) {

        int[] arr = {3, 1, 3, 4, 2};
        int n = arr.length;
        int[] freq = new int[n + 1];
        int duplicate = 0;;

        for (int i : arr) {
            freq[i]++;
        }

        for (int i = 0; i < freq.length; i++) {
            if (freq[i] == 2) {
                duplicate = i;
            }
        }
        System.out.println("Duplicate number is: " + duplicate);
    }
}