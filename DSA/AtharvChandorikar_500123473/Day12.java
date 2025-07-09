public class CountVowelsConsonants {
    public static void main(String[] args) {
        String s = "Hello World";
        s = s.toLowerCase();

        int vowels = 0, consonants = 0;
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                if ("aeiou".indexOf(c) != -1) vowels++;
                else consonants++;
            }
        }
        System.out.println("Vowels: " + vowels + ", Consonants: " + consonants);
    }
}


public class RemoveDuplicates {
    public static void main(String[] args) {
        String s = "programming";
        String result = "";

        for (int i = 0; i < s.length(); i++) {
            if (result.indexOf(s.charAt(i)) == -1) {
                result += s.charAt(i);
            }
        }
        System.out.println(result);
    }
}
