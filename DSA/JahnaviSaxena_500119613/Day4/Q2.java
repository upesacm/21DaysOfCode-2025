import java.util.*;
public class question2 {
    public static void main(String[] args) {
        ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
        int k = 2;
        ArrayList<Integer>result = rotate(nums,k);
        System.out.println(result);
    }
    public static ArrayList<Integer> rotate(ArrayList<Integer> nums , int k){
        int n = nums.size();
        if(k > n){
            k = k % n;
        }
        ArrayList<Integer> res= new ArrayList<>();
        res.addAll(nums.subList(n-k,n));
        res.addAll(nums.subList(0,n-k));

        return res;
    }
}
