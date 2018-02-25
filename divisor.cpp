#include <cstdio>
/*本题要求计算出每个输入整数的约数个数
因为有运行时间限制（<1s）所以不能使用暴力循环方式
故采用开方减小循环次数
*/

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
