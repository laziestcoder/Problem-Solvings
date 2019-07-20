#include<cstdio>
#include<vector>

using namespace std;

int L[6000], H[6000], R[6000];
int skyline[500000];
vector<int> out;

int main() {
    int max_R = 0;
    for(int i = 0;; i++) {
        if(scanf("%d %d %d", &L[i], &H[i], &R[i]) != 3) break;
        for(int j = L[i]; j < R[i]; j++) {
            if(H[i] > skyline[j])
                skyline[j] = H[i];
        }
        if(R[i] > max_R)
            max_R = R[i];
    }
    int curr = 0;
    for(int i = 0; i < max_R + 1; i++) {
        if(skyline[i] != curr) {
            out.push_back(i);
            out.push_back(skyline[i]);
            curr = skyline[i];
        }
    }
    printf("%d", out[0]);
    for(int i = 1; i < out.size(); i++)
        printf(" %d", out[i]);
    printf("\n");
