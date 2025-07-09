public class question2 {
    public static void main(String[] args) {
        conVowels("Hello");
    }
    public static void conVowels(String s){
          int cC = 0 ;
          int cV = 0 ;

          char ch[] = s.toCharArray();

         for(char c : ch){
            if(Character.isLetter(c)){
                c = Character.toLowerCase(c);
                if(!(c == 'a'|| c == 'i' || c == 'e' || c =='o' || c== 'u')){
                    cV++;
                }
                else{
                    cC++;
                }
            }
         }
         System.out.println("Consonants: "+cC+ " Vowels: "+cV);
    }
  
    

}
