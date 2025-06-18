public class Day3_Question_1{
public static void main(String[] args) {
    int[] nums={1,2,2,3,3,9,9};
    int sol = sum(nums,2);
    System.out.println(sol);
    
}
 static int sum(int[] nums , int k){
    int max=0;
    for(int i:nums){
        if(i>max){
            max=i;
        }
    }
    int[] fre = new int[max +1];
    int sum = 0;
    for(int i : nums){
        fre[i]++ ;
    }
    for(int n = 0 ; n < fre.length;n++){
       
        if(fre[n]==k){
           
            sum += n ;
        }
    }
    return sum;
 }
}
