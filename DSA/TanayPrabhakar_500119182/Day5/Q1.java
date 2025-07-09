public class question1 {
    public static void main(String[] args) {
        int arr[] = {2,1,1};
        System.out.println(uniqueElement(arr));
    }
    public static int uniqueElement(int arr[]){
       int freq[] = new int [arr.length+1];
        for(int i : arr){
            freq[i]++;
        }
        int unique =0;
        for(int i =0 ; i< freq.length;i++){
            if(freq[i] > 1){
                unique = i;
            }
        }
        return unique;
            
    }
}

