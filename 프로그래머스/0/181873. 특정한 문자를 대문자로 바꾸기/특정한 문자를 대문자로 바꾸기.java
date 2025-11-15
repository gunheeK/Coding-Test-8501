class Solution {
    public String solution(String my_string, String alp) {
        String answer = "";
        char target = alp.charAt(0);
        char upper = Character.toUpperCase(target);
        answer = my_string.replace(target, upper);
        return answer;
    }
}