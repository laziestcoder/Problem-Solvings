#include <stdio.h>
#include <string.h>

#define max 100

int main(void)
{
	int choice, tmp, flag;
	char contacts[max][2][80], temp[80];
	int i = 0, j = 0, count = 0;

	printf("1. Add Contact.\n");
	printf("2. Edit Contact.\n");
	printf("3. View All Contacts.\n");
	printf("4. Delete Contact.\n");
	printf("5. Quit\n");

	printf("Enter Your Choice : ");
	scanf("%d", &choice);

	do {
		switch (choice) {
			case 1:
				printf("\nContact name : ");
				scanf("%s" ,&temp);


				flag = 0;
				i = 0;
				while(count != 0 && i < count) {
					if(!strcmp(contacts[i][0], temp )) {
						printf("\nContact Already Exists");
						flag = 1;
						break;
					}
					i++;
				}
				if (flag)
					break;

				strcpy(contacts[count][0] ,temp);
				printf("Phone Number : ");
				scanf("%s", &contacts[count][1]);


				break;

			case 2:
				printf("\nContact Name : ");
				scanf("%s", &temp);

				flag = 0;
				i = 0;
				while(i <= count) {
					if(!strcmp(contacts[i][0], temp )) {
						flag = 1;
						break;
					}
					i++;
				}

				if (!flag) {
					printf("No Contact Found");
					break;
				}

				i = 0;
				while (strcmp(temp, contacts[i][0]), "") {
					if (!strcmp(temp, contacts[i][0]))  {
						printf("New Name : ");
						scanf("%s", &contacts[i][0]);
						printf("New Number : ");
						scanf("%s", &contacts[i][1]);
						break;
					}
					i++;
				}

				break;

			case 3:
				for (i = 0; i <= count; i++) {
					printf("\nName : %s\n", contacts[i][0]);
					printf("Phone Number : %s\n", contacts[i][1]);
				}

				break;

			case 4:
				printf("\nWhich Contact You Want to Delete : ");
				scanf("%s", &temp);

				flag = 0;
				i = 0;
				while(i <= count) {
					if(!strcmp(contacts[i][0], temp )) {
						flag = 1;
						break;
					}
					i++;
				}

				if (!flag) {
					printf("No Contact Found");
					break;
				}


				for(; i <= count; i++) {
					strcpy(contacts[i][0], contacts[i+1][0]); strcpy(contacts[i][1], contacts[i+1][1]);
				}

				break;
		}

		if(choice == 4 && flag == 1)
			count --;


		printf("\n\n1. Add Contact.\n");
		printf("2. Edit Contact.\n");
		printf("3. View All Contacts.\n");
		printf("4. Delete Contact.\n");
		printf("5. Quit.\n\n");

		printf("Enter Your Choice : ");
		scanf("%d", &choice);

		if (choice == 1 && flag == 0)
			count++;

	} while ( choice != 5);
	 printf("\n\n\n Thank you! :) \n\n");
	return 0;
}
