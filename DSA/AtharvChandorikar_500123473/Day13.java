public class WordCountLongest {
    public static void main(String[] args) {
        String s = " Java Python C++ ";
        String[] words = s.trim().split("\\s+");
        String longest = "";
        for (String word : words) {
            if (word.length() > longest.length()) {
                longest = word;
            }
        }
        System.out.println("Word count: " + words.length + ", Longest word: \"" + longest + "\"");
    }
}

public class ReverseWords {
    public static void main(String[] args) {
        String s = "Hello World Programming";
        String[] words = s.trim().split("\\s+");

        for (int i = words.length - 1; i >= 0; i--) {
            System.out.print(words[i]);
            if (i != 0) System.out.print(" ");
        }
    }
}
