#include<stdio.h>

void Namaste();
void Bonjour();
void NotFound();

int main()
{
    printf("Enter i Indian & f for French\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='i') {
        Namaste();
    }
    else if (ch=='f') {
        Bonjour();
    }
    else {
        NotFound();
    }
    return 0;
}

void Namaste() {
    printf("Namaste\n");
}

void Bonjour() {
    printf("Bonjour\n");
}

void NotFound() {
    printf("Your Country of Origin Invalid\n");
}