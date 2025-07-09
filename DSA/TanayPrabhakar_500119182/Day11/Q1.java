public class question1 {
    public static void main(String[] args) {
        System.out.println(isPalindrome("A man, a plan, a canal: Panama"));
    }
    public static boolean isPalindrome(String s){
        s = s.toLowerCase().replaceAll("[^a-z0-9]","");
        char ch[] = s.toCharArray();

        int left = 0 ;
        int right = ch.length -1 ;

        while(left< right){
            if(ch[left] != ch[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;

        
    }
}
