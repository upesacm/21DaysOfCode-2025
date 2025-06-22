import java.util.Arrays;

public class d1q1 {
   public static void main(String[] args) {
    int[] arr = {1, 2, 3, 4};
    System.out.println(Arrays.toString(replace(arr)));
   } 
   public static int[] replace(int[] arr){
    for(int i= 0; i< arr.length; i++){
    if(arr[i]< 0)
    arr[i] =0;
}
return arr;
   }
}
