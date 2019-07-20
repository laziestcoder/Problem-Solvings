#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int data[1000],D[1000],n,p,k,i,t,j,m;
int menu(),ins(),del(),ser(),dis(),exit(),wrng();

int main ()
{
    int r,t;
    FILE *fp,*fq;
    printf("Towfiqul Islam.\nID: C141018\nCourse Code: CSE-2305 & 2306\nCourse Title:Data Structure\n3rd Semester.\nSection: 3AC\nDept. of CSE, IIUC.\n");
    printf("\n How many numbers?\n n= ");
    scanf("%d",&n);
    printf("\n\n Range?\n r= ");
    scanf("%d",&r);
    printf("\n\nRandom data (Total Data: %d) :\n ",n);

    fp=fopen("RAND.TXT","w+");
    for(i=1; i<=n; i++)
    {
        data[i]=rand()%r;
        printf("%d\t",data[i]);
        fprintf(fp,"%d ",data[i]);
    }
    fclose(fp);

    printf("\n\nSorted Data (Total Data: %d ) :\n ",n);
    fp=fopen("RAND.TXT","r+");
    for(i=1; i<=n; i++)
    {
        fscanf(fp,"%d",&D[i]);
    }
    fclose(fp);
    for(k=1; k<=n-1; k++)
    {
        p=1;
        while(p<=(n-k))
        {
            if(D[p]>D[p+1])
            {
                t=D[p];
                D[p]=D[p+1];
                D[p+1]=t;
            }
            p++;
        }
    }
    for(i=1; i<=n; i++)
        printf("%d\t",D[i]);

    menu();


}

int menu()
{
    int c;
    printf("\n\n\tMENU:");
    printf("\n\t\t1. Insert\n\t\t2. Delete\n\t\t3. Search\n\t\t4. Display\n\t\t5. Exit");
    printf("\n\n\t\tEnter Choice: ");
    scanf("%d",&c);
    if(c==1)
        ins();
    else if(c==2)
        del();
    else if(c==3)
        ser();
    else if(c==4)
        dis();
    else if(c==5)
        exit();
    else
        wrng();

}
int ins()
{
    printf("\n\nInsert Menu: ");
    printf("\nEnter Data: ");
    scanf("%d",&D[n+1]);
    n=n+1;
    for(k=1; k<=n-1; k++)
    {
        p=1;
        while(p<=(n-k))
        {
            if(D[p]>D[p+1])
            {
                t=D[p];
                D[p]=D[p+1];
                D[p+1]=t;
            }
            p++;
        }
    }

    printf("\nCongratulations!!\n List After Inserting New Data (Total Data %d):\n",n);
    for(i=1; i<=n; i++)
        printf("%d\t",D[i]);

    menu();
}

int del()
{
    int cnt,de;
    printf("\n\nDelete Menu: ");
    printf("\nEnter Data: ");
    scanf("%d",&m);
    for(i=1; i<=n; i++)
    {
        if(m==D[i])
        {
            cnt=0;
            de=i;
            cnt=1;
        }
    }
    if(cnt==1)
    {
        for(j=de; j<=n-1; j++)
        {
            D[j]=D[j+1];
        }
        n=n-1;
        printf("\nCongratulations!!\nNew List After Deleting Data (Total Data %d):\n",n);
        for(i=1; i<=n; i++)
            printf("%d\t",D[i]);
    }
    else
    {
        printf("\nBad Luck!!\a %d Not Found in the Data List.",m);
    }

    menu();

}
int ser()
{
    int BEG,END,MID,LB,UB,item,loc;
    printf("\n\nSearch Menu: ");
    printf("\nEnter Data: ");
    scanf("%d",&item);
    BEG=1;
    END=n;
    MID=(BEG+END)/2;
    while(BEG<=END && D[MID]!=item)
    {
        if(item<D[MID])
            END=MID-1;
        else
            BEG=MID+1;
        MID=(BEG+END)/2;
    }
    if(D[MID]==item)
    {
        loc=MID;
        printf("\nCongratulations!!\n Loc of the %d is : %d\n",item,loc);
    }
    else
    {
        loc=0;
        printf("\nBad Luck!!\a\n %d is not found in DATA LIST.\n",item);
    }
    menu();
}
int dis()
{
    printf("\n\nDisplay Menu:\n(Total Data %d)\n",n);
    for(i=1; i<=n; i++)
        printf("%d\t",D[i]);
    menu();

}
int exit()
{
    printf("\n\nExit Menu:\n");
    printf("\tWishing you all the very best. Thank You.\n");
    getch();
    return 0;
}

int wrng()
{
    printf("\n\tWrong Input.\a \n Please Try Again. . .\n\n");
    menu();
}
