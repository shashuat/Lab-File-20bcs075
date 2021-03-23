// Program 54: Program to delete a character in a string

int main() 
{
    char* str = malloc(strlen("abcdef")+1);
    
    strcpy(str, "abcdef");
    removeChar(str, 'b');
    printf("%s", str);
    free(str);

    return 0;
}

void removeChar(char *str, char garbage) {

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}