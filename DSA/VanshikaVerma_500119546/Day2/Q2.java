public class d2q2 {
    public static void main(String[] args) {
            int[] arr ={5, 9, 2};
            int[] ans =index(arr);
            System.out.println("First- " + ans[0]+"\n"+ "Last- " + ans[1]);
           }
    public static int[] index(int[] arr){
        return new int[]{arr[0], arr[arr.length-1]} ;
    }
}
