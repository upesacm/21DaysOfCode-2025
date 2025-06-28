public class Q1 {
    public static void main(String[] args) {
        String input = "I am Siddhant 500120573 from DSA";
        String[] words = input.trim().split("\\s+");
        int wordCount = words.length;
        String longest = "";
        for (String word : words) {
            if (word.length() > longest.length()) longest = word;
        }
        System.out.println("Word count: " + wordCount);
        System.out.println("Longest word: \"" + longest + "\"");
    }
}