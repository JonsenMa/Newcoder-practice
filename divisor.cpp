#include <cstdio>

int main(){
    int m, tmp,cnt;
    while(scanf("%d", &m) != EOF){
        for(int j=0; j<m; j++){
        scanf("%d", &tmp);
        int k;
        cnt = 0;
        for(k=1;k*k<tmp;k++)
            if(tmp%k==0){
                cnt+=2;
            }
        if(k*k == tmp)
            cnt++;
        printf("%d\n",cnt);
        }
    }
    return 0;
}