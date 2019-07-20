#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

#define typespeed 250
#define waitspeed 1000

int main()
{
    mainmenu();

    return 0;
}
/* *************************************************************************** */
mainmenu()
{
    int option;

    startapp();

    system("cls"); //Clear Screen

    printf("\n*** Lab Assignment - I ***\n\n");
    printf("    [1] Simple 4in1 Calculator\n");
    printf("    [2] cm -> inch\n");
    printf("    [3] Fahrenheit -> Celsius\n");
    printf("    [4] Calculate radius of a circle\n");
    printf("    [5] Calculate X, Y, Z students total marks and average.\n");
    printf("    [6] Calculate the length of the hypotenuse of a right triangle given the length of other two sides.\n");
    printf("    [7] Compute the area of the triangle.\n");

    printf("\n    [0] Press \'0\' for exit the program.\n");

    printf("\n\nEnter any option number and press <enter>: ");
    scanf("%d",&option);

    if (option >= 0 && option < 8)
    {

        system("cls"); //Clear Screen

        printf("\n\n*********************************************\n\n");

        switch(option)
        {
        case 0:
            exitapp();
            break;
        case 1:
            calculator();
            break;
        case 2:
            cmtoinch();
            break;
        case 3:
            fahtotmp();
            break;
        case 4:
            radius();
            break;
        case 5:
            stdmarks();
            break;
        case 6:
            hypotenuse();
            break;
        case 7:
            areaoftriangle();
            break;
        default:
            printf("Invalid input!");
        }

        printf("\n\n*********************************************\n\n");
        printf("Press any key to go to main menu.");

        getch();

        mainmenu();

    }
    else
    {
        printf("\n\n</> Invalid input! </>\n\n");
        printf("\nPress any key to go to main menu.");
        getch();

        mainmenu();
    }
}
/* *************************************************************************** */
startapp()
{
    // Goodbye Text
    printf("\n\n\n            L");
    Sleep(typespeed);
    printf(" O");
    Sleep(typespeed);
    printf(" A");
    Sleep(typespeed);
    printf(" D");
    Sleep(typespeed);
    printf(" I");
    Sleep(typespeed);
    printf(" N");
    Sleep(typespeed);
    printf(" G");
    Sleep(typespeed);
    printf(" .");
    Sleep(typespeed);
    printf(" .");
    Sleep(typespeed);
    printf(" .");

    Sleep(waitspeed);
}
/* *************************************************************************** */
exitapp()
{
    // Clean Screen
    system("cls");

    // Goodbye Text
    printf("\n\n\n            G");
    Sleep(typespeed);
    printf(" O");
    Sleep(typespeed);
    printf(" O");
    Sleep(typespeed);
    printf(" D");
    Sleep(typespeed);
    printf("   ");
    Sleep(typespeed);
    printf(" B");
    Sleep(typespeed);
    printf(" Y");
    Sleep(typespeed);
    printf(" E");
    Sleep(typespeed);
    printf(" !");

    Sleep(waitspeed);

    printf("\n\n            :");
    Sleep(typespeed);
    printf("D");

    Sleep(waitspeed);

    printf("\n\n            .");
    Sleep(typespeed);
    printf(" .");
    Sleep(typespeed);
    printf(" .");
    Sleep(typespeed);
    printf(" .");
    Sleep(typespeed);
    printf(" .");
    Sleep(typespeed);
    printf(" .");
    Sleep(typespeed);
    printf(" .");

    exit(0);
}
/* *************************************************************************** */
calculator() // 1
{
    printf("This is a function.");
}
/* *************************************************************************** */
cmtoinch() // 2
{
    printf("This is a function.");
}
/* *************************************************************************** */
fahtotmp() // 3
{
    printf("This is a function.");
}
/* *************************************************************************** */
radius() // 4
{
    printf("This is a function.");
}
/* *************************************************************************** */
stdmarks() // 5
{
    printf("This is a function.");
}
/* *************************************************************************** */
hypotenuse() // 6
{
    printf("This is a function.");
}
/* *************************************************************************** */
areaoftriangle() // 7
{
    printf("This is a function.");
}
