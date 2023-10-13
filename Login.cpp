#include <stdio.h>
#include <string.h>

#define NUMBER_OF_USERS 50
#define MAX_NUMBER_OF_CHARS_IN_USERNAME 30
#define MAX_NUMBER_OF_CHARS_IN_PASSWORD 20

typedef struct {
	char username[MAX_NUMBER_OF_CHARS_IN_USERNAME];
	char password[MAX_NUMBER_OF_CHARS_IN_PASSWORD];
} User;

User users[NUMBER_OF_USERS] = {
    {"Youssef", "12345678"},
    {"Ahemd", "87654321"},
    {"Jon", "25sd516"},
    {"Mark", "54dfh5f"},
    {"Samir", "65rdf6"},
};

int main() {

    char username[MAX_NUMBER_OF_CHARS_IN_USERNAME];
    char password[MAX_NUMBER_OF_CHARS_IN_PASSWORD];
    int isAuthorizedUser = 0;

    printf("Enter username => ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Enter password => ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    for (int i = 0; i < NUMBER_OF_USERS; i++) {
	    if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
		    isAuthorizedUser = 1;
		    break;
    	}
    }

    if (isAuthorizedUser) {
    	printf("Authorized user.\n");
    } 
	else {
    	printf("Unauthorized user. Please try again.\n");
    }

}
