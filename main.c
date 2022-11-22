#include <stdio.h>

int main() {
    int l=0,g=0,i=0,e=0;
    printf("Entrez une largeur :\n");
    scanf("%d",&l);
    for(l;l!=0;l--)
    {
        printf(" ");
        for(i=0;i>=l;(i*2)+1)
        {
            printf("*");
        }
    }
    printf("\n");
    return 0;
}
