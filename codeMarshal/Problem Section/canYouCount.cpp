//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    long long a,n,T,t,i;
//    //cin>>T;
//    scanf("%ll",&T);
//    for(t=1;t<=t;t++)
//    {
//        set<long long>res;
//        //cin>>n;
//        scanf("%ll",&n);
//        for(i=0;i<n;i++)
//        {
//            //cin>>a;
//            scanf("%ll",&a);
//            res.insert(a);
//        }
//        cout<<"Case "<<t<<": "<<res.size()<<endl;
//    }
//    return 0;
//}
//


#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Towfiqul Islam
    * International Islamic University Chittagong (IIUC)
    *
*/
int main(){

    long long a,T,n;

    scanf("%lld",&T);
    for(int t = 1; t <= T; t++){
        set<long long> res;
        scanf("%lld",&n);
        for(int i = 0; i < n; i++){
            scanf("%lld",&a);
            res.insert(a);
        }
        printf("Case %lld: %d\n",t,res.size());
    }
    return 0;
}

