class Solution {
    int count = 0;
    public int solution(int n, int[][] computers) {
        boolean[] visited = new boolean[n];
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                dfs(i, visited, computers);
                count++;
            }
        }
        return count;
    }
    void dfs(int node, boolean[] visited, int[][] computer) {
        visited[node] = true;
        for(int i = 0; i < computer.length; i++) {
            if(computer[node][i] == 1 && !visited[i]) {
                dfs(i, visited, computer);
            }
        }
    }
}