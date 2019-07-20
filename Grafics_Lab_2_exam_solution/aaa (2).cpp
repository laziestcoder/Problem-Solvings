/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <iostream.h>
class acount
{
    char accno[10];
    char acctype[15];
    double blance;
    public:
    account (char*no,char*type,double bl)
    {
        strcpy(acc,no);
        strcpy(acctype,type);
        blance = bl;
    }
    void sowinfo()
    {
        cout<< "Account No: "<<accno<<endl;
        cout<<"Account Type: "<<acctype<<endl;
        cout<<"Current Blance: "<<blance<<endl;
    }
};
void main (viod)
{
    account ram("SCB 0043","Current",339874.98);
    account sam ("SCB 2332","Fixed",339874.98);
    ram.showinfo();
    sam.showinfo();
}
