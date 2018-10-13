#include<stdio.h>
#include<stdlib.h>
// #include<cstring>
// using namespace std;
//字符串翻转函数，仅限英文
// extern "C" _declspec(dllexport) 
void reverse(char* s,int len) 
{ 
    int i;

    // char* sc=new char[len];
    char* sc;
    sc=malloc( len * sizeof(char) );
    // dynArr = malloc( arrLen * sizeof(int) )
    printf("len=%d\n",len);
    printf("c code==>"); 
    for(i=0;i<len*4;i++)        
        printf("%c;",s[i]);    
    printf("\n");
    
    for(i=0;i<len;i++)
    {
        sc[i]=s[i*4];//下标乘2跳过'\0'
    }
    for(i=0;i<len;i++)
        s[i*4]=sc[len-1-i];
}
