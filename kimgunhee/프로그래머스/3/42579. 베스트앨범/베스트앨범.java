import java.util.*;
class Solution {
    public int[] solution(String[] genres, int[] plays) {
        HashMap<String, Integer> music = new HashMap<>();
        List<Integer> answerList = new ArrayList<>();
        int tmp1, tmp2 = -1;
        int num1, num2 = -1;
        for(int i = 0; i < genres.length; i++) {
            music.put(genres[i], music.getOrDefault(genres[i], 0) + plays[i]);
        }
        List<String> genreList = new ArrayList<>(music.keySet());
        genreList.sort((a, b) -> music.get(b) - music.get(a));
        for(int i = 0; i < genreList.size(); i++) {
            String genre = genreList.get(i);
            tmp1 = -1;
            tmp2 = -1;
            num1 = -1;
            num2 = -1;
            for(int j = 0; j < genres.length; j++) {
                if(genre.equals(genres[j])) {
                    if(tmp1 < plays[j]) {
                        tmp2 = tmp1;
                        num2 = num1;
                        tmp1 = plays[j];
                        num1 = j;
                    }
                    else {
                        if(tmp2 < plays[j]) {
                            tmp2 = plays[j];
                            num2 = j;
                        }
                    }
                }
            }
            answerList.add(num1);
            if (num2 != -1) answerList.add(num2);
        }
        
        int[] answer = new int[answerList.size()];
        for (int i = 0; i < answerList.size(); i++) {
            answer[i] = answerList.get(i);
        }
        return answer;
    }
}
