

public class Q2{
    public static void duplicate(int[] nums){
        boolean[] visit= new boolean[nums.length];
        for(int i=0;i<nums.length;i++){
            if(visit[i]==true){
                continue;
            }
            int count=0;
            for(int j=1;j<nums.length;j++){
                if(nums[i]==nums[j]){
                    count++;
                    visit[j]=false;
                }   
            }
            if (count>1){
                System.out.println("True");
                return;
            }
        }
        System.out.println("False");
        
    }

    public static void main(String[] args) {
        int[] nums={1,2,3,4};
        duplicate(nums);

        int[] nums1={1,2,3,2};
        duplicate(nums1);

        int[] nums2={5,5,5};
        duplicate(nums2);
    }
}