#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* replaceWord(const char* s, const char* oldW,
                const char* newW)
{
    char* result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);
 

    for (i = 0; s[i] != '\0'; i++) {
        if (strstr(&s[i], oldW) == &s[i]) {
            cnt++;
 
           
            i += oldWlen - 1;
        }
    }
 
    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1);
 
    i = 0;
    while (*s) {
     
        if (strstr(s, oldW) == s) {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else
            result[i++] = *s++;
    }
 
    result[i] = '\0';
    return result;
}
 

int main()
{
    char str[] = "";
    char c[] = "";
    char d[] = "";
 
    char* result = NULL;
 
printf("Enter the string:");
scanf("%s",str);
printf("\nEnter the part of the string to change:");
scanf("%s",c);
printf("\nEnter the string for to add:");
scanf("%s",d);

    printf("Old string: %s\n", str);
 
    result = replaceWord(str, c, d);
    printf("New String: %s\n", result);
 
    free(result);
    return 0;
}
