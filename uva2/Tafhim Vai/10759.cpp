Done using my BigNum class, you can find that in [Projects] tag.

BigNum a[5000];



int main()

{

    int i, q;



    a[0].setNum("1",3000);

    a[1].setNum("1",3000);

    for (i=2 ; i<4790 ; i++)

    {

        a[i].setNum("0",3000);

        a[i].add(&a[i-2],&a[i-1],&a[i]);

    }





    while (scanf("%d",&q)!=EOF)

    {

        a[q-1].print();

    }



    return 0;

}
