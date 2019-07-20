// Algo: 4.4, Bubble Sort, Program: 4.6
#include<stdio.h>

int data[10]={22,65,1,99,32,17,74,49,33,2};
int n=10;
void bubble();

int main()
{
    int i;
    printf("Values contained in data[10] =");
    for(i=0;i<10;i++)
        printf(" %d",data[i]);

    bubble();

    printf("\n\nValues contained in data[10] after sorting =");
    for(i=0;i<10;i++)
        printf(" %d",data[i]);
    getch();
}

void bubble()
{
    int k,ptr,temp;
    for(k=0;k<=(n-1-1);k++)
    {
        ptr=0;
        while(ptr<=(n-k-1-1))
        {
            if(data[ptr]>data[ptr+1])
            {
                temp=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=temp;
            }
            ptr=ptr+1;
        }
    }
}
