import java.util.List;
import java.util.ArrayList;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        
        int len = progresses.length;
        int[] remain = new int[len];
        int[] day = new int[len];
        
        
        for(int i = 0; i < len; i++){
            remain[i] = 100 - progresses[i];
        }
        
        for(int i = 0; i < len; i++){
            day[i] = remain[i] / speeds[i];
            if(remain[i] % speeds[i] != 0){
                day[i]++;
            }
        }
        
        List<Integer> answerList = new ArrayList<>();
        int j = 1;
        int maxday = day[0];
        for(int i = 1; i < len; i++){
            if(day[i] <= maxday){
                j++;
            }else{
                answerList.add(j);
                j = 1;
                maxday = day[i];
            }
        }
        answerList.add(j);
        
        int[] answer = new int[answerList.size()];
        for(int i = 0; i < answer.length; i++){
            answer[i] = answerList.get(i);
        }
        
        return answer;
    }
}