#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = stoi(to_string(a)+to_string(b)); 
    if (answer < 2*a*b) answer=2*a*b; 
    return answer;
}