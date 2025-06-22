
class Q1 {

    public static void main(String[] args) {

        int[] arr = {1, 8, 8, 8, 5, 6, 2};
        int k = 3;

        int max = 0, sum = 0;
        for (int i : arr) {
            if (i > max) {
                max = i;
            }
        }

        int[] visited = new int[max + 1];

        for (int el : arr) {
            visited[el]++;
        }

        for (int i = 0; i < visited.length; i++) {
            if (visited[i] == k) {
                sum += i;
            }
        }

        System.out.println("The sum is: " + sum);

    }
}
