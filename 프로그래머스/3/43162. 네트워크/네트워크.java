import java.util.*;

class Solution {
    public void bfs(int start, int[][] c, boolean[] v) {
        Queue<Integer> q = new LinkedList<>();
        q.offer(start);
        v[start] = true;
        
        while(!q.isEmpty()) {
            int cur = q.poll();
            for(int i = 0; i < c.length; i++) {
                if(c[cur][i] == 1 && !v[i]) {
                    v[i] = true;
                    q.offer(i);
                }
            }
        }
    }
    public int solution(int n, int[][] computers) {
        int answer = 0;
        boolean[] visited = new boolean[n];
        
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                bfs(i, computers, visited);
                answer++;
                
            }
        }
        return answer;
    }
}