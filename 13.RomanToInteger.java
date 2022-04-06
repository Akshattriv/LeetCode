class Solution {
    public int romanToInt(String s) {
        int ans = 0, max = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            int value = Solution.fun(s.charAt(i));
            if (value >= max) {
                ans += value;
                max = value;
            }else{
                ans -= value;
            }
        }
        return ans;
    }
    
    private static int fun(char symbol) {
        switch (symbol) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
}
