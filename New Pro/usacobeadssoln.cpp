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

/**
 * Return n mod m.  The C % operator is not enough because
 * its behavior is undefined on negative numbers.
 **/
int mod(int n, int m)
{
    while(n < 0)
        n += m;
    return n%m;
}

/**
 * Calculate number of beads gotten by breaking
 * before character p and going in direction dir,
 * which is 1 for forward and -1 for backward.
 **/
int nbreak(int p, int dir)
{
    char color;
    int i, n;

    color = 'w';

    /** Start at p if going forward, bead before if going backward **/
    if(dir > 0)
        i = p;
    else
        i = mod(p-1, len);

    for(n=0; n<len; n++, i=mod(i+dir, len))   /** We use "n<len" to cut off loops that go around the whole necklace **/
    {
        if(color == 'w' && necklace[i] != 'w')/** record which color we're going to collect **/
            color = necklace[i];
        if(color != 'w' && necklace[i] != 'w' && necklace[i] != color)
            break;   /** If we've chosen a color and see a bead not white and not that color, stop **/
    }
    return n;
}

int  main()
{
    FILE *fin, *fout;
    int i, n, m;

    fin = fopen("beads.in", "r");
    fout = fopen("beads.txt", "w");
    assert(fin != NULL && fout != NULL);

    while(fscanf(fin, "%d %s", &len, necklace)==2){
    assert(strlen(necklace) == len);

    m = 0;
    for(i=0; i<len; i++)
    {
        n = nbreak(i, 1) + nbreak(i, -1);
        if(n > m)
            m = n;
    }

    /**
     * If the whole necklace can be gotten with a good
     * break, we'll sometimes count beads more than
     * once.  this can only happen when the whole necklace
     * can be taken, when beads that can be grabbed from
     * the right of the break can also be grabbed from the left.
     **/
    if(m > len)
        m = len;

    fprintf(fout, "%d\n", m);
    }

    return 0;
}
