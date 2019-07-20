/****
A very naive solution method. I found the theorems and applied them in the most funny way possible. Wish I knew better methods.

Methods used:
1. Hiron’s for getting the area of the triangle from the lengths
2. High School straight lines theorems.
****/

#include <iostream.h>
#include <math.h>
#define DEN (Y4-Y3)*(X2-X1) - (X4-X3)*(Y2-Y1)

int fraction(double Ax, double Ay, double Bx, double By, double &Px, double &Py) {

    double Ka=1, Kb=2;

    Px = (Ka*Bx + Kb*Ax)/(Ka + Kb);
    Py = (Ka*By + Kb*Ay)/(Ka + Kb);

    return 0;
}

int intersection(double &X, double &Y, double X1, double X2, double X3, double X4, double Y1, double Y2, double Y3, double Y4) {
    double UA;
    double UB;

    UA = ((X4-X3)*(Y1-Y3) - (Y4-Y3)*(X1-X3)) / (DEN);
    UB = ((X2-X1)*(Y1-Y3) - (Y2-Y1)*(X1-X3)) / (DEN);

    X = X1 + UA*(X2-X1);
    Y = Y1 + UA*(Y2-Y1);

    return 0;
}

int length(double X1,double X2,double Y1,double Y2,double &len) {
    len = sqrt(pow(X1-X2,2) + pow(Y1-Y2,2));
}

int main() {

    /*freopen("11437_in.txt","r",stdin);*/

    double Ax, Ay, Bx, By, Cx, Cy, Ka, Kb, Px, Py, Area1, Area2;
    double F_1x, F_1y, F_2x, F_2y, F_3x, F_3y;
    double F_Ax, F_Ay,F_Bx,F_By,F_Cx,F_Cy;
    double a, b, c, s;
    int n;

    scanf("%d",&n);

    while (n--) {

        scanf("%lf %lf",&Ax,&Ay);
        scanf("%lf %lf",&Bx,&By);
        scanf("%lf %lf",&Cx,&Cy);

        fraction(Ax,Ay,Bx,By,F_1x,F_1y);
        fraction(Bx,By,Cx,Cy,F_2x,F_2y);
        fraction(Cx,Cy,Ax,Ay,F_3x,F_3y);

        intersection(F_Ax, F_Ay,F_2x,Ax,F_1x,Cx,F_2y,Ay,F_1y,Cy);
        intersection(F_Bx,F_By,F_2x,Ax,F_3x,Bx,F_2y,Ay,F_3y,By);
        intersection(F_Cx,F_Cy,F_1x,Cx,Bx,F_3x,F_1y,Cy,By,F_3y);

        length(F_Ax,F_Bx,F_Ay,F_By,a);
        length(F_Bx,F_Cx,F_By,F_Cy,b);
        length(F_Cx,F_Ax,F_Cy,F_Ay,c);

        s = (double)1/2 * (a+b+c);
        printf("%.0lf\n",(double)sqrt(s*(s-a)*(s-b)*(s-c)));
    }
    return 0;
}
