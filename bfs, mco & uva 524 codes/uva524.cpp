#include <cstdio>

using namespace std;

int num[100] = {4, 5, 6};
int out[100];
int used[100];
int n = 3;

void permut (int k) {
	if(k >= n) {
        /*for(int i = 1; i < n; i++)
            if (out[i-1] > out[i])
                return;*/
		for(int i = 0; i < n; i++)
			printf("%d ", out[i]);
		printf("\n");
		return;
	}
	for(int i = 0; i < n; i++)
		if(!used[i] && out[k-1] <= num[i]) {
			used[i] = 1;
			out[k] = num[i];
			permut(k+1);
			used[i] = 0;
		}
}

int main() {
    permut(0);
    return 0;
}
