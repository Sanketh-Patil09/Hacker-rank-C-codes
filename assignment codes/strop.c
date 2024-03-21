#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char str1[100], str2[100], temp[200];
    file=fopen("string_input.txt","w");
    fclose(file);
    file = fopen("string_input.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    
    fscanf(file, "%s", str1);
    fscanf(file, "%s", str2);
    fclose(file);
    
    strcpy(temp, str1);
    strcat(temp, str2);
    printf("Concatenated string: %s\n", temp);
    
    strcpy(temp, str1);
    printf("Copied string: %s\n", temp);
    
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
