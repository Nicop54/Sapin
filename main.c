#include <stdio.h>

int main() {
    int l=0,i=0,t=0,e=0;
    printf("Entrez une largeur :\n");
    scanf("%d",&l);
    for(i=1;i<=l ;i++)
    {
        for(t=2*l-1;t>=1;t--)
        {
            printf(" ");
            for(i;i=2*l-1;i++){
                printf("*");
                printf("\n");

            }
        }

    }

    return 0;
}
