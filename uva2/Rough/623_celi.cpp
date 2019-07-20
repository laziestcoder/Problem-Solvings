/*********** rank 955 ***********/

#include <cstdio>

#include <cstdio>

#include <cstdlib>

#include <cmath>

#define MAX_LENGTH 3000

#define DIGIT 10


int ans[1001][3000];


using namespace std;



void big_mul(int *num1, int num2, int *answer){

    int carry=0;

    for(int i=0; i< MAX_LENGTH; i++) answer[i]=0;

    for(int i=0; i< MAX_LENGTH; i++){

        int t = answer[i] + num1[i]*num2 + carry;

        answer[i] = t%10;

        carry = t/10;

    }

}


void big_fact(){

    for (int i=0; i< 1001; i++) {

        for (int j=0; j< 3000; j++) {

            ans[i][j]=0;

        }

    }

    ans[0][0] = 1;

    ans[1][0] = 1;

    for (int i=2; i<=1000; i++)

        big_mul(ans[i-1], i, ans[i]);

}


int main()

{

    int n;

    big_fact();

    while(scanf("%d", &n)!=EOF){

        int flag=0;

        printf("%d!\n",n);

        for(int i=MAX_LENGTH-1; i>=0; i--){

            if (flag==0 && ans[n][i]!=0) flag=1;

            if (flag==1) printf("%d", ans[n][i]);

        }

        printf("\n");

    }

    return 0;

}
