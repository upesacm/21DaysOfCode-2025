public class question2 {
    public static void main(String[] args) {
        noSpace(" a b c ");
    }
    public static void noSpace(String s){
        String s1 = s.replaceAll("\\s","");
        System.out.println("Removed spaces: "+s1);

        String s2 = s.trim();
        System.out.println("Trim: "+s2);

        
    }
}

