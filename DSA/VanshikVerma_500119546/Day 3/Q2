
import java.util.HashSet;
import java.util.Set;

public class Ques2 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5, 2, 9};
        boolean ans = checkDupli(nums);
        System.out.println(ans);
  
}
    static boolean checkDupli(int[] nums) 
{       
        Set<Integer> st = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if(st.contains(nums[i])){
                return true;
            } else {
                st.add(nums[i]);
            }
        }
        return false;
   
}
}
