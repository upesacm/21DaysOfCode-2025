public class question2 {
    public static void main(String[] args) {
        String st = "programming";
        char c = 'r';
        System.out.println(charCount(st, c));
    }
    public static int charCount(String s, char c){
        int count = 0;
        char ch[] = s.toCharArray();

        for(int i =0 ; i < ch.length; i++){
            if(ch[i] == c){
                count++;
            }
        }
        return count;
    }
}
