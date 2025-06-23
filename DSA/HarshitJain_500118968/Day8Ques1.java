public class Day8Ques1 {
    public static void main(String[] args) {
        String[] tests = {"Hello World", "Python", "Programming123"};
        for (String input : tests) {
            int length = input.length();
            String upper = input.toUpperCase();
            String lower = input.toLowerCase();
            System.out.println("Length: " + length + ", Original: \"" + input + "\", Uppercase: \"" + upper + "\", Lowercase: \"" + lower + "\"");
        }
    }
}
