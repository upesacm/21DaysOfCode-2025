1.public class StringCompare {
    public static void main(String[] args) {
        String s1 = "Hello";
        String s2 = "hello";

        if (s1.equals(s2)) {
            System.out.print("Equal, ");
        } else {
            System.out.print("Not equal, ");
        }

        if (s1.equalsIgnoreCase(s2)) {
            System.out.print("Equal ignoring case, ");
        } else {
            System.out.print("Not equal ignoring case, ");
        }

        if (s1.equals(s2)) {
            System.out.println("Strings are identical");
        } else if (s1.compareTo(s2) < 0) {
            System.out.println("\"" + s1 + "\" comes before \"" + s2 + "\"");
        } else {
            System.out.println("\"" + s2 + "\" comes before \"" + s1 + "\"");
        }
    }
}

2.public class RemoveSpaces {
    public static void main(String[] args) {
        String input = " hello world ";

        String all = input.replace(" ", "");
        String trimmed = input.trim();
        String singleSpace = input.trim().replaceAll("\\s+", " ");

        System.out.println("Remove all: \"" + all + "\", Trim: \"" + trimmed + "\", Single spaces: \"" + singleSpace + "\"");
    }
}

3.import java.util.Arrays;

public class AnagramCheck {
    public static void main(String[] args) {
        String s1 = "The Eyes".replaceAll("\\s+", "").toLowerCase();
        String s2 = "They See".replaceAll("\\s+", "").toLowerCase();

        char[] a1 = s1.toCharArray();
        char[] a2 = s2.toCharArray();
        Arrays.sort(a1);
        Arrays.sort(a2);

        System.out.println(Arrays.equals(a1, a2));
    }
}
