import java.util.TreeSet;

class Solution {
    public int[] solution(int[] numbers) {
        TreeSet<Integer> sum = new TreeSet<>();
        
        for(int i=0; i<numbers.length-1; i++){
            for(int j=i+1; j<numbers.length; j++){
                sum.add(numbers[i] + numbers[j]);
            }
        }
        
        int[] answer = new int[sum.size()];
        int i=0;
        
        for(int num: sum)
            answer[i++]=num;
        
        return answer;
    }
}