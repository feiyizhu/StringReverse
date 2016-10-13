#include <iostream>
#include <string.h>
using namespace std;
/**
字符串逆转
要求：输入一个字符串，输出该字符串的逆转字符串
输入:
zhufy
输出:
yfuhz
*/

char * Reverse1(char * str, int length){
    for(int i=0;i<length/2;i++){
        str[length]=str[i];
        str[i] = str[length-1-i];
        str[length-1-i]=str[length];
    }
    str[length]=0;
    return str;
}

char * Reverse2(char *str,int length){
    for(int i=0;i<length/2;++i){
        str[i] = str[i]+str[length-1-i];
        str[length-1-i]=str[i]-str[length-1-i];
        str[i]=str[i]-str[length-1-i];
    }
    return str;
}

char * Reverse3(char *str,int length){
    for(int i=0;i<length/2;i++){
        str[i]=str[i]^str[length-1-i];
        str[length-1-i]=str[i]^str[length-1-i];
        str[i]=str[i]^str[length-1-i];
    }
    return str;
}
int main()
{
    char * str;
    int len;
    int n = 100;
    char a[n];
    cin>>a;
    len=strlen(a);/*计算数组的长度，请注意sizeof和strlen的区别*/
    str = Reverse1(a,len);
    cout<<str;
    cout<<endl;
    str = Reverse2(a,len);
    cout<<str<<endl;
    str = Reverse3(a,len);
    cout<<str<<endl;
    return 0;
}


