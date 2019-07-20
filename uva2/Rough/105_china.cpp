#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int skyline[10005] = {0};
  int L, H, R;
  int rightest = 0;
  bool space = false;

  while( scanf( "%d%d%d", &L, &H, &R ) != EOF ){
    for( int i = L ; i < R ; i++ )
      if( H > skyline[i] ) skyline[i] = H;
    if( R > rightest ) rightest = R;
  }

  for( int i = 1 ; i <= rightest ; i++ )
    if( skyline[i-1] != skyline[i] ){
      if( space ) printf( " " );
      space = true;
      printf( "%d %d", i, skyline[i] );
    }

  printf( "\n" );

  return 0;
