#include <stdio.h>
int main()
{
    // s1 is the source( input) string and s2 is the destination string
    char s1[100], s2[100], i;

    // Print the string s1
    scanf("%s", s1);
    printf("string s1 : %s\n", s1);

    // Execute loop till null found
    for (i = 0; s1[i] != '\0'; ++i) {
        // copying the characters by
        // character to str2 from str1
        s2[i] = s1[i];}
        printf("the length of the string is %d", i);
    // printing the destination string
    printf("String s2 : %s", s2);
    return 0;
}
