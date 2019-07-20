/**
ID: TOWFIQUL ISLAM
PROG: beads
LANG: C++11
**/

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAXN 400

char necklace[MAXN];
int len;

int mod(int n, int m)
{
    while(n < 0)
        n += m;
    return n%m;
}
int nbreak(int p, int dir)
{
    char color;
    int i, n;

    color = 'w';

    if(dir > 0)
        i = p;
    else
        i = mod(p-1, len);

    for(n=0; n<len; n++, i=mod(i+dir, len))
    {
        if(color == 'w' && necklace[i] != 'w')
            color = necklace[i];
        if(color != 'w' && necklace[i] != 'w' && necklace[i] != color)
            break;
    }
    return n;
}

int main()
{
    FILE *fin, *fout;
    int i, n, m;

    fin = fopen("beads.in", "r");
    fout = fopen("beads.out", "w");
  //  assert(fin != NULL && fout != NULL);

    fscanf(fin, "%d %s", &len, necklace);
   // assert(strlen(necklace) == len);

    m = 0;
    for(i=0; i<len; i++)
    {
        n = nbreak(i, 1) + nbreak(i, -1);
        if(n > m)
            m = n;
    }
    if(m > len)
        m = len;

    fprintf(fout, "%d\n", m);
    return 0;
}
