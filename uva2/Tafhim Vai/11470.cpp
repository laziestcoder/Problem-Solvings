/**
I think this problem needs no extra explanations. Just be careful for Odd Ordered matrices.
For them subtract the middle number at the very last SUM.
The output cannot have space at the very end of each line.
Take the Columns and Rows separately for the SUM. And beware of the corners being added twice.
The code is too rough. A useless separation for Even/Odd comparison. But I’m feeling too tired
to correct it right now and I don’t like forgetting about posting the codes.
**/
#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

int MATRIX[12][12];

int main() {

    /*freopen("INPUT.TXT","r",stdin);*/

    int ROW, PRO, COLUMN, SIZE, SUM, CASES=1;

    while ( scanf("%d",&SIZE)==1 && SIZE!=0 ) {

        printf("Case %d: ",CASES++);

        /* -----INPUT PROCESS START------ */
        for (ROW=0 ; ROW<SIZE ; ROW++) {
            for (COLUMN=0 ; COLUMN<SIZE ; COLUMN++) {
                scanf("%d",&MATRIX[ROW][COLUMN]);
            }
        }
        /* -----INPUT PROCESS END-------- */

        /* -----SUMMING PROCESS START ---*/
        if (!(SIZE%2) ) {
            for (PRO=0, SUM=0 ; PRO<(int)SIZE/2 ; PRO++) { /* ---SECTIONING TILL HALF LIMIT--- */
                /* ----FOR FIRST AND LAST ROWS OF THE SECTION---- */
                SUM=0;

                for (COLUMN=PRO ; COLUMN<SIZE-PRO ; COLUMN++) {
                   /*printf("%d %d\n",MATRIX[PRO][COLUMN],MATRIX[SIZE-PRO-1][COLUMN]);*/
                   SUM += MATRIX[PRO][COLUMN] + MATRIX[SIZE-PRO-1][COLUMN];
                }
                for (ROW=PRO+1 ; ROW<SIZE-PRO-1 ; ROW++) {
                    SUM += MATRIX[ROW][PRO] + MATRIX[ROW][SIZE-PRO-1];
                }
                if (PRO!=((int)SIZE/2)-1) printf("%d ",SUM);
                else printf("%d",SUM);
            }
        } else {
            for (PRO=0, SUM=0 ; PRO<=(int)SIZE/2 ; PRO++) { /* ---SECTIONING TILL HALF LIMIT--- */
                /* ----FOR FIRST AND LAST ROWS OF THE SECTION---- */
                SUM = 0;
                for (COLUMN=PRO ; COLUMN<SIZE-PRO ; COLUMN++) {
                   /*printf("%d %d\n",MATRIX[PRO][COLUMN],MATRIX[SIZE-PRO-1][COLUMN]);*/
                   SUM += MATRIX[PRO][COLUMN] + MATRIX[SIZE-PRO-1][COLUMN];
                }
                 /*MIDDLEMOST ELEMENT*/

                for (ROW=PRO+1 ; ROW<SIZE-PRO-1 ; ROW++) {
                    SUM += MATRIX[ROW][PRO] + MATRIX[ROW][SIZE-PRO-1];
                }
                if (PRO!=(int)SIZE/2) printf("%d ",SUM);
            }
            SUM -= MATRIX[PRO-1][COLUMN-1];
            printf("%d",SUM);
        }
        printf("\n");

    }

    return 0;

}
