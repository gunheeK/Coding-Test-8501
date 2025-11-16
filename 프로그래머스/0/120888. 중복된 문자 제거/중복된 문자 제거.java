import java.util.*;

class Solution {
    public String solution(String my_string) {
        String answer = "";
        HashSet<Character> h = new HashSet<>();
        for(char a : my_string.toCharArray()) {
            if(!h.contains(a)) {
                h.add(a);
                answer += a;
            }
        }
        
        return answer;
    }
}