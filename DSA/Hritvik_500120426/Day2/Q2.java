import java.util.*;
public class Q2 {
    public static void main(String[] args) {
        int nums[] = {7};
        List<Integer> res = firstAndlast(nums,nums.length);
        System.out.println("First: "+res.get(0)+" Last: "+ res.get(1));
    }
    static List<Integer> firstAndlast(int nums[],int n){
        int first = -1;
        int last = -1;
        n = nums.length;
        for(int i = 0 ;i < n ; i++ ){
            if(i == 0){
                first = nums[i];
            }
            if( i == n - 1){
                last = nums[i];
            }
        }
        return Arrays.asList(first,last);
    }
}
