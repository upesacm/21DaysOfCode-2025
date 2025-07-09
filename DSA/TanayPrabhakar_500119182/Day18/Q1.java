public class question1 {
    public static void main(String[] args) {
        int nums[] = {29, 10, 14, 37, 13};
        selectionSort(nums);
        print(nums);
    
    }
    public static void selectionSort(int nums[]){
        
        for(int i = 0 ;i < nums.length -1;i++){
            int minPos = i;
            for(int j = i+1;j<nums.length;j++){
                if(nums[minPos] > nums[j]){
                    minPos = j;
                }
            }
            //swap
            int temp = nums[minPos];
            nums[minPos] = nums[i]; 
            nums[i] = temp;
        }
    }
    public static void print(int nums[]){
        for(int i : nums){
            System.out.print(i+" ");
        }
    }
}
