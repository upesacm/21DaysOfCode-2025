

public class q3 {
    public static void main(String[] args) {
        int[] arr= {5,5,5,5,5};
        System.out.println(palin(arr));
    }
    public static boolean palin(int[] arr){
        int s = 0;
        int e = arr.length-1;
        while(s<=e){
            if(arr[s++] != arr[e--])
            return false;
        }
        return true;
    }
}
