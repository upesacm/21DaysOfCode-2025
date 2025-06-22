public class question1 {
    public static void main(String[] args) {
        int num[] = {1, 3, 4, 2, 2};
        System.out.println(duplicate(num));
    }
    public static int duplicate(int nums[]){
        int freq[] =new int[nums.length+1];
        for(int i: nums){
            freq[i]++;
        }
        int duplicate = 0; 
        for(int i = 0 ;i < freq.length ; i++){
            if(freq[i] > 1){
                duplicate = i;
            }
        }
        return duplicate;
    }
}
