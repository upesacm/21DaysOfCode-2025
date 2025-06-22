import java.util.Arrays;
public class q1 {
    public static void main(String[] args) {
        int[] arr = {3, 1, 3, 4, 2};
       System.out.println(dupli(arr));
    }
    public static int dupli(int[] arr){
        int i=0; 
        while(i < arr.length){
            int cor =arr[i]-1;
            if(arr[i] != arr[cor]){
                int temp = arr[i];
                arr[i] = arr[cor];
                arr[cor] = temp;
            }
            else 
                i++;
        }  
    for (int j = 0; j < arr.length; j++) {
        if(arr[j] != j+1)
        return arr[j];
    }
    return -1;
}
}
