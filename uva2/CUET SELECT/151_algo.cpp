#include<cstdio>
#include<vector>

using namespace std;

int N;

bool check(int m) {
    vector<int> list;
    for(int i = 1; i <= N; i++)
        list.push_back(i);

    int c = 0;
    while(list[c] != 13) {
        list.erase(list.begin() + c);
        c += m - 1;
        if(c >= list.size()) c = c % list.size();
    }
    return list.size() == 1;
}

int main() {
    for(;;) {
        scanf("%d", &N);
        if(N == 0) break;
        int m = 1;
        while(!check(m)) m++;
        printf("%d\n", m);
    }
}
