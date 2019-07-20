#include <iostream>
#include <string>
using namespace std;


#define M 100000000
bool marked[M];
void sieve2(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (marked[i] == false)   // i is a prime
          {
            for (int j = i + i; j <= n; j += i)
            {
                marked[j] = true;
            }
         }
    }
}

string PrimeTime(int num) {

    if (marked[num]){
        return "false";
    }else{
    return "true";
    }
}

int main() {

  // keep this function call here
  sieve2(20000000);
  cout << PrimeTime(gets(stdin));
  return 0;

}


