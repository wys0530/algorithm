#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p_cnt=0;
    int y_cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='p'||s[i]=='P') p_cnt+=1;
        else if(s[i]=='y'||s[i]=='Y') y_cnt+=1;
    }
    if(p_cnt==y_cnt) return true;
    else return false;
}