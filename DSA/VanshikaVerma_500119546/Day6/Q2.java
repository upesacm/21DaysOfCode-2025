public class q2 {
    public static void main(String[] args) {
            int[] arr = {5, 4, 3};
           System.out.println(incre(arr));
    }
    public static boolean incre(int[] arr){
        for (int i = 0; i < arr.length-1; i++) {
            if(arr[i] >=arr[i+1] )
            return false;
        }
        return true;
    }
}
