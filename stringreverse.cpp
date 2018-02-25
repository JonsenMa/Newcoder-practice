#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
 
int main(){
    string str;
    char str1[1000];
    int len;
 
    while (cin >> str){
        len = str.length();
        strcpy(str1, str.c_str());
        reverse(str1, (str1+len));//使用了<algorithm>中的reverse()函数，因为该函数处理的是char类型数组，所以需要c_str()函数将字符串先转换为数组形式
        cout << str1 << endl;
    }
 
    return 0;
}
