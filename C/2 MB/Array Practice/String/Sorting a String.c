#include<stdio.h>
#include<string.h>
int main()
{
    char city[5][10]={"Dhk","Ctg","Rjs","Khl","Bar"},temp[10];
    int i,j;

    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)

    if(strcmp(city[j],city[i])<0)
    {
        strcpy(temp,city[j]);
        strcpy(city[j],city[i]);
        strcpy(city[i],temp);
    }
    for(i=0;i<5;i++)
        printf("%s\n",city[i]);

    return 0;
}
