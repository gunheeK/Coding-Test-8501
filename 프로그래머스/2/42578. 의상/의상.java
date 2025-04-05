import java.util.*;
class Solution {
    public int solution(String[][] clothes) {
        HashMap<String, Integer> wardrobe = new HashMap<>();
        int answer = 1;
        for(int i = 0; i < clothes.length; i++) {
            String type = clothes[i][1];
            wardrobe.put(type, wardrobe.getOrDefault(type, 0) + 1);
        }
        for (int count : wardrobe.values()) {
            answer *= (count + 1);
        }
        return --answer;
    }
}