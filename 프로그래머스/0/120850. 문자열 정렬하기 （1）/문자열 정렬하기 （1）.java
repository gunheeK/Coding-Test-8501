import java.util.*;

class Solution {
    public int[] solution(String my_string) {
        ArrayList<Integer> arr = new ArrayList<>();
        for(char a : my_string.toCharArray()) {
            if(Character.isDigit(a)) {
                arr.add(a - '0');
            }
        }
        Collections.sort(arr);
        
        int[] answer = new int[arr.size()];
        for(int i = 0; i < arr.size(); i++) {
            answer[i] = arr.get(i);
        }
        return answer;
    }
}