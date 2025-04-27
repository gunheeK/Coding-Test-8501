import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        boolean[] visited = new boolean[100001];
        int[] dist = new int[100001];
        Queue<Integer> q = new LinkedList<>();
        q.offer(N);
        visited[N] = true;
        while (!q.isEmpty()) {
            int now = q.poll();
            if(now == K) {
                System.out.println(dist[now]);
                return;
            }
            int[] solution = {now - 1, now + 1, now * 2};
            for(int i = 0; i < 3; i++) {
                int next = solution[i];
                if(next >= 0 && next < 100001 && !visited[next]) {
                    visited[next] = true;
                    dist[next] = dist[now] + 1;
                    q.offer(next);
                }
            }
        }
    }
}
