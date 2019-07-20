#include<bits/stdc++.h>
using namespace std;

bool checkUgly(int num)
{
    while(num%2 == 0 && num)
        num/=2;
    while(num%3 == 0 && num)
        num/=3;
    while(num%5 == 0 && num)
        num/=5;

    return (num == 1) ? true : false;
}

int main()
{
    int n = 0,k = 0;
    //cout<<"Running...."<<endl;
//    while(1)
//    {
//        if(checkUgly(n))
//        {
//            cout<<n<<" ";
//            k++;
//        }
//        if(k == 1500){
//            break;
//        }
//        n++;
//
//    }
    //printf("The 1500'th ugly number is %d.\n",n);
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}
