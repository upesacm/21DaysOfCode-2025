public class q3 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 5, 6, 7,8,9,10};
       System.out.println(check(arr));
}
public static int check(int[] arr){
    if (arr == null || arr.length == 0) 
    return 0;
    int c = 1;
    int i = 0;
    int max = 1;
    while ( i < arr.length-1) {
        if(arr[i]== arr[i+1]-1 ){
         c++;
        }
        else {
        max = Math.max(max, c);
        c = 1;
        }
        i++; 
    }
    return max = Math.max(max, c);
}
}
