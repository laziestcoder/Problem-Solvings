/*
ID: laziestcoder
PROG: ride
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string s,s1;
    fin >> s >> s1;;
    long long int i, sum1=1, sum2=1;
    for(i=0; i<s.size(); i++)
        sum1=(sum1*((s[i]-'A'+1)%47))%47;
    for(i=0; i<s1.size(); i++)
        sum2=(sum2*((s1[i]-'A'+1)%47))%47;
    if(sum1 == sum2 )
        fout<<"GO"<<endl;
    else
      fout << "STAY" << endl;
    return 0;
}
