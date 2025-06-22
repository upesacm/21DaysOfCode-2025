// DAY 4 <-----/---> QUE 3

import java.util.ArrayList;
import java.util.Arrays;

public class Ques3 {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(3, 2, 2, 3));
        int ans = rmvElement(list, 3);
        System.out.println(ans);

    }

    static int rmvElement(ArrayList<Integer> list, int val){
        int idx = 0;
        for (int i = 0; i < list.size(); i++){
            if (!list.get(i).equals(val)){
                list.set(idx++, list.get(i));
            }
        }
        while (list.size() > idx){
            list.remove(list.size()-1);
        }
        return list.size();
    }
}

// O(n) time and O(1) space comp.
