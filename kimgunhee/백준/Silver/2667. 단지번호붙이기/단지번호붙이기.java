import java.util.*;

public class Main {
    static boolean[][] visited;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, -1, 1};
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LinkedList<Integer> list = new LinkedList<>();
        int N = sc.nextInt();
        int count = 0;
        int totalCount = 0;
        int[][] arr = new int[N][N];
        visited = new boolean[N][N];
        for(int i = 0; i < N; i++) {
            String s = sc.next();
            for(int j = 0; j < N; j++) {
                arr[i][j] = s.charAt(j) - '0';
            }
        }
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                if(!visited[i][j] && arr[i][j] == 1) {
                    count = bfs(arr, i, j);
                    list.add(count);
                    totalCount++;
                }
            }
        }
        Collections.sort(list);
        System.out.println(totalCount);
        for(int i : list) {
            System.out.println(i);
        }
    }

    private static int bfs(int[][] arr, int i, int j) {
        visited[i][j] = true;
        int count = 1;
        Queue<int[]> q = new LinkedList<>();
        q.offer(new int[]{i, j});
        while (!q.isEmpty()) {
            int[] cur = q.poll();
            for(int k = 0; k < 4; k++) {
                int nx = cur[0] + dx[k];
                int ny = cur[1] + dy[k];
                if(nx >= 0 && ny >= 0 && nx < arr.length && ny < arr[0].length) {
                    if(!visited[nx][ny] && arr[nx][ny] == 1) {
                        visited[nx][ny] = true;
                        q.offer(new int[]{nx, ny});
                        count++;
                    }
                }
            }
        }
        return count;
    }
}
