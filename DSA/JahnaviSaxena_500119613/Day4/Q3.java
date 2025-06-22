import java.util.*;
public class question3 {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(3,2,2,3));
        list.removeIf(n -> n == 3);
        System.out.println(list.size());
    }
      

 }

