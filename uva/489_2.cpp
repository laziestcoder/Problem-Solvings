#include <bits/stdc++.h>
using namespace std;

#define MAXN 105

int n;
char solution[MAXN], guess[MAXN];
int flag[MAXN];

void play() {
	memset(flag, 0, sizeof(flag));

	int i, j, k, wrong = 0;
	for (i=0; i<strlen(guess); i++){
		
		bool isWrong = true;
		
		for(j=0; j<strlen(solution); j++) {
			if(flag[j]==0 && solution[j] == guess[i]){
				flag[j] = 1;
				isWrong = false;
			}
		}

		if(isWrong){
			wrong++;
		}

		if(wrong >= 7 ){
			break;
		}
	}

	printf("Round %d\n", n);
	for(k=0; k < strlen(solution); k++){
		if(flag[k] == 0){
			if(wrong < 7 ){
				printf("You chickened out.\n");
				return;
			} else {
				printf("You lose.\n");
				return;
			}
		}
	}

	if(k== strlen(solution))
		printf("You win.\n");
}


int main () {

	while( scanf("%d",&n)==1 && n!=-1 ){
		memset(solution, '\0', sizeof(solution));
		memset(guess, '\0', sizeof(guess));
		scanf("%s%s", solution, guess);
		play();
	}

	return 0;
}
