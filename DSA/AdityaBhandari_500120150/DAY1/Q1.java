package DSA.AdityaBhandari_500120150.DAY1;

class Neg{
    public void negative(int[] nums){
        for(int i=0;i<nums.length;i++){
            if(nums[i]<0){
                nums[i]=0;
            }
        }
        for(int i=0;i<nums.length;i++){
            System.out.print(nums[i]);
        }
    }

}
public class Q1{
    public static void main(String[] args) {
        int[] nums= {-1,2,-3,4,5};
        Neg n= new Neg();
        n.negative(nums);
    }
    
}
