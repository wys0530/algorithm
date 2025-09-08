#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> temp;
    while(n>0){
        temp.push_back(n%10);
        n/=10;
    }
    
    sort(temp.begin(), temp.end(), greater<int>());
    for(int i=0; i<temp.size(); i++){
        answer+=temp[i];
        if(i!=temp.size()-1)
            answer*=10; 
    }
    
    return answer;
}