class Solution {
    public String solution(String my_string, int[][] queries) {
        String answer = "";
        StringBuffer a = new StringBuffer(my_string);
        for(int[] i : queries) {
            int s = i[0];
            int e = i[1];
            
            String reverse = new StringBuffer(a.substring(s, e + 1)).reverse().toString();
            
            a.replace(s, e + 1, reverse);
        }
        answer = a.toString();
        return answer;
    }
}