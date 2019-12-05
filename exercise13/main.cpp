
// 2013 -1
//#include <iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//#define MAX 10005
//int n[MAX]={0};
//int m[MAX]={0};
//int ans;
//int main()
//{
//    int num;
//    scanf("%d\n",&num);
//    //printf("%d\n",num);
//
//    for(int i=0;i<num;++i)
//    {
//
//        int x;
//        cin>>x;
//        n[x]+=1;
//    }
//
//
//
//    int temp=0;
//    int ans;
//    for(int i=0;i<num;++i)
//    {
//
//        if(n[i]>temp)
//        {
//            temp=n[i];
//            ans=i;
//
//        }
//    }
//    printf("%d\n",ans);
//}









//2013-2
//0-670-82162-4
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
     string str;
    cin>>str;
    const char *s=str;
    int i=0;
    int j=0;
    i=atoi(s[0])*1+atoi(s[2])*2+atoi(s[3])*3+atoi(s[4])*4+atoi(s[6])*5+atoi(s[7])*6+atoi(s[8]*7+atoi(s[9])*8+atoi(s[10])*9;
    j=s[12];
    if(i%11==10)
    {
        if(j=='X')
        {
            printf("%s","Right");
        }
        else{
            j='X';
            printf("%s",s);
        }
    }
    else
    {
        if(i%11==atoi(j))
        {
             printf("%s","Right");
        }
        else
        {
            int k=i%11;
            j='k';
            printf("%s",s);
        }
    }
}
