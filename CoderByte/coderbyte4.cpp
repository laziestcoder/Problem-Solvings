#include <iostream>
#include <string>
using namespace std;
const int noOfChar = 256;
string mySubStr(string str, string pat)
{
    int len1 = str.length();
    int len2 = pat.length();

    int my_hash[noOfChar] = {0};
    int my_str[noOfChar] = {0};

    for (int i = 0; i < len2; i++)
        my_hash[pat[i]]++;

    int start = 0, start_index = -1, min_len = INT_MAX;


    int cnt = 0;
    for (int j = 0; j < len1 ; j++)
    {
        my_str[str[j]]++;

        if (my_hash[str[j]] != 0 &&
            my_str[str[j]] <= my_hash[str[j]] )
            cnt++;


        if (cnt == len2)
        {
            while ( my_str[str[start]] > my_hash[str[start]]
                || my_hash[str[start]] == 0)
            {

                if (my_str[str[start]] > my_hash[str[start]])
                    my_str[str[start]]--;
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    return str.substr(start_index, min_len);
}


string MinWindowSubstring(string strArr[]) {

  // code goes here
  strArr[0] = mySubStr(strArr[0], strArr[1]);
  return strArr[0];

}

int main() {

  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set
     it equal to the stdin to test your code with arrays. */

  string A[] = gets(stdin);
  cout << MinWindowSubstring(A);
  return 0;

}


