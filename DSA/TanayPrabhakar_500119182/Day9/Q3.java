import java.util.*;
public class question3 {

    public static void main(String[] args) {
        String s = "programming";
        Map<Character,Integer> map = new LinkedHashMap<>();

        for(char c : s.toCharArray()){
            map.put(c,map.getOrDefault(c,0)+1);
        }

        for(Map.Entry<Character,Integer> entry: map.entrySet() ){
            if(entry.getValue() == 1){
                System.out.println(entry.getKey());
                break;
            }
        }


    }
    
}
