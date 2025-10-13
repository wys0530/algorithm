#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int slice, int n) {
    int answer = ceil((double)n/slice);
    return answer;
}