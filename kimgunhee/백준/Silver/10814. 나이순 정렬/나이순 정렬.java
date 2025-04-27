import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<String[]> info = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        for(int i = 0; i < N; i++) {
            String age = sc.next();
            String name = sc.next();
            info.add(new String[]{age, name, String.valueOf(i)});
        }
        info.sort((a, b) -> {
            int age1 = Integer.parseInt(a[0]);
            int age2 = Integer.parseInt(b[0]);
            if(age1 == age2) return Integer.parseInt(a[2]) - Integer.parseInt(b[2]);
            return age1 - age2;
        });
        for(String[] in : info) {
            System.out.println(in[0] + " " + in[1]);
        }
    }
}
