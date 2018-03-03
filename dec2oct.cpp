#include <stack>
#include <stdio.h>
using namespace std;

int main(){
    int input;
    stack<int> s;
    while(scanf("%d", &input) != EOF){
        while(!s.empty())
            s.pop();
        while((input != 0) || (input % 8 > 0)){
            s.push(input % 8);
            input = input / 8;
        }
        while( !s.empty() ){
            printf("%d", s.top());
            s.pop();
        }
        printf("\n");
    }
}
