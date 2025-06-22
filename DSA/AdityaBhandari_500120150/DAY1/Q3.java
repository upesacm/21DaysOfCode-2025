package DSA.AdityaBhandari_500120150.DAY1;

class SUM{
    public void sumofarray(int[] nums){
        int sum1=0;
        for(int i=0;i<nums.length;i++){
                sum1+=nums[i];
        }
        System.out.println(sum1);
    } 
}
public class Q3 {
    public static void main(String[] args) {
        int [] nums= {1,2,3,4,5};
        SUM s= new SUM();
        s.sumofarray(nums);
    }
    
}
