#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int k=0;
    for(int i=0; i< s.size(); i++){
        if(s[i] == ' ') {
            k=0;
            continue;
        }
        else if(k%2==0) s[i]=toupper(s[i]);
        else s[i]=tolower(s[i]);
        k++;
    }
    return s;
}