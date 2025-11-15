class Solution {
    public int solution(String myString, String pat) {
        int answer = 0;
        String reverse = "";
        for(char a : pat.toCharArray()) {
            if(a == 'A') {
                reverse += "B";
            }
            else {
                reverse += "A";
            }
        }
        
        if(myString.indexOf(reverse) != -1) {
            answer = 1;
        }
        return answer;
    }
}