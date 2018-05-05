#include<stdio.h>
char c[1000];
int main ()
{
    int i;
    char s[100];
    gets(s);
    for(i=0;i<strlen(s);i++){
        s[i]=s[i];
    }
    if(strcmp(s,strrev(s))){
        printf("Not Palindrome\n");
    }
    else{
        printf("Palindrome\n");
    }
    return 0;
}
