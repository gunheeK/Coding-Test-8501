import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[][] meeting = new int[N][2];
        for(int i = 0; i < N; i++) {
            meeting[i][0] = sc.nextInt();
            meeting[i][1] = sc.nextInt();
        }

        Arrays.sort(meeting, (a, b) -> {
            if(a[1] == b[1]) return a[0] - b[0];
            return a[1] - b[1];
        });

        int count = 0;
        int endTime = 0;

        for(int i = 0; i < N; i++) {
            if(meeting[i][0] >= endTime) {
                count++;
                endTime = meeting[i][1];
            }
        }
        System.out.println(count);
    }
}
