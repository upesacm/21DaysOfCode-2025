public class Q1 {

    public static void repeat(int[] nums){
        boolean[] visited= new boolean[nums.length];
        for(int i=0;i<nums.length;i++){
            if (visited[i]==true) {
                continue;
            }
            int count=0;
            for(int j=0;j<nums.length;j++){
                if (nums[i]==nums[j]){
                    count++;
                    visited[j]=false;   
                }
            }
            if (count==1){
                System.out.println(nums[i]);
            }
            
        }
    }
  public static void main(String[] args) {
    int[] nums={2,2,1};
    repeat(nums);

    int[] nums1={4,1,2,1,2};
    repeat(nums1);

    int[] nums2={1};
    repeat(nums2);
  }    
}