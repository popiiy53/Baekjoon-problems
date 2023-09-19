#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    for(int i=0; i<binomial.size(); i++){
        if(binomial[i]=='+')
            answer = stoi(binomial.substr(0,i-1)) + stoi(binomial.substr(i+2,binomial.size()-i+3));
        if(binomial[i]=='-')
            answer = stoi(binomial.substr(0,i-1)) - stoi(binomial.substr(i+2,binomial.size()-i+3));
        if(binomial[i]=='*')
            answer = stoi(binomial.substr(0,i-1)) * stoi(binomial.substr(i+2,binomial.size()-i+3));
    }
    return answer;
}