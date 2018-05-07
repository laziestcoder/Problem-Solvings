/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string sr,mr;
    int ar[26]={0};
    int i=0;


    cin>>sr;


	int qt=0;
    for(i=0; i<sr.size(); i++)
        {
			if(sr[i]>='A' && sr[i]<='Z')
				ar[sr[i]-'A']=1;
            else if(sr[i]=='?')
				qt++;
		}

    long long int c=0;
    
    for(i=0; i<26; i++)
        if(ar[i]==0)
            c++;
            
            
    if(sr.size()<26 || c==0 || qt<c )
		{
			cout<<-1<<endl;
			return 0;
		}

   		
	for(i=0; i<sr.size();  i++)
	{
		if(sr[i]=='?' && qt>0)
		{					
			int p=c;
			if( qt<=p && qt>0 )
			{
				for(int k=0; k<=25; k++)
				{
					if(ar[k]==0)
					{
						sr[i]='A'+k;
						ar[k]=1;
						qt--;
						c--;
						break;
					}
				}
			}
			else
			{
				sr[i]='A';
				qt--;
			}
		}
	}
		
	if(qt || c)
		cout<<-1<<endl;
	else
		cout<<sr<<endl;  
		        
    return 0;
}
