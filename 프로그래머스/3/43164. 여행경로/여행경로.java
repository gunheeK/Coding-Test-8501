import java.util.*;
class Solution {
    List<String> answer = null;
    public String[] solution(String[][] tickets) {
        boolean[] visited = new boolean[tickets.length];
        List<String> path = new ArrayList<>();
        Arrays.sort(tickets, (a, b) -> a[0].equals(b[0]) ? a[1].compareTo(b[1]) : a[0].compareTo(b[0]));
        path.add("ICN");
        dfs("ICN", visited, path, tickets);
        return answer.toArray(new String[0]);
    }
    public void dfs(String current, boolean[] visited, List<String> path, String[][] tickets) {
        if(path.size() == tickets.length + 1) {
            if(answer == null) {
                answer = new ArrayList<>(path);
            }
        }
        for(int i = 0; i < tickets.length; i++) {
            if(!visited[i] && tickets[i][0].equals(current)) {
                visited[i] = true;
                path.add(tickets[i][1]);
                
                dfs(tickets[i][1], visited, path, tickets);
                
                visited[i] = false;
                path.remove(path.size() - 1);
            }
        }
    }
}