import java.util.*;
public class Q2{
  public static void main(String[]args){
    int nums[]={1,2,3,2};
    System.out.print(Duplicate(nums));
  }
public static Boolean Duplicate(int nums[]){
  HashSet<Integer>set = new HashSet<>();
  for(int i:nums){
    if(set.contains(i)){
      return true;
    }
    else{
      set.add(i);
     }
   }
  return false;

}

} 
