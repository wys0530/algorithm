#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end(), greater<int>()); //내림차순, sort는 algorithm 헤더 필요
    answer = numbers[0] * numbers[1];
    return answer;
}