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
            int d = depth.poll();
            if(current.equals(target))
                return d;
            for(int i = 0; i < words.length; i++) {
                if(!visited[i] && canchange(current, words[i])) {
                    visited[i] = true;
                    q.offer(words[i]);
                    depth.offer(d + 1);
                }
            }
        }
        return 0;
    }
    public boolean canchange(String a, String b) {
        int diff = 0;
        for(int i = 0; i < a.length(); i++) {
         if(a.charAt(i) != b.charAt(i))
             diff++;
        }
        return diff == 1;
    }
}