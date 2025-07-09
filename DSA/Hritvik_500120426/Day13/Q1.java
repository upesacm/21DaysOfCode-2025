public class question1 {
    public static void main(String[] args) {
        String st ="Hello world programming";

        String[] words = st.split("\\s+");
        int wordCount = words.length;

        String longestWord = "";
        for(String word : words){
            if(word.length() > longestWord.length()){
                longestWord = word;
            }
        }
        System.out.println("Word Count: "+wordCount+ " Longest word: "+longestWord);
    }
}
