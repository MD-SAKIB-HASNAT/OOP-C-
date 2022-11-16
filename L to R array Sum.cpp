#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    long long arr[n+1],cpy[n+1],sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        cpy[i]=sum;
    }
    while(q--)
    {
        int L,R;
        cin>>L>>R;
        if(L==1) cout<<cpy[R]<<endl;
        else cout<<cpy[R]-cpy[L-1]<<endl;
    }
    return 0;
}
