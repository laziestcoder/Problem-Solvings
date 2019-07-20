    #include<iostream>
    #include<string>
    #include<vector>
    using namespace std;

    int main()
    {
        int t,k=0;
        cin>>t;
        while(t--){
            k++;
            string p,q;
            int n,f=0;
            cin>>n;
            vector < string > a1(n+1),a2(n+1);
            for(int i=0;i<n;i++){
                cin>>a1[i]>>a2[i];
                }
            for(int i=0;i<n;i++){
                    for(int j=i+1;j<=n;j++){
                        if(a1[i]==a2[j]){
                            if(a2[i]==a1[j]){
                                f=1;
                                break;
                        }
                        }
                    }
                }
            if(f==1) cout<<"Case "<<k<<": No\n";
            else cout<<"Case "<<k<<": Yes\n";
        }
        return 0;
    }

