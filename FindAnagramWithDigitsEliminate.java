public class FindAnagram {
    public static boolean findAnagram(String s){
        int[] res = new int[26];
        String s1 = "";
        for(int i=0;i<s.length();i++){
            if(Character.isLetter(s.charAt(i))){
                s1 += s.charAt(i);
            }
        }
        char[] arr = s1.toLowerCase().toCharArray();
        for(int i=0;i<arr.length;i++){
            res[arr[i]-97]++;
        }
        
        for(int k=0;k<res.length;k++){
            if(res[k] == 0){
                return false;
            }
        }
        return true;
    }
    
    public static void main(String args[]) {
      String l1 = "1a65bcdefg144hijklmnop98qrs3t2u2vwxy1111z";
      System.out.println(findAnagram(l1));
    }
}
//OUTPUT IS
//true
