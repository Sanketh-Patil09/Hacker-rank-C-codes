//You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen.
#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    char s[100], sen[100]; 
    
    scanf(" %c", &ch); 
    scanf("%s", s); 
    scanf(" %[^\n]", sen); 
    
    printf("%c\n%s\n%s\n", ch, s, sen);  
    return 0;
}
