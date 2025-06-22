public class Question2 {
    public static void main(String[] args) {
        int[] arr = {4, 3, 6, 2, 1, 1}; // Duplicate = 1, Missing = 5

        int n = arr.length;

        int sum = 0, sqSum = 0;
        int expectedSum = n * (n + 1) / 2;
        int expectedSqSum = n * (n + 1) * (2 * n + 1) / 6;

        for (int num : arr) {
            sum += num;
            sqSum += num * num;
        }

        int diff = sum - expectedSum; 
        int sqDiff = sqSum - expectedSqSum; 

        int sumDM = sqDiff / diff; 

        int duplicate = (diff + sumDM) / 2;
        int missing = duplicate - diff;

        System.out.println("Duplicate = " + duplicate);
        System.out.println("Missing = " + missing);
    }
}
