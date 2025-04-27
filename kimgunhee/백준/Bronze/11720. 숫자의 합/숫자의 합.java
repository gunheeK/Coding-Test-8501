import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String nums = sc.next();
        int[] num = new int[N];
        for(int i = 0; i < N; i++) {
            char ch = nums.charAt(i);
            num[i] = ch - '0';
        }
        int sum = 0;
        for(int i = 0; i < N; i++) {
            sum += num[i];
        }
        System.out.println(sum);
    }
}
