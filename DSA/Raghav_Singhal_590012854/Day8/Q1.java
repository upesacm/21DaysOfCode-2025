public class Q1
{
    public static void main(String[] args) {
        String str = "Hello World";
        String arr[]=CaseAndLength(str);

        System.out.println("Length: "+arr[0]+", Original: \""+arr[1]+"\", Uppercase: \""+arr[2]+"\", Lowercase: \""+arr[3]+"\"");
    }
    public static String[] CaseAndLength(String str)
    {
        String newStr =str+ "\"",uCase="",lCase="";
        int len = 0;
        for (int i = 0; newStr.charAt(i) != '\"'; i++)
        {
            len++;
            if(newStr.charAt(i)>=65 && newStr.charAt(i)<=90)
            {
                uCase+=newStr.charAt(i);
                lCase+=(char)((int)newStr.charAt(i)+32);
            }
            else if(newStr.charAt(i)>=97 && newStr.charAt(i)<=122)
            {
                lCase+=newStr.charAt(i);
                uCase+=(char)((int)newStr.charAt(i)-32);
            }
        }
        String sLen = String.valueOf(len);
        return new String[]{sLen,str,uCase,lCase};
    }
}