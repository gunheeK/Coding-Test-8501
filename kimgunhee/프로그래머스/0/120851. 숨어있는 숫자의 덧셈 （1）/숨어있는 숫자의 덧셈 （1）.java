class Solution {
    public int solution(String my_string) {
        int sum = 0;
        for(int i = 0; i < my_string.length(); i++) {
            char ch = my_string.charAt(i);
            if(Character.isDigit(ch)) {
                sum += (ch - '0');
            }
        }
        return sum;
    }
}
