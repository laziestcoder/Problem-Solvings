/*
TASK:
ALGO:
LANG: C++
USER: smilitude1
*/

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

#define REP(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,b) for(int i=(a); i<=(b); i++)
#define SET(t,v) memset((t), (v), sizeof(t))
#define sz size()
#define pb push_back
#define i64 long long
#define ALL(x) x.begin(), x.end()

#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)
#define REV(x) reverse( ALL( x ) )

#define IO freopen("","r",stdin); freopen("","w",stdout);
#define debug(x) cerr << __LINE__ <<" "<< #x " = " << x << endl

#define VI vector<int>

class omuk {
    public :
        int a, b,c ;

};

// #include <vector>

int vector_f( ) {

    vector< int > v;

    v.push_back( 10230 );
    v.push_back( 102321 );
    v.push_back( 12302 );
    v.push_back( 1303 );

    for(int i=0; i<v.size(); i++) cout << v[i] << endl;
    cout <<"+++++++++++"<<endl;
    sort( v.begin(), v.end() );
    for(int i=0; i<v.size(); i++) cout << v[i] << endl;

    vector< vector<int> > vv;
    vector< int > vvv[100][100];
    vector< vector< vector< int > > > x;


}

// #include <queue>

void queue_f() {
    queue< int > q;

    q.push( 40 ); q.push( 50 ); q.push( 100 );
    while( q.size() >=  1 ) {
        int goodboy = q.front();
        cout << goodboy << endl;
        q.pop();
    }

  //  while( ! q.empty() ) {}
}

// operator overloading
struct data {
    int value;
    int name;
    int next;

    bool operator < ( const data& x ) const {
        return value > x.value;
    }
};

// we can sorting anything if the operator is overloaded
// vector< data > d;
// sort( d.begin(), d.end() );


// #include <queue>

void priority_q_f() {
    priority_queue < int > q;

    q.push( -40 ); q.push( -50 ); q.push( -100 );
    while( q.size() >=  1 ) {
        int gunda = q.top();
        cout << -1 * gunda << endl;
        q.pop();
    }

}

// #include <cstdlib>
//	google this - memset site:cppreference.com
void memset_f() {

     int a[100][100];
     memset( a, 0, sizeof( a ) );

     SET( a, 0 );
     SET( a, 63 ); // setting a huge integer in a

     cout << a[0][0] << endl; // this is the value thats assigned, its less than 2^30

}


// #include <stack>
void stack_f() {
    stack< int > s;
    s.push(100);
    cout << s.top() << endl;
    s.pop();
}


// #include <algorithm> for next_palindrome
// #include <string> for string
void nextP() {
    string s = "abcdefgh";
    string t = "ijklmnop";

    next_permutation( s.begin(), s.end() );
    cout << s << endl;

    prev_permutation( s.begin(), s.end() );
    cout << s << endl;

    string x = s + t;
    cout << "first ten char "<<
    x.substr( 0, 10 ) << endl;
    cout << x << endl;
    reverse( x.begin(), x.end() );
    cout << x << endl;
    cout << x.size() << endl;

    vector< string > vs;

    vs.pb( "abu" );
    vs.pb( "babu" );
    vs.pb( "gabu" );
    vs.pb( "tabu" );

    cout <<"-----------------"<<endl;
    cout <<"lal  nil  holud beguni"<<endl;
    do {
        cout << vs[0] <<" " << vs[1] << " " << vs[2] <<" "<<vs[3] <<endl;
    }while( next_permutation( vs.begin(), vs.end() ) );


}

// #include <set>
void set_f() {

    set< int > s;
    s.insert( 8 );
    s.insert( 8 );
    s.insert( 34 );

    vector< int > v( s.begin(), s.end() ); // assigning a set into a vector for easy accessing
    if( s.find( 8 ) != s.end() ) cout<<"ase"<< endl;
    else cout <<"nai"<<endl;
}


// the main structure of pair
struct pair {
    int first, second;
}

// make_pair( 12, 13 );  // this returns a pair


// #include <map>
void map_f() {
    map< int, int > m;
    m[ 8 ]++;
    m[ 9 ]++;

    cout << m[9] << endl;
}

int main() {

	nextP();
    system("pause"); // this is necessary for devcpp to hold the screen
	return 0;
}
