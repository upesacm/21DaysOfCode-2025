public class Q3 {
    public static void main(String[] args) {
        String str="hello";
        System.out.println(reversedString(str));
    }
    public static String reversedString(String str)
    {
        String rev="";
        for (int i = str.length()-1; i >= 0; i--) {
            rev+=str.charAt(i);
        }
        return "\""+rev+"\"";
    }
}
