import java.util.*;

public class Main {
    public static void main(String[] args) {
        HashSet<Integer> seat = new HashSet<>();
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int count = 0;
        for(int i = 0; i < N; i++) {
            int want = sc.nextInt();
            if(!seat.contains(want)) {
                seat.add(want);
            } else {
                count++;
            }
        }
        System.out.println(count);
    }
}
