class Solution {
    public String longestCommonPrefix(String[] strs) {
        String ans = "";
        
        for(int i=0; i<strs[0].length(); ++i){
            for(String z: strs){
                if((i == z.length()) || (z.charAt(i)!=strs[0].charAt(i)))
                    return ans;
            }
            ans += strs[0].charAt(i);
        }
        return ans;
    }
}
