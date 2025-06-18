// DAY 3 <-----/---> QUE 1

import java.util.HashMap;

public class Ques1 {
    public static void main(String[] args){
        int[] nums = {1, 8, 8, 8, 5, 6, 2};
        int ans = Kfreq(nums, 3);            
        System.out.println(ans);


    }

    public static int Kfreq(int[] nums, int k){
        HashMap<Integer,Integer> mpp = new HashMap<>();
        for (int num : nums){
            if (mpp.containsKey(num)){
                mpp.put(num, mpp.get(num)+1);  
            } else {
                mpp.put(num, 1);   
            }
          
        }


        int sum = 0;
        for (int num : mpp.keySet()){
            if (mpp.get(num) == k){
                sum += num; 
            }
        }
        return sum;
    }
}

// Time Compl. => O(n)
// Space Compl. => O(n)
