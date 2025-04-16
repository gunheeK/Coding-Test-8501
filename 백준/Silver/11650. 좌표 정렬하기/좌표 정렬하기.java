import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<int[]> coor = new ArrayList<>();
        for(int i = 0; i < N; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            coor.add(new int[]{x, y});
        }
        coor.sort((a, b) -> {
            if (a[0] == b[0]) return a[1] - b[1];
            return a[0] - b[0];
        });

        for(int[] coordi : coor) {
            System.out.println(coordi[0] + " " + coordi[1]);
        }
    }
}