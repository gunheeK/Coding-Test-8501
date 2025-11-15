import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String answer = "";
        for(int i = 0; i < a.length(); i++) {
            char k = a.charAt(i);
            if(Character.isUpperCase(k)) {
                answer += Character.toLowerCase(k);
            }
            else {
                answer += Character.toUpperCase(k);
            }
        }
        System.out.println(answer);
    }
}