
public class question2 {
    public static void main(String[] args) {
        System.out.println(isPPermutation("aab"));
    }
    public static boolean isPPermutation(String s){
        int oddCount = 0;
        
        char ch[] = s.toCharArray();
        int freq[] = new int[128];

        for(char i : ch){
            freq[i]++;
        }

        for(int i = 0 ;i < freq.length ; i ++){
            if(freq[i] % 2 !=0){
                oddCount++;
            }
        }
        return oddCount<=1;

    }
}
