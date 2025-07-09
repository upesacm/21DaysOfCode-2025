public class question3 {
    public static void main(String[] args) {
        System.out.println(compressString("aabcccccaaa"));
    }
    public static String compressString(String s){
        StringBuilder sb = new StringBuilder();
        int count = 0;

        for(int i =1 ; i < s.length() ; i ++){
            if(s.charAt(i) == s.charAt(i-1)){
                count++;
            }
            else{
                sb.append(s.charAt(i-1)).append(count);
                count = 1;
            }
        }
        sb.append(s.charAt(s.length() - 1)).append(count);

        return sb.length() < s.length() ? sb.toString() : s;

        


    }
}
