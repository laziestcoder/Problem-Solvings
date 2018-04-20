/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a<b) cout<<"<"<<endl;
		else if(a>b) cout<<">"<<endl;
		else cout<<"="<<endl;
	}
	return 0;
}