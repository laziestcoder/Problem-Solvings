           else
                {
                    c=0;
                    for(i=0; i<n; i++)
                    {
                        if(a[m]+b[n]>=10)
                            c++;
                    }
                    if(c==0)
                        printf("No carry operation\n");
                    else if(c==1)
                        printf("%lld carry operation.\n",c);
                    else
                        printf("%lld carry operations.\n",c);
                }

            }
            else
            {
                c=0;
                for(i=0; i<m; i++)
                {
                    if(a[i]+b[i]>=10)
                        c++;
                }
                if(c==0)
                    printf("No carry operation\n");
                else if(c==1)
                    printf("%lld carry operation.\n",c);
                else
                    printf("%lld carry operations.\n",c);
            }

        }
