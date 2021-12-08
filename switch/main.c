#include <stdio.h>

int main() {
    int id;
    printf("ID:");
    scanf("%d", &id);
    switch(id){
        case 1:
            printf("jodie is number one!");
            break;
        case 2:
            printf("julie");
            break;
        case 3:
            printf("lily");
            break;
        default:
            printf("Can't find the id");
    }
    return 0;
}
