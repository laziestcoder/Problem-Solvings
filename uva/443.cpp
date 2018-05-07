/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define M 5845
long long numbers[M];

//void func()
//{
//    int a[4]={2,3,5,7};
//    set<lld> s;
//    set <lld> :: iterator it;
//    s.insert(1);
//    it=s.begin();
//    while (s.size()<5842)
//    {
//        for (int i=0;i<4;i++)
//        {
//            lld b=*it*a[i];
//            if (b<2000000001) s.insert(b);
//        }
//        it++;
//    }
//    vector<lld> marked(s.begin(),s.end());
//}
//

void func()
{
    int i = 1;

    priority_queue<long long, vector<long long>, greater<long long> > nums;
    nums.push(1);

    for (; i < M; i++)
    {
        long long num = nums.top();
        nums.pop();

        while (!nums.empty() && nums.top() == num)
            nums.pop();

        numbers[i] = num;

        nums.push(num * 2);
        nums.push(num * 3);
        nums.push(num * 5);
        nums.push(num * 7);
    }
}

int main()
{
    func();
    //freopen("output.txt","w",stdout);
    int n,x;
    string s;
    while(cin>>n && n)
    {
        x=n;
        n=n%100;
        if (n > 10 && n < 20)
            s="th";
        else if(n%10==1)
            s="st";
        else if(n%10==2)
            s="nd";
        else if( n%10==3)
            s="rd";
        else
            s="th";
        cout<<"The "<<x<<s<<" humble number is "<<numbers[x]<<"."<<endl;
    }

    return 0;
}

