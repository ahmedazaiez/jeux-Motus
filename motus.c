#include <stdio.h>
#include <conio.h>
#include <string.h>
/*char function score(int t )
{
    switch (t):
    case 1:
        return "excellent";
    case 2:
        return "bien";
    case 3:
        return "moyen";
    case 4:
        return "mauvais";
}*/
void main()
{ int n,t,i,j,longueur,l1=0,l2=0,l3=0;
  char M1[30][5],M2[30][10],M3[30][15];
  char joueur[5][15],mot[15];
    do
    {
        printf("\n donner le nombre de joueurs: max 4 joueurs ");
        scanf("%d",&n);}
    while (n<1 && n>5 );

    do
    {
        printf("\n donner le nombre de tentatives : max 4 tentatives  ");
        scanf("%d",&t);}
    while (t<1 && t>5 );
    for (i=0;i<n;i++)
        {
            printf("\n donner le nom de joueur n %d :",i);
            scanf("%s",&joueur[i]);
        }

     int Nv ;
        start :

    // choix de niveau

    printf ("\n Espace mot a devenir \n choix de niveau \n 1 simple :max 5 caracteres \n 2 moyenne :max 10 caracteres \n 3 avance : max 15 caractere ");
    while (Nv!=1 && Nv!=2 && Nv!=3)
          {
           scanf ("%d",&Nv);
          }
    switch (Nv)
          {
          case 1 :{
                  utilise1 :
                  do
          {printf ("\n proposer une mot : max 5 caracteres ");
           scanf ("%s",&mot);
           longueur = strlen (mot);
          } while(longueur>5 );
         for (i=0;i<l1;i++)
            {
            for (j=0;j<5;j++)
             {if (mot[j]!=M1[i][j]) break;
             else if (j==4)
             {printf ("\n mot a ete utilise \n proposer un nouveau mot ");
                 goto utilise1;} ;
            }
            }


       printf ("\nMot va etre ajoute\n ");
        for (j=0;j<longueur ;j++)
            M1[l1][j]=mot[j];
            l1++;

          } break;


           case 2 :{
                  utilise2 :printf ("\n mot a ete utilise \n proposer un nouveau mot ");
                  do
          {printf ("\n proposer un mot : max 10 caracteres \n");
           scanf ("%s",&mot);
           longueur = strlen (mot);
          }
         while(longueur>10 );
         for (i=0;i<l2;i++)
            {
            for (j=0;j<9;j++)
             {if (mot[j]!=M2[i][j]) break;
             else if (j==9) goto utilise2 ;
            }
            }


       printf ("\n Mot va etre ajoute \n ");
        for (j=0;j<longueur ;j++)
            M2[l2][j]=mot[j];
            l2++;

          }break;



           case 3:{
                  utilise3 :printf ("\n mot a ete utilise \n proposer un nouveau mot ");
                  do
          {printf ("\n proposer un mot : max 15 caracteres \n ");
           scanf ("%s",&mot);
           longueur = strlen (mot);
          }
         while(longueur>15 );
         for (i=0;i<l1;i++)
            {
            for (j=0;j<15;j++)
             {if (mot[j]!=M3[i][j]) break;
             else if (j==14) goto utilise3 ;
            }
            }



       printf ("\n Mot va etre ajoute \n");
        for (j=0;j<longueur ;j++)
            M3[l3][j]=mot[j];
            l3++;

          }
          break;
          }
          system ("cls");

    printf("\n le regle de jeux est comme la suite : \n un joueur va saisie une mot et les autres joueur a %d essai pour le determiner\n",t);

    switch (Nv)
               {
               case 1 :{
                char /*mot[5],*/pmot[5];
                for(int i=0;i<5;i++)
                mot[i]= M1[l1][i];
               char cmot[5]="*****";
           int k=1;
           while (n>0)
           {
               A:
               printf("\n c est le tours de joueur n° %d \n",k);
               printf("\n donner ton mot \n");
               scanf("%s",&pmot);
               for (i=0;i<5;i++)
                if (pmot[i]==mot[i]&& cmot[i]=='*')
                cmot[i]=mot[i];
               t--;
               if (cmot==mot)
               {
                   printf("\n felcitation \n");
                   break;
               }
               else if (t>0)
               {
                   printf("\n ton mot %s \n",cmot);
                   printf("\n try again\n");
                   goto A;
                   }
                   else
                   {
                       n--;
                       k++;
                       printf("\n domage \n");
                   }
           }
           }
               case 2 : {
                char/* mot[10],*/pmot[10];
                for(int i=0;i<5;i++)
                mot[i]= M1[l1][i];
               char cmot[15]="*****";
           int k=1;
           while (n>0)
           {
               b:
               printf("\n c est le tours de joueur n° %d \n",&k);
               printf("\n donner ton mot \n");
               scanf("%s",&pmot);
               for (i=0;i<5;i++)
                if (pmot[i]==mot[i]&& cmot[i]=="*")
                cmot[i]=mot[i];
               t--;
               if (cmot==mot)
               {
                   printf("\n felcitation \n");
                   break;
               }
               else if (t>0)
               {
                   printf("\n ton mot\n",cmot);
                   printf("\n try again\n");
                   goto b;
                   }
                   else
                   {
                       n--;
                       k++;
                       printf("\n domage \n");
                   }
           }
           }
                case 3 :{

                char /*mot[15],*/pmot[15];
                for(int i=0;i<5;i++)
                mot[i]= M1[l3][i];
               char cmot[15]="***************";
           int k=1;
           while (n>0)
           {
               c:
               printf("\n c est le tours de joueur n° %d \n",&k);
               printf("\n donner ton mot \n");
               scanf("%s",&pmot);
               for (i=0;i<15;i++)
                if (pmot[i]==mot[i]&& cmot[i]=="*")
                cmot[i]=mot[i];
               t--;
               if (cmot==mot)
               {
                   printf("\n felcitation \n");
                   break;
               }
               else if (t>0)
               {
                   printf("\n ton mot\n",cmot);
                   printf("\n try again\n");
                   goto c;
                   }
                   else
                   {
                       n--;
                       k++;
                       printf("\n domage \n");
                   }

           }}

               }
    char r="";
    do {
        printf("si vous vouler de joueur une autre fois tapper 1 sinon tappez un autre chose");
        scanf("%c",&r);
    } while (r=="");
    if (r == "1")
        goto start ;

 //  printf("ton score est ",score(t))
getch();
}
