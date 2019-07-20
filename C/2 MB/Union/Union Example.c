struct st
{
    int a,b,c;
};
union un
{
    int x,y,z;
};
int main()
{
    union un res;
    struct st rec;
    rec.a=10;
    rec.b=100;
    printf("%d\n",rec.a);
    res.x=10;
    res.y=100;
    printf("%d",res.x);
}
