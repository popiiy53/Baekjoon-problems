#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    
    if(n==1){
        for(int i=0; i<=slicer[1]; i++){
            answer.push_back(num_list[i]);
        }
    }
    else if(n==2){
        for(int j=slicer[0]; j<num_list.size(); j++){
            answer.push_back(num_list[j]);
        }
    }
    else if(n==3){
        for(int k=slicer[0]; k<=slicer[1]; k++){
            answer.push_back(num_list[k]);
        }
    }
    else{
        for(int l=slicer[0]; l<=slicer[1]; l+=slicer[2]){
            answer.push_back(num_list[l]);
        }
    }
    return answer;
}