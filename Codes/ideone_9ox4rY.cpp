#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll save[111000], k = 0;

bool sq(ll target){
    // loop through all the numbers till the target
    for (long i = 0; i < sqrt(target)+1; i++)
    {
        // if we have a match

        if ((i * i) == target && target != 1)
        {
            //cout<<target <<" square\n";
            return 1;
        }
    }

    // no matching number could be squared
    return 0;
}
void get(ll num){
    ll square_root = (ll) sqrt(num) + 1;
    //cout<< square_root<<endl;
    for (ll i = 1; i < square_root; i++){
    if (num % i == 0){
    save[k++] = i;
    save[k++] = num/i;
    //cout<< i << " "<<num/i<<endl;
    }
    }
    sort(save, save+k, greater<int>());


}
int main()
{
    ll num, fl = 0, ok ;
    scanf("%I64d", &num);
    get(num);
    //for(ll i = 0; i<k; i++)cout<< save[i]<< " ";
    for(ll i = 0; i< k; i++){
    for(ll j = i; j <k; j++){
            //cout<< save[j]<<endl;
            ok = save[i];
        if(save[i]%save[j] == 0) if(sq(save[j]) == 0){fl = 1; continue;}
        else {fl = 0; break;}
    }
    if(fl == 1)break;
    }
    printf("%I64d\n", ok);

}
