#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> temp(10, 0); //크기가 10이고 모든 원소 값은 0인 벡터 
    
    for(int i=0; i<numbers.size(); i++){
        temp[numbers[i]]=1;
    }
    
    for(int i=0; i<temp.size(); i++){
        if(temp[i]==0) answer+=i;
    }
    return answer;
}