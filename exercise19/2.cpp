#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin>>n;//������Ŀ
    int a[n+1]={0};
    int sum=0;
    for(int i=1;i<=n;++i)
    {
        int m;//�������ֵĸ���
        int m1;
        cin>>m;
        cin>>m1;//��һ����
        int tmp=m1;
        int  num=m1;//ƻ����Ŀ
        for(int j=0;j<m-1;++j)
        {
            int x=0;
            cin>>x;
            if(x>0)
            {
                if(tmp!=x)
                {
                    a[i]=1;
                    num=x;//�е���������Num
                }
            }
            else{
                tmp+=x;
                num+=x;
            }


        }
          sum+=num;
    }

    int D=0;//D
    for(int i=1;i<=n;++i)
    {
        D+=a[i];
    }
    int E=0;
    for(int i=0;i<=(n-2);++i)
    {
        if((a[i]&&a[i+1]&&a[i+2])==1)
        {
            E+=1;
        }
    }
    if(a[n-1]&&a[n]&&a[1])
    {
        E=E+1;
    }
    if(a[n]&&a[1]&&a[2])
    {
        E=E+1;
    }
    cout<<sum<<" "<<D<<" "<<E;
}
