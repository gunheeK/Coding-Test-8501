class Solution {
    public String solution(String[] str_list, String ex) {
        String answer = "";
        for(String a : str_list) {
            if(!a.contains(ex)) {
                answer += a;
            }
        }
        return answer;
    }
}