public class question3 {
    public static void main(String[] args) {
        System.out.println(squareRoot(16));
    }
    public static int squareRoot(int n ){ //n=16
        if(n<2) return n;

        int left = 1;
        int right = n/2; // 8
        int root = 0;

        while(left <= right){
            int mid = left + (right - left)/2; // 4
            long sq = (long)mid*mid; //5*5 =25

            if(sq == n){
                return mid; 
            }

            else if(sq < n){
                root = mid;
                left = mid +1;
            }
            else{
                right = mid -1;
            }
        }
        return root;




    }
}
