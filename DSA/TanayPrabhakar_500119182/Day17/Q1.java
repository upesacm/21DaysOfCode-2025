public class question1 {
    public static void main(String[] args) {
        int num[]= {1, 3, 5, 7, 9, 11};
        System.out.println(binSearch(num,7));
    }
    public static int binSearch(int nums[],int val){
        int left = 0 ;
        int right = nums.length-1;

        while(left <= right){
            int mid =  (left+right)/2;

            if(nums[mid] == val ){
                return mid;
            }

            else if(nums[mid] < val){
                left = mid +1;
            }
            else {
                right = mid - 1;
            }

        }
        return -1;
    }
}
