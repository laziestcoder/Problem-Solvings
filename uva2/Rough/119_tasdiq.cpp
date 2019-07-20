This problems turns out as an easy 1 if u declare a structure.
// declare an array of 10-12 elements, each of which contains the structure.
// don’t forget to clr all values, b4 starting a new set of data. Otherwise, ur structure will retain the values of previous data sets, which will appear as garbage values 4 current data sets.
Struct frnd {
integer receive
integer spend
character name [20]
} array [12] = {0, 0, ”}
// first take all the names and store it in array
continue (I = 1 to number_of_persons :: I++)
input >> array [I].name
dave 200 3 laura owen vick :: means
dave spent $ 200 among laura owen vick
laura received = 200 / 3 = $ 66 [integer division, no floating values]
owen received = 200 / 3 = $ 66
vick received = 200 / 3 = $ 66
dave spent = 200 but,
200 – (66 + 66 + 66) = 2 !! what abt this $ 2 ??
this $ 2 will be added in dave’s receive account. So,
dave received = $ 2
owen 500 1 dave ::
owen spent = $ 500
dave received = 500
// special case
suppose if, owen 500 0 :: then what shud I do ?
Owen spent = $ 500
owen received = $ 500
in this case, do not wait for inputs of receiver’s names. When number_of_persons is zero then use ‘continue’. Otherwise, sum1 will get RTE.
Sum1 !! hmm … none but u.
Use strcmp () function for matching string.
Continue while (strcmp (array [I].name, giver_name) != zero)
i++
// output specification ::
output >> array [I].name, array [I].receive – array [I].spend
do not print an extra new line at the end of ur output file
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
#include <stdio.h>
#include <string.h>

int main ()
{
    long np, i, money, person, divide, c, flag = 0;
    char giver [20], receiver [20];

    while (scanf ("%ld", &np) != EOF) {

        struct friends {
            int spend;
            int receive;
            char name [20];
        } A [12] = {0, 0, 0};

        for (i = 0; i < np; i++)
        scanf ("%s", A [i].name);

        for (c = 0; c < np; c++ ) {

            scanf ("%s", giver);
            scanf ("%ld", &money);

            i = 0;
            while (strcmp (A [i].name, giver) != 0)
                i++;
            A [i].spend += money;

            scanf ("%ld", &person);
            if (person == 0) {
                A [i].receive += money;
                continue;
            }

            divide = person;
            A [i].receive += money - ((money / person) * person);
            while (person--) {
                scanf ("%s", receiver);
                i = 0;
                while (strcmp (A [i].name, receiver) != 0)
                    i++;
                A [i].receive += (money / divide);
            }
        }

        if (flag == 1)
            printf("\n");
        flag = 1;

        for (i = 0; i < np; i++)
            printf("%s %ld\n", A [i].name, A [i].receive - A [i].spend);
    }
    return 0;
}
