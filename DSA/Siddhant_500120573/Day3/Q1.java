public class Q1{
    public static void Count(int[] nums, int k){
        int sum1=0;
        boolean[] visit= new boolean[100];
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
            if (count==k){
                sum1+=nums[i];
            }
        }
        System.out.println(sum1);
        
    }

    public static void main(String[] args) {
        int[] nums={2,3,9,9};
        int k=2;
        Count(nums,k);
    }
}