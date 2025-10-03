#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int max_idx=max_element(sides.begin(), sides.end())-sides.begin();
    if(max_idx==0){
        return (sides[1]+sides[2]>sides[0])? 1: 2;
    }
    else if(max_idx==1)
        return (sides[0]+sides[2]>sides[1])? 1: 2;
    else
        return (sides[0]+sides[1]>sides[2])? 1: 2;
}