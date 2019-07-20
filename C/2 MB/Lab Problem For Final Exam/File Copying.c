#include<stdio.h>
int main()
{
    FILE *fs,*ft;
    char ch;
    int vcount=0,totalch=0;
    fs=fopen("file1.txt","r");
    if(fs==NULL)
    {
        puts("Cannot open source file");
        exit(1);
    }
    ft=fopen("file2.txt","w");
    if(ft==NULL)
    {
        puts("Cannot open target file");
        fclose(fs);
        exit(1);
    }
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
            break;
        else
        {
            fputc(ch,ft);
            printf("%c",ch);
            totalch++;
            if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
                vcount++;
        }
    }
    fclose(fs);
    fclose(ft);
    printf("\nTotal Vowel: %d\nTotal Characters Copied: %d",vcount,totalch);
    return 0;
}
