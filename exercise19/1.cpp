#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,m;//n ¿ÃÊ÷ mÂÖ
    cin>>n>>m;
    int sum=0;
    int k=-1;
    int flag;// Ê÷Ãû×Ö
    for(int i=0;i<n;++i)
    {
        int num;

        cin>>num;


        sum=sum+num;
        int tmp=0;//Êß¹ûÊı
        for(int j=0;j<m;++j)
        {
            int c;

            cin>>c;
            tmp+=c;
        }
        sum=sum+tmp;
        if(abs(tmp)>k)
        {
            flag=i;
            k=abs(tmp);
        }

    }
    cout<<sum<<" "<<flag+1<<" "<<abs(k);
}
