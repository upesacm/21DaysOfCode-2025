import  java.util.*;

class Q2 {
  
  public static void main(String[]args){
    Arraylist<Integer> list1 = new ArrayList<>(Arrays.aslist(1,2,3,4,5));
    int k =2;

    rotate(list1, k);
    System.out.println(list1);
  }
  public static void roatate(ArrayList<Integer> list1, int k){
    int n = list1.size();

    if (k > n) {
      k %=n;
    }
    Collections.reverse(list1);
    Collections.reverse(list1.sublist(0,k));
    Collections.reverse(list1.sublist(k,n));
  }
}
