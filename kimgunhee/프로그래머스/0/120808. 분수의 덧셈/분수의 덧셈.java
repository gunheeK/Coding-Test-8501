class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int[] answer = new int[2];

        // 통분 후 분자/분모 계산
        int denom = denom1 * denom2;
        int numer = numer1 * denom2 + numer2 * denom1;

        // 최대공약수로 약분
        int gcd = gcd(numer, denom);
        answer[0] = numer / gcd;
        answer[1] = denom / gcd;

        return answer;
    }

    // 유클리드 호제법으로 GCD 계산
    private int gcd(int a, int b) {
        while (b != 0) {
            int tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }
}
