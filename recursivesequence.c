/*#include <stdio.h>

int cal(int a0, int a1, int p, int q, int n){
    if(n == 2)
        return p*a1+q*a0;
    return p*cal(a0,a1,p,q,n-1)+q*cal(a0,a1,p,q,n-2);
}

int main(){
    int a,b,c,d,e,result;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    result = cal(a,b,c,d,e);
    printf("%d\n", result%10000);
}*/

#include<stdio.h>
int main(){
   int a0,a1,p,q,k;
    while(scanf("%d %d %d %d %d",&a0,&a1,&p,&q,&k)!=EOF){
       int result=0;
        for(int i=2;i<=k;i++){
        result=(q*a0+p*a1)%10000;
        a0=a1;
        a1=result;
    }
    printf("%d\n",a1%10000);    
    }
    return 0;
}
