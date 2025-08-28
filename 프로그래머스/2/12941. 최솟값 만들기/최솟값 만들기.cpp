#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int A, int B){
    if(A>B) return true;
    return false;
}

int solution(vector<int> A, vector<int> B)
{
    int sum = 0; 
    
    sort(A.begin(), A.end());    
    sort(B.begin(), B.end(), cmp);    
       
    for (int i = 0; i < A.size(); i++){        
        int value = A[i] * B[i];        
        sum = sum + value;    
    }

    return sum;
}