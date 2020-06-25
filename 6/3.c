#include <stdio.h>
#include <string.h>
int main() {
    int i = 0;
    int counter = 0;
	char origin[4];
    char change[3];
    scanf("%s", origin);
    for (i = 0; origin[i] != '\0'; i++) {
        if(origin[i] == 'r') {
            counter += 4;
        } else if(origin[i] == 'w') {
            counter += 2;
        } else {
            counter += 1;
        }
    }
    while (scanf("%s", change) != EOF) {
        if ((change[0] == '+' && change[1] == 'r')) {
            counter |= 4;
        } else if((change[0] == '+' && change[1] == 'w')) {
            counter |= 2;
        } else if((change[0] == '+' && change[1] == 'x')) {
            counter |= 1;
        } else if((change[0] == '-' && change[1] == 'r')) {
            counter &= ~4;
        } else if((change[0] == '-' && change[1] == 'w')) {
            counter &= ~2;
        } else if((change[0] == '-' && change[1] == 'x')) {
            counter &= ~1;
        }
    }
    
    printf("%d", counter);
    return 0;
}