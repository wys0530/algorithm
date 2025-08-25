#include <string>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    int min=INT_MAX;
    int min_index=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<min){
            min_index=i;
            min=arr[i];
        } 
    }
    arr.erase(arr.begin()+min_index);
    if(arr.empty()) return {-1};
    else
        return arr;
}