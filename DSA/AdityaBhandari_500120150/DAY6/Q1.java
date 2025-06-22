public class Q1 {

    public static void duplicate(int[] nums){
        boolean[] visited= new boolean[nums.length];
        for(int i=0;i<nums.length;i++){
            if (visited[i]==true) {
                continue;
            }
            int count=0;
            for(int j=0;j<nums.length;j++){
                if (nums[i]==nums[j]){
                    count++;
                    visited[j]=true;   
                }
            
            }
           if (count>1){
                System.out.println(nums[i]);
            } 
            
        }
    }
  public static void main(String[] args) {
    int[] nums={1,3,4,2,2};
    duplicate(nums);

    int[] nums1={3,1,3,4,2};
    duplicate(nums1);

    int[] nums2={1,1,2};
    duplicate(nums2);
  }    
}