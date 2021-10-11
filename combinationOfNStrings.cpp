#include <bits/stdc++.h>
using namespace std;
     
void printAllNString(char set[], int n, string prefix, int l)
{
    if( l == 0 ){
        cout << prefix << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        string newPrefix;
         
        newPrefix = prefix + set[i]  + " ";
         
        printAllNString(set, n, newPrefix, l-1);
    }
 
}

void getNString(char set[], int n, int l)
{
    printAllNString(set, n, "", l);
    
} 
 
int main()
{
    string str; 
    int l;
    getline(cin, str);
    // str = "ABCD";
    cout << "string taken " << str << endl;
    
    cin >> l;
    //l =3;
    cout << "length taken " << l << endl;
    
    set <char> strSet;
    
    int i =0, strLen = str.length();
    
    for(i = 0; i < strLen; i++){
         strSet.insert(str[i]);
    }
    
    char set[strSet.size()];
    int n = 0;
    
    for (auto itr = strSet.begin(); itr != strSet.end(); itr++) {
        set[n] = *itr;
        n++;
    }
    
    getNString(set, n, l);
    
    return 0;
}
