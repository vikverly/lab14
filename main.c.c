/*
Студент: Черных Виктория Александровна
Группа: ПИ-1-1
Лабораторная работа 14
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char text[32];
    if (fgets(text, sizeof text, stdin) == NULL) {
        puts("Input error"); 
        return 1;
    }
    
    size_t pos = strcspn(text, "\n");
    if (text[pos] == '\n') text[pos] = '\0';
    
    if (strlen(text) > 30) {
        puts("Too long"); 
        return 1;
    }

    int digits_count = 0;
    int spaces_count = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= '0' && text[i] <= '9') {
            digits_count++;
        } else if (text[i] == ' ') {
            spaces_count++;
        }
    }

    printf("Цифр %d; пробелов %d\n", digits_count, spaces_count);
    return 0;
}