#include <stdio.h>#include <conio.h>
#include <time.h>
#define W 119
#define D 100
#define S 115
#define A 97
int Upwards(int);
int Downwards(int);
int Rightward(int);
int Leftward(int);
char pos[12][30];
int ch;
char board[12][30] =
{
    {'|','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','|'}
};
int x_pos;
int y_pos;
int Up;
int Down;
int Right;
int Left;
main()
{




int i;
int collision=0;
int start=0;
char movement;
for(i=0;collision<1;i++){
        if(start==0){
            printf("You started Snake!!\n");
            printf("\nWhich direction would you like to move in first?\n");
            x_pos=8;
            y_pos=8;
        }














start=1;
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[0][0],board[0][1],board[0][2],board[0][3],board[0][4],board[0][5],board[0][6],board[0][7],board[0][8],board[0][9],board[0][10],board[0][11],board[0][12],board[0][13],board[0][14],board[0][15],board[0][16],board[0][17],board[0][18],board[0][19],board[0][20],board[0][21],board[0][22],board[0][23],board[0][24],board[0][25],board[0][26],board[0][27],board[0][28],board[0][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[1][0],board[1][1],board[1][2],board[1][3],board[1][4],board[1][5],board[1][6],board[1][7],board[1][8],board[1][9],board[1][10],board[1][11],board[1][12],board[1][13],board[1][14],board[1][15],board[1][16],board[1][17],board[1][18],board[1][19],board[1][20],board[1][21],board[1][22],board[1][23],board[1][24],board[1][25],board[1][26],board[1][27],board[1][28],board[1][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[2][0],board[2][1],board[2][2],board[2][3],board[2][4],board[2][5],board[2][6],board[2][7],board[2][8],board[2][9],board[2][10],board[2][11],board[2][12],board[2][13],board[2][14],board[2][15],board[2][16],board[2][17],board[2][18],board[2][19],board[2][20],board[2][21],board[2][22],board[2][23],board[2][24],board[2][25],board[2][26],board[2][27],board[2][28],board[2][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[3][0],board[3][1],board[3][2],board[3][3],board[3][4],board[3][5],board[3][6],board[3][7],board[3][8],board[3][9],board[3][10],board[3][11],board[3][12],board[3][13],board[3][14],board[3][15],board[3][16],board[3][17],board[3][18],board[3][19],board[3][20],board[3][21],board[3][22],board[3][23],board[3][24],board[3][25],board[3][26],board[3][27],board[3][28],board[3][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[4][0],board[4][1],board[4][2],board[4][3],board[4][4],board[4][5],board[4][6],board[4][7],board[4][8],board[4][9],board[4][10],board[4][11],board[4][12],board[4][13],board[4][14],board[4][15],board[4][16],board[4][17],board[4][18],board[4][19],board[4][20],board[4][21],board[4][22],board[4][23],board[4][24],board[4][25],board[4][26],board[4][27],board[4][28],board[4][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[5][0],board[5][1],board[5][2],board[5][3],board[5][4],board[5][5],board[5][6],board[5][7],board[5][8],board[5][9],board[5][10],board[5][11],board[5][12],board[5][13],board[5][14],board[5][15],board[5][16],board[5][17],board[5][18],board[5][19],board[5][20],board[5][21],board[5][22],board[5][23],board[5][24],board[5][25],board[5][26],board[5][27],board[5][28],board[5][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[6][0],board[6][1],board[6][2],board[6][3],board[6][4],board[6][5],board[6][6],board[6][7],board[6][8],board[6][9],board[6][10],board[6][11],board[6][12],board[6][13],board[6][14],board[6][15],board[6][16],board[6][17],board[6][18],board[6][19],board[6][20],board[6][21],board[6][22],board[6][23],board[6][24],board[6][25],board[6][26],board[6][27],board[6][28],board[6][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[7][0],board[7][1],board[7][2],board[7][3],board[7][4],board[7][5],board[7][6],board[7][7],board[7][8],board[7][9],board[7][10],board[7][11],board[7][12],board[7][13],board[7][14],board[7][15],board[7][16],board[7][17],board[7][18],board[7][19],board[7][20],board[7][21],board[7][22],board[7][23],board[7][24],board[7][25],board[7][26],board[7][27],board[7][28],board[7][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[8][0],board[8][1],board[8][2],board[8][3],board[8][4],board[8][5],board[8][6],board[8][7],board[8][8],board[8][9],board[8][10],board[8][11],board[8][12],board[8][13],board[8][14],board[8][15],board[8][16],board[8][17],board[8][18],board[8][19],board[8][20],board[8][21],board[8][22],board[8][23],board[8][24],board[8][25],board[8][26],board[8][27],board[8][28],board[8][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[9][0],board[9][1],board[9][2],board[9][3],board[9][4],board[9][5],board[9][6],board[9][7],board[9][8],board[9][9],board[9][10],board[9][11],board[9][12],board[9][13],board[9][14],board[9][15],board[9][16],board[9][17],board[9][18],board[9][19],board[9][20],board[9][21],board[9][22],board[9][23],board[9][24],board[9][25],board[9][26],board[9][27],board[9][28],board[9][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[10][0],board[10][1],board[10][2],board[10][3],board[10][4],board[10][5],board[10][6],board[10][7],board[10][8],board[10][9],board[10][10],board[10][11],board[10][12],board[10][13],board[10][14],board[10][15],board[10][16],board[10][17],board[10][18],board[10][19],board[10][20],board[10][21],board[10][22],board[10][23],board[10][24],board[10][25],board[10][26],board[10][27],board[10][28],board[0][29]);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",board[11][0],board[11][1],board[11][2],board[11][3],board[11][4],board[0][5],board[0][6],board[0][7],board[0][8],board[0][9],board[0][10],board[0][11],board[0][12],board[0][13],board[0][14],board[0][15],board[0][16],board[0][17],board[0][18],board[0][19],board[0][20],board[0][21],board[0][22],board[0][23],board[0][24],board[0][25],board[0][26],board[0][27],board[0][28],board[0][29]);
                if((ch=getch()) ==W){
                    board[Upwards(x_pos)][y_pos]='X';
                }
                if((ch=getch()) ==S){
                    board[Downwards(x_pos)][y_pos]='X';
                }
                if((ch=getch()) ==D){
                    board[x_pos][Rightward(y_pos)]='X';
                }
                if((ch=getch()) ==A){
                    board[x_pos][Leftward(y_pos)]='X';
                }
                 if(board[0][8]=='X'){
                        printf("You crashed!\n");
                    collision=1;
                }
        system("CLS");
}
                        printf("You crashed!\n");




}




int Upwards(Up){
        int previous;
    previous=Up;
    x_pos=x_pos-1;
    Up=Up-1;
    board[previous][y_pos]='   ';
    return(Up);


}


int Downwards(Down){
        int previous2;
        previous2=Down;
        x_pos=x_pos+1;
        Down=Down+1;
        board[previous2][y_pos]='   ';
        return(Down);
        }


int Rightward(Right){
        int previous;
        previous=Right;
        y_pos=y_pos+1;
        Right=Right+1;
        board[x_pos][previous]='   ';
        return(Right);
        }
int Leftward(Left){
        int previous;
        previous=Left;
        y_pos=y_pos-1;
        Left=Left-1;
        board[x_pos][previous]='   ';
        return(Left);
        }
