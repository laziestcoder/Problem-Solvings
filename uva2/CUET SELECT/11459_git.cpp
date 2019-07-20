#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  size_t cases;
  cin >> cases;
  size_t snakes[100];
  size_t players[100000];
  while (cases--) {
    size_t p, s, r;
    cin >> p >> s >> r;
    memset(snakes, 0, sizeof(size_t) * 100);
    int i(0);
    for (; i < p; ++i)
      players[i] = 1;

    size_t in, out, roll;
    while (s--) {
      cin >> in >> out;
      snakes[in] = out;
    }
    bool game_over = false;
    i = 0;
    while (r--) {
      cin >> roll;
      if (!game_over) {
        players[i] += roll;
        if (players[i] >= 100) {
          players[i] = 100;
          game_over = true;
        } else if (snakes[players[i]]) {
          players[i] = snakes[players[i]];
          if (players[i] >= 100) {
            players[i] = 100;
            game_over = true;
          }
        }
        i = (i + 1) % p;
      }
    }

    for (i = 0; i < p; ++i)
      cout << "Position of player " << i+1 << " is " << players[i] << "." << endl;
  }
  return 0;
}
