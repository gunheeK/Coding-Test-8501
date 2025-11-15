class Solution {
    public String solution(String my_string, int s, int e) {
        String answer = "";
        StringBuffer a = new StringBuffer(my_string);
        String reverse = new StringBuffer(a.substring(s, e + 1)).reverse().toString();
        a.replace(s, e + 1, reverse);
        answer = a.toString();
        return answer;
    }
}