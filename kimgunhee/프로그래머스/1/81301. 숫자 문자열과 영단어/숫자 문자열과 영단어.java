import java.util.*;
class Solution {
    static HashMap<String, Integer> dic = new HashMap<>();
    public int solution(String s) {
        String num = "";
        String tmp = "";
        int answer = 0;
        dictionary();
        for(int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if(!Character.isDigit(ch)) {
                tmp += ch;
                if(dic.containsKey(tmp)) {
                    num += dic.get(tmp);
                    tmp = "";
                }
            }
            else {
                num += ch;
            }
        }
        answer = Integer.parseInt(num);
        return answer;
    }
    static void dictionary(){
        dic.put("zero", 0);
        dic.put("one", 1);
        dic.put("two", 2);
        dic.put("three", 3);
        dic.put("four", 4);
        dic.put("five", 5);
        dic.put("six", 6);
        dic.put("seven", 7);
        dic.put("eight", 8);
        dic.put("nine", 9);
    }
}
