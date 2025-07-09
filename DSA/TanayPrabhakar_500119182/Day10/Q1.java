public class question1 {
    public static void main(String[] args) {
        String t = "apple";
        String s = "banana";
        isEqual(s, t);
    }
    public static void isEqual(String s , String t){
        s = s.toLowerCase();
        t = t.toLowerCase();
        if(s.equals(t)){
            System.out.println("Equal ");
        }
        else if(s.equalsIgnoreCase(t)){
            System.out.println("Equal ignoring case");
        }
        else{
            System.out.println("strings are different");
        }

        int result = s.compareTo(t);
        if (result == 0) {
            System.out.println("Lexicographically: Both strings are equal.");
        } else if (result < 0) {
            System.out.println("Lexicographically: \"" + s + "\" comes before \"" + t+ "\".");
        } else {
            System.out.println("Lexicographically: \"" + s + "\" comes before \"" + t + "\".");
        }

    }
}
