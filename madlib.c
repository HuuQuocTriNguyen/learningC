#include <stdio.h>
#include <string.h>

int main() {
    char adj[50] = "";
    char noun[50] = "";
    char adjTwo[50] = "";
    char verb[50] = "";
    char adjThree[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adj, sizeof(adj), stdin);
    adj[strlen(adj) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjTwo, sizeof(adjTwo), stdin);
    adjTwo[strlen(adjTwo) - 1] = '\0';

    printf("Enter an verb (ending with -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjThree, sizeof(adjThree), stdin);
    adjThree[strlen(adjThree) - 1] = '\0';

    printf("\nToday I went to a %s zoo.\n", adj);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjTwo, verb);
    printf("I was %s!\n", adjThree);

    return 0;
}