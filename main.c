#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int choix, sucre, lait;
    float prix;
    char textB[15], textS[15], textL[15];
    printf("Bienvenu!\n");
    printf("choissez un boisson\n" );
    printf("**********************************************\n");
    printf("pour choisir un cafe saisir 1\n");
    printf("pour coisir un The saisir 2\n");
    printf("pou choisir un chocolat 3\n");
    printf("pour choisir un soda 4\n");
    printf("**********************************************\n");
    scanf("%d",&choix);

    switch (choix)
    {
        case 1 : prix = 2;
            strcpy(textB,"cafe");
            printf("saisir la dose de sucre \n");
            printf("0 non sucree , 1 sucree , 2 tres sucree \n");
            scanf("%d", &sucre);
                   if(sucre==0)
                    {
                     prix = prix + 0;
                     strcpy(textS,"non sucree");
                    }
                   else if (sucre==1)
                   {
                     prix = prix + 0.25;
                     strcpy(textS,"sucree");
                    }
                   else (sucre==2);
                    {
                     prix = prix + 0.50;
                     strcpy(textS,"tres sucree");
                   }
            printf("vous volez ajoutez le lait ?\n");
            printf("0 sans lait , 1 avec lait\n");
            scanf("%d", &lait);
                   if  (lait==0)
                   {
                     prix = prix + 0;
                     strcpy(textL,"sans lait");
                   }
                   else (lait==1);
                   {
                     prix = prix + 1;
                     strcpy(textL,"avec lait");
                   }
                   printf("vous devez payer %f DH\n", prix);
                   printf("votre %s et %set %s est pret\n", textB,textS,textL);
            break;

        case 2 : prix = 2;
                strcpy(textB,"The");
                 printf("saisir la dose de sucre \n");
            printf("0 non sucree , 1 sucree , 2 tres sucree \n");
            scanf("%d", &sucre);
                   if(sucre==0)
                    {
                     prix = prix + 0;
                     strcpy(textS,"non sucree");
                    }
                   else if (sucre==1)
                   {
                     prix = prix + 0.25;
                     strcpy(textS,"sucree");
                    }
                   else (sucre==2);
                    {
                     prix = prix + 0.50;
                     strcpy(textS,"tres sucree");
                   }
                   printf("vous devez payer %f DH\n", prix);
                   printf("votre %s et %s est pret\n", textB,textS);

        break;

        case 3 : prix = 2.5;
            strcpy(textB,"chocolat");
            printf("vous volez ajoutez le lait ?\n");
            printf("0 sans lait , 1 avec lait\n");
            scanf("%d", &lait);
                   if  (lait==0)
                   {
                     prix = prix + 0;
                     strcpy(textL,"sans lait");
                   }
                   else (lait==1);
                   {
                     prix = prix + 1;
                     strcpy(textL,"avec lait");
                   }
                   printf("vous devez payer %f DH\n", prix);
                   printf("votre %s %s est pret\n", textB,textL);

        break;

        case 4 : prix = 3;
                strcpy(textB,"soda");
                printf("vous devez payer %f DH\n", prix);
                printf("votre %s  est pret\n", textB);

        break;

        default : printf("ereur");

    }
    return 0;
}
