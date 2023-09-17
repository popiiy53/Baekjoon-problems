#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(int num) {
    string answer = "";
    
    if(num%2 == 0){
        answer += to_string(num);
        answer += " is even";
    }
    else{
        answer += to_string(num);
        answer += " is odd";
    }
    
    return answer;
}

int main(void) {
    int n;
    cin >> n;
    string an = solution(n);
    std::cout << an;
}