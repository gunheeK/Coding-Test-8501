import java.util.*;
class Solution {
    public int solution(int[] nums) {
        HashMap<Integer, Integer> hash = new HashMap<>();
        int answer = 0;
        for(int i = 0; i < nums.length; i++) {
            hash.put(nums[i], i);
        }
        if(hash.size() > nums.length / 2) {
            answer = nums.length / 2;
        }
        else {
            answer = hash.size();
        }
        return answer;
    }
}
