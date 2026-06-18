#include <stdio.h>
#include <string.h>

struct employ {
    char name[50];
    int salary;
    char desig[50];
    int empid;
};

void remove_newline(char *str) {
    // Find newline and replace with '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
}

int main() {
    struct employ n[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name: ");
        fgets(n[i].name, sizeof(n[i].name), stdin);
        remove_newline(n[i].name);

        printf("Enter salary: ");
        scanf("%d", &n[i].salary);
        getchar(); // consume leftover newline

        printf("Enter designation: ");
        fgets(n[i].desig, sizeof(n[i].desig), stdin);
        remove_newline(n[i].desig);

        printf("Enter employee ID: ");
        scanf("%d", &n[i].empid);
        getchar(); // consume leftover newline
    }

    printf("\nEmployees with salary >= 75000 and designation 'Computer science':\n");
    for (int i = 0; i < 3; i++) {
        if ((n[i].salary >= 75000) && (strcmp(n[i].desig, "Computer science") == 0)) {
            printf("%s %d %s %d\n", n[i].name, n[i].salary, n[i].desig, n[i].empid);
        }
    }
    return 0;
} 