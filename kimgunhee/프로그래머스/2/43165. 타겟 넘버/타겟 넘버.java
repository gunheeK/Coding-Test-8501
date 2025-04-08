class Solution {
    int count = 0;
    public int solution(int[] numbers, int target) {
        dfs(numbers, 0, 0, target);
        return count;
    }
    void dfs(int[] num, int depth, int sum, int target) {
        if(depth == num.length) {
            if(sum == target) {
                count++;
            }
            return;
        }
        dfs(num, depth + 1, sum + num[depth], target);
        dfs(num, depth + 1, sum - num[depth], target);
    }
}
