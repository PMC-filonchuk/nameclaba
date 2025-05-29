#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Проверяем, было ли передано имя
    if (argc < 2 || strlen(argv[1]) == 0) {
        printf("Неизвестный пользователь\n");
        return 0;
    }

    // Сравниваем имя с "Admin"
    if (strcmp(argv[1], "Admin") == 0) {
        printf("Привет, администратор!\n");
    } else {
        printf("Привет, %s!\n", argv[1]);
    }

    return 0;
}
