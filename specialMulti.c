//运行时间：3 ms	
//占用内存：384K
#include <stdio.h>
#include <string.h>

int a[9],b[9];

void numberProcess(int f,int s){
    for(int i = 8;i >= 0;i--){
        if((f/10 != 0) || (f % 10 > 0)){
            a[i] = f % 10;
            f = f / 10;
        }
        if((s/10 != 0) || (s % 10 > 0)){
            b[i] = s % 10;
            s = s / 10;
        }
    }
}

int main(){
    int f,s,result;
    while(scanf("%d%d", &f, &s) != EOF){
        memset(a,-1,sizeof(a));
        memset(b,-1,sizeof(b));
        result = 0;
        numberProcess(f,s);
        for(int j = 8;j >= 0;j--){
            if(a[j] != -1)
                for(int k = 8;k >= 0;k--)
                    if(b[k] != -1)
                        result += a[j] * b[k];
        }
        printf("%d\n", result);
    }
    return 0;
}

/*
*大神代码参考
#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
    string str1, str2;
    while(cin >> str1 >> str2)
    {
        int sum = 0;
        for(int i = 0; i < str1.length(); ++i)
        {
            for(int j = 0; j < str2.length(); ++j)
            {
                sum += (str1[i]-'0')*(str2[j]-'0');
            }
        }
 
        cout << sum << endl;
    }
 
    return 0;
}*/
