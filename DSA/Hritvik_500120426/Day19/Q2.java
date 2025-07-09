public class question2 {
    public static void main(String[] args) {
        int num[]={1, 3, 20, 4, 1, 0};
        System.out.println(peakElement(num));
    }
    public static int peakElement(int nums[]){
        int low= 0 ;
        int  high = nums.length -1;

        while(low< high){
            int mid = (high-low)/2;

            boolean left = (mid == 0 || nums[mid] > nums[mid-1]);
            boolean right = (mid== nums.length - 1 || nums[mid] > nums[mid+1]);

            if(left && right){
                return mid;
            }
            if(mid > 0 && nums[mid] < nums[mid-1]){
                high = mid -1;
            }   
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
}
