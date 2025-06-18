public class Q1 {
    public static void main(String[] args) {
        int nums[] = {1, 8, 8, 8, 5, 6, 2};
        int res = Ksum(nums,3);
        System.out.println(res);
    }
    public static int Ksum(int nums[],int k){
        int sum = 0 ; 
        int max = 0;
        for(int i : nums){
            if(i > max){
                max = i;
            }
        }
    int visited[] = new int[max + 1];
        for(int el : nums){
            visited[el] ++;
        }
        for(int i = 0 ; i < visited.length ; i++){
            if(visited[i] == k){
                sum = sum + i;
            }
        }
        return sum;
    }
}
