import java.util.*;
public class question1{
    public static void main(String[] args) {
        int num[] = {-1, 2, -3, 4, 5};
        int res[] = replace(num,num.length);

        System.out.println(Arrays.toString(res));
    }
    public static int[] replace(int num[], int n){
        for(int i = 0; i < num.length; i++){
            if(num[i] < 0 ){
                num[i] = 0;
            }
        }
        return num;
    }
}
