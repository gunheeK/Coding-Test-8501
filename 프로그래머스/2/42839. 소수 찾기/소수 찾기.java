import java.util.*;

class Solution {
    static HashSet<Integer> set = new HashSet<>();
    public int solution(String numbers) {
        boolean[] visited = new boolean[numbers.length()];
        int count = 0;
        make(numbers, "", visited);
        for(int n : set) {
            if(isPrime(n)) {
                count++;
            }
        }
        return count;
    }
    static void make(String num, String current, boolean[] visited) {
        if(!current.equals("")) {
            int n = Integer.parseInt(current);
            set.add(n);
        }
        for(int i = 0; i < num.length(); i++) {
            if(!visited[i]) {
                visited[i] = true;
                make(num, current + num.charAt(i), visited);
                visited[i] = false;
            }
        }
    }
    static boolean isPrime(int num) {
        if(num == 1 || num == 0) {
            return false;
        }
        for(int i = 2; i < num; i++) {
            if(num % i == 0) {
                return false;
            }
        }
        return true;
    }
}