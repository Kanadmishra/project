#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,K,D,i,j,A;
    int a[N];
    int sum=0;
    cin>>T;
    while(T>0)
    {
        cin>>N>>K>>D;
        cout<<"Now do input in array";
        for(i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(j=0;j<N;j++)
        {
            sum += a[j];
        }

        if(sum>=K)
        {
            A=sum/K;
            if(A>D)
            {
                cout<<D<<endl;
            }
            else
            {
                cout<<A<<endl;
            }
        }
        else
        {
           cout<<"0"<<endl;
        }
        sum=0;
        T--;
    }

}
