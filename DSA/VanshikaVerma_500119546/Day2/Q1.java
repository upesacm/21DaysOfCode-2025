public class d2q1 {
    public static void main(String[] args) {
        int[] arr ={1,2,3,4,5,6};
        System.out.println(sum(arr));
    }
    public static int sum(int[] arr){
        int sum = 0;
        for(int n: arr){
            if(n%2==0)
            sum+=n;
        }
        return sum;
    }
}
