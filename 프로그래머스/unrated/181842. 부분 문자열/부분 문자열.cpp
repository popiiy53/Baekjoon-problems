#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0; int str1_size = str1.size();
    for(int i=0; i<str2.size(); i++){
        if(str2[i] == str1[0]){
            if(str1 == str2.substr(i,str1_size))
                return 1;
            else
                answer = 0;
        }
            
    }
    return answer;
}