class Solution {
    public int solution(String[] strArr) {
        int answer = 0;
        int[] list = new int[31];
        for(String a : strArr) {
            list[a.length()]++;
        }
        for(int a : list) {
            if(answer < a) {
                answer = a;
            }
        }
        return answer;
    }
}