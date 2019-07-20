/******* wrong answer *******/


#include <stdio.h>


 int fact[1001][10000];
int temp[10000];
void  calculate_factorial()
{
     int i,j,k,l,p,m,x,y;
    fact[0][9999]=1;

    for(i=1;i<=1000;i++){
        k=9999;
        l=i;

    while(l>=10){
      temp[k]=l%10;
      l=l/10;
      k--;


    }
    temp[k]=l;

    p=0;
    for(j=9999;j>=k;j--){

       for(m=9999;m>=0;m--){

         if(fact[i-1][m]*temp[j]>=10){

           fact[i][m-p]+=((fact[i-1][m]*temp[j])%10);

           if(fact[i][m-p]>=10){
             fact[i][m-p-1]+=fact[i][m-p]/10;
             fact[i][m-p]=fact[i][m-p]%10;
           }
           fact[i][m-1-p]+=((fact[i-1][m]*temp[j])/10);

         }
         else {

            fact[i][m-p]+=fact[i-1][m]*temp[j];
            if(fact[i][m-p]>=10){
             fact[i][m-p-1]+=fact[i][m-p]/10;
             fact[i][m-p]=fact[i][m-p]%10;
           }

         }
       }
      p++;
    }



    }





}
int main()
{
    calculate_factorial();
    int input,x,y;
    freopen("in623.txt","r",stdin);
    while (scanf("%d",&input)==1){
    printf("%d!\n",input);
    for(x=0;x<10000;x++){
      if(fact[input][x]!=0){

          break;
      }
    }
    for(y=x;y<10000;y++)printf("%d",fact[input][y]);
    printf("\n");
    }


    return 0;
}
