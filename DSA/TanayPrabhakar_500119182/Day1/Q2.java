import java.util.*;
public class question2 {
    public static void main(String[] args) {
        int nums[] = {3,1,3};
        List<Integer> res = missingAndrepeated(nums, nums.length);
        System.out.println("Missing: "+res.get(0)+ " Repeated: "+ res.get(1));
        


    }
    static List<Integer> missingAndrepeated(int nums[],int n){
        int missing = -1;
        int repeated = -1;
        n = nums.length;
        int freq[] = new int[n+1];

        for(int el : nums){
            freq[el]++;
        }

        for(int i =1; i <= n ; i++){
            if(freq[i] == 0){
                missing = i;
            }
            else if(freq[i] == 2){
                repeated = i;
            }
        }
        return Arrays.asList(missing,repeated);
    }
}
