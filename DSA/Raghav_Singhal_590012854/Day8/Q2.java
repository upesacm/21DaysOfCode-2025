public class Q2 {
    public static void main(String args[])
    {
        String str= "programming";
        char ch='r';
        System.out.println(count(str,ch));
    }
    public static int count(String str,char ch)
    {
        int count=0;
        for (int i = 0; i < str.length(); i++) {
            if(str.charAt(i)==ch)
            count++;
        }
        return count;
    }
}
