import java.util.*;

class Solution {
    public int solution(String begin, String target, String[] words) {
        if(!Arrays.asList(words).contains(target))
            return 0;
        Queue<String> q = new LinkedList<>();
        Queue<Integer> depth = new LinkedList<>();
        boolean[] visited = new boolean[words.length];
        q.offer(begin);
        depth.offer(0);
        while(!q.isEmpty()) {
            String current = q.poll();
            int currentDepth = depth.poll();
            if(current.equals(target))
                return currentDepth;
            for(int i = 0; i < words.length; i++) {
                if(!visited[i] && check(current, words[i])) {
                    visited[i] = true;
                    q.offer(words[i]);
                    depth.offer(currentDepth + 1);
                }
            }
        }
        int answer = 0;
        return answer;
    }
    
    boolean check(String current, String word) {
        int jug = 0;
        for(int i = 0; i < current.length(); i++) {
            if(current.charAt(i) != word.charAt(i))
                jug++;
        }
        return jug == 1;
    }
}
