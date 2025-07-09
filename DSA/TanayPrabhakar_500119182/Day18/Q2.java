public class question2 {
    public static void main(String[] args) {
        int num[] = {4, 2, 7, 1, 3};
        insertionSort(num);
        print(num);
    }
    public static void insertionSort(int nums[]){
        for(int i =1 ;i < nums.length;i++){
            int curr = nums[i];
            int prev = i-1;

            while(prev >= 0 && nums[prev] > curr){
                 nums[prev + 1] = nums[prev];
                 prev--;

            }
            nums[prev+1] = curr;
        }
    }
    public static void print(int nums[]){
        for(int i : nums){
            System.out.print(i+" ");
        }
    }
}
