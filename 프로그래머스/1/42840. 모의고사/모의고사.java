import java.util.Arrays;
import java.util.ArrayList;

class Solution {
    public int[] solution(int[] answers) {
        ArrayList<Integer> answer = new ArrayList<>();
        int[] score = {0,0,0};
        int[] student1 ={1, 2, 3, 4, 5};
        int[] student2 = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] student3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        
        for(int i=0; i<answers.length; i++){
            if(answers[i] == student1[i%5])
                score[0]++;
            if(answers[i] == student2[i%8])
                score[1]++;
            if(answers[i] == student3[i%10])
                score[2]++;
        }
        
        int highscore = Arrays.stream(score).max().getAsInt();
        
        for(int i=0; i<3; i++)
            if(score[i] == highscore) answer.add(i+1);
    
        int[] result = new int[answer.size()];
        for(int i=0; i<answer.size(); i++)
            result[i]=answer.get(i);
        
        return result;
    }
}