#include<cstdio>
#include<cstring>

char input[140];

int main() {
    while(gets(input)) {
        int count = 0;
        for(int i = 0; i < strlen(input); i++) {
            if(input[i] >= '0' && input[i] <= '9') {
                count += input[i] - '0';
            } else if(input[i] == 'b') {
                for(int j = 0; j < count; j++)
                    printf(" ");
                count = 0;
            } else if(input[i] == '!') {
                printf("\n");
            } else {
                for(int j = 0; j < count; j++)
                    printf("%c", input[i]);
                count = 0;
            }
        }
        printf("\n");
    }
}
