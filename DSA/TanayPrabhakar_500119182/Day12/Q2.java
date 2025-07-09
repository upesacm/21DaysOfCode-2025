import java.util.*;
public class question2 {
    public static void main(String[] args) {
        String s = "programming";
        char ch[] = s.toCharArray();
        List<Character> unique = new ArrayList<>();
        for(char c : ch){
            if(!unique.contains(c)){
                unique.add(c);
            }
        }
        StringBuilder sb = new StringBuilder();
        for(char i : unique){
            sb.append(i);
        }

        String u = sb.toString();
        System.out.println(u);
    }
    
    
}
