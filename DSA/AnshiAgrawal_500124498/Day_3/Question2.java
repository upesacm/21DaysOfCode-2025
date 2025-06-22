public class Question2 { //Return true if any value appears more than once, otherwise return false.
    public static void main(String[] args){
        int[] num1 = {1,2,3,2,5,6};
        int i,j;
        for(i=0;i<num1.length;i++){
            int count=0;
            for(j=0;j<num1.length;j++){
                if(num1[i]==num1[j]){
                    count++;
                }
            }
            if(count>1){
                System.out.println("true"); //found duplicate
                return;
            }
        }
        System.out.println("False"); //no duplicate found
    }
}
