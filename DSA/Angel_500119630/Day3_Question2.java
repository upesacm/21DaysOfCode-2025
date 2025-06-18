public class Day3_Question2{
public static void main(String[] args) {
    int[] nums={1,2,3,9};
boolean res = dup(nums);
System.out.println(res);
   
    
}
 static boolean dup(int[] nums){
    int max=0;
    for(int i:nums){
        if(i>max){
            max=i;
        }
    }
    int[] fre = new int[max +1];
    
    for(int i : nums){
        fre[i]++ ;
    }
    for(int n = 0 ; n < fre.length;n++){
       
        if(fre[n]>1){
           return true;
         
        }
        
    }
    return false;
    
 }
}