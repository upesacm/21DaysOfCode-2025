//Given two arrays, determine if both contain the same elements with the same frequency, regardless of their order. Return true if they are equal, else return false.
public class Question3 {
    public static void main(String[] args) {
        int[] num1={1,2,3,4};
        int[] num2={2,2,3,1,4};
        int i,j,count,freq;
        for(i=0;i<num1.length;i++){
            count=0;
            freq=0;
            for(int k=0;k<num1.length;k++){ //for counting frequency of an element
                if(num1[i]==num1[k])
                freq++;
            }

            for(j=0;j<num2.length;j++){     
                if(num1[i]==num2[j]){
                    count++;
                }
            }
            if(count==0){ 
                System.out.println("False, Different set of elements");
                return;
            }
            else if(count!=freq){
                System.out.println("False, Different Frequencies of element");
                return;
            }
        }
        System.out.println("true, both sets are equal");
    }
    
}
