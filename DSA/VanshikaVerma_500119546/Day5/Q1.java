public class q1 {
public static void main(String[] args) {
    int[] arr = {2,2,1};
 System.out.println(uniele(arr));
}   
public static int  uniele(int[] arr){
    int uni = 0;
    for(int n: arr){
     uni^=n;
    }
    return uni;
}
}
