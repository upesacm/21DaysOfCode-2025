public class question1 {
    public static void main(String[] args) {
        System.out.println(isPalindrome("Madam"));
    }
    public static boolean isPalindrome(String s){

        s= s.toLowerCase();
        char ch[] = s.toCharArray();
        int left = 0;
        int right = ch.length - 1;

        while(left< right){
            if(ch[left]!= ch[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;

        
    }
}
