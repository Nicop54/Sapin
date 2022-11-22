#include <stdio.h>
#include <windows.h>

void Color(int couleurDuTexte,int couleurDeFond) 
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

int main(int argc, char *argv[]) {
    int l=0,g=0,i=0,e=0;
    printf("Entrez une hauteur comprise entre 5 et 20 :\n");
    scanf("%d",&l);
    if(l>=5 && l<=20)
    {
        for(i=0;i<l;i++)
        {
            for(e=l-i;e>0;e--)
            {
                printf(" ");
            }
            for(g=(i*2)+1;g>0;g--)
            {
                Color(2,5);
                printf("*");
            }

            printf("\n");
        }
    }
    else
    {
        printf("Erreur, le nombre entré n'est pas compris entre 5 et 20 !");
    }
    return 0;
}
