public class question2 {
    public static void main(String[] args) {
        int nums[]={1, 2, 3, 2, 2, 4};
        System.out.println(countOccurances(nums, 2));
    }
    public static int countOccurances(int nums[],int val){
        int count = 0;
        for(int i =0 ; i < nums.length ; i++){
            if(nums[i] == val){
                count++;
            }

        }
        return count;
    }
}
