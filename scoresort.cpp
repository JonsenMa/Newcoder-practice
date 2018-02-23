#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct S{
    char name[20];
    int score;
    int num;
};

//降序
int cmp0(S a,S b){
    if(a.score == b.score){
        if(a.num < b.num)
            return true;
        return false;
    }
    return a.score > b.score;
}

//升序
int cmp1(S a,S b){
    if(a.score == b.score){
        if(a.num < b.num)
            return true;
        return false;
    }
    return a.score < b.score;
}

int main(){
    S student[5000];
    int n, m;
    while(scanf("%d", &n)!= EOF){
        scanf("%d", &m);
        for(int i=0; i<n; i++){
            scanf("%s%d", student[i].name, &student[i].score);
            student[i].num = i;
        }
        if(m == 0)
            sort(student, student+n, cmp0);
        else
            sort(student, student+n, cmp1);
        for(int j=0; j<n; j++){
            printf("%s %d\n", student[j].name, student[j].score);
        }
    }
}