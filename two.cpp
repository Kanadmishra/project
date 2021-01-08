#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,j,i;
    int sum =0;
    int c=0;
    int l=0;
    /*cin>>t;*/
    scanf("%d",&t);
    while(t--)
    {
        cout<<"Now input in n and k respectively"<<endl;
        /*cin>>n>>k;*/
        scanf("%d",&n);
        scanf("%d",&k);
        cout<<"Now input in array "<<endl;
        int a[n];
        for(i=0;i<n;i++)
        {
            /*cin>>a[i];*/
            scanf("%d",&a[i]);
        }
        sort(a, a + n);
        for(j=n-1;j>=0;j--)
        {
            sum=sum+a[j];
            if(sum>k)
            {
                c=c+1;
                sum=0;
                l=l+1;
                if(l==2)
                {
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                c=c+1;
            }
        }
        /*cout<<c<<endl;*/
        printf("%d",c);
        c=0;
        sum=0;
        l=0;


    }
}
