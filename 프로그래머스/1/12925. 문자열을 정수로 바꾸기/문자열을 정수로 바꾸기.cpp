#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int cnt=1;
    int answer=0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='-')
            answer= -answer;
        else if(s[i]=='+')
            return answer;
        else{
            answer += (s[i]-'0') * cnt;
            cnt *= 10;
        }
        
    }
    return answer;
    
}