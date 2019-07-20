#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,freq;
    char maze[1000];
    freopen("in445.txt","r",stdin);
    while(gets(maze)){
        i=strlen(maze);
        freq=0;
     for(j=0;j<i;j++){
      if(maze[j]>=48 && maze[j]<=57)freq=freq+(int)maze[j]-48;
      else if(maze[j]=='!'){
          printf("\n");
          freq=0;
      }
      else if(maze[j]=='b'){
       for(k=0;k<freq;k++)printf(" ");
       freq=0;
      }
      else {
      for(k=0;k<freq;k++)printf("%c",maze[j]);
      freq=0;
      }
     }
  printf("\n");
    }


    return 0;
}
