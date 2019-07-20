
#include <stdio.h>

int main()
{
    unsigned int flag,i,minimo, maximo, temp , maior, vetor[10005];

    flag = 0;
    maior = 0;
    while(scanf("%d%d",&minimo,&maximo)!=EOF)
    {
        if (minimo > maximo)
        {
            temp = maximo;
            maximo = minimo;
            minimo = temp;
            flag = 1;
        }

        temp = i = minimo;

        for(i = minimo ; i < (maximo + 1 ) ; i++)
        {
            for(temp = i ; temp != 1 ; )
            {
                if ((temp < 10005)&&(vetor[temp] != 0 ))
                {
                    vetor[i] = vetor[temp] + vetor[i] - 1;
                    temp = 1;
                }
                else
                {
                    vetor[i] = vetor[i] + 1;
                    if ((temp % 2) != 0)
                    {
                        temp = (3 * temp) + 1;
                    }

                    else
                        temp = temp / 2;
                }
            }
            vetor[i] = vetor[i] + 1;
            if (vetor[i] > maior)
                maior = vetor[i];
        }
        if (flag == 0)
            printf("%d %d %d\n",minimo,maximo,maior);
        else
            printf("%d %d %d\n",maximo,minimo,maior);
    }
    return 0;
}
