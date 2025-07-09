public class question3 {
    public static void main(String[] args) {
        int nums[][]= {{1,4,7},{2,5,8},{3,6,9}};
        int target = 5;
        System.out.println(isSearching(nums, target));
       
    }
    public static boolean isSearching(int nums[][],int target){
        for(int i = 0 ;i < nums.length;i++){
            for(int j = 0 ; j < nums[0].length;j++){
                if(nums[i][j] == target){
                    return true;
                }

            }
        }
        return false;
    }
}
