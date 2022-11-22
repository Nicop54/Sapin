#include <stdio.h>

int main() {
    int x=0,g=0,i=0,e=0;
    printf("Entrez une largeur :\n");
    scanf("%d",&x);
    for(e=0;i<1;e++)
    {
        for(i=x;i>=0;i--)
        {
            printf(" ");
        }
        for(g=1;g<=x;(g*2)+1)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

