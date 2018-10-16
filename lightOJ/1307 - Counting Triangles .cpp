//1307 - Counting Triangles
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t,cs=0;
        cin>>t;
        while(t--){
            cs++;
            long long n;
            cin>>n;
            long long a[n+3],b,l,ans=0;
            for(int i=1;i<=n;i++) cin>>a[i];
            sort(a+1,a+n+1);
            for(int i=1;i<=n;i++){
                for(int j=i+1;j<=n;j++){
                        b=a[i]+a[j];
                        l=lower_bound(a+1,a+n+1,b)-a;
                        ans+=(l-j-1);
                }
            }
            cout<<"Case "<<cs<<": "<<ans<<endl;
        }
        return 0;
    }
