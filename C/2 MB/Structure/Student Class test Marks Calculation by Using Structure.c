struct student
{
    int ct1,ct2,ct3,total;
};
int main()
{
    struct student s[3];
    int i,large,loc;

    for(i=0;i<3;i++)
    {
        scanf("%d%d%d",&s[i].ct1,&s[i].ct2,&s[i].ct3);
        s[i].total=s[i].ct1+s[i].ct2+s[i].ct3;
    }
    large=s[0].total;
    loc=0;

    for(i=0;i<3;i++)
        if(s[i].total>large)
        {
            large=s[i].total;
            loc=i;
        }
    printf("\n%d %d",large,loc);

    return 0;
}
