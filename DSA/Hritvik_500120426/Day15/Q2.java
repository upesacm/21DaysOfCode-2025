import java.util.*;
public class question2 {
    public static void main(String[] args) {
        String[] st = {"apple", "pie", "washington", "cat"};
        
        Arrays.sort(st, Comparator.comparingInt(String::length));

        for(String i : st){
            System.out.print(i+ " ,");
        }
    }
}
