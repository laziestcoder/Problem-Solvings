#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
int main ()
{
    int i=0;
    while(1)
    {
        char c = '%';
        for(int j = 0; j<= 3000; j++)
        {
            //Sleep(5);
            printf("%d %d %d %d %d %d %d %d ",rand()%2,rand()%2,rand()%2,rand()%2,rand()%2,rand()%2,rand()%2,rand()%2);

        }
        //getchar();
        Sleep(2);
        printf("\nHacking......................System Cracked...................Processing......................%d%c \n",i,c);
        Sleep(500);
        i++;
        if(i==100)
        {
            printf("Hacking..................System Cracked..................Processing 100%");
            i  = 0;
        }

    }
    return 0;
}
