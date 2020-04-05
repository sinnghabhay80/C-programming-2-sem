/* #Bonus2.  This is a well-known game with a number of variants. The following variant has an interesting winning strategy.
             Two players alternately take marbles from a pile. In each move, a player chooses how many marbles to take.
             The player must take at least one but at most half of the marbles. Then the other player takes a turn. The player who takes the last marble loses.
             Write a C program in which the computer plays against a human opponent. Generate a random integer between 10 and 100 to denote the initial size of the pile.
             Generate a random integer between 0 and 1 to decide whether the computer or the human takes the first turn. Generate a random integer between 0 and 1 to decide whether
             the computer plays smart or stupid. In stupid mode the computer simply takes a random legal value (between 1 and n/2, where n is the total number of marbles) from the
             pile whenever it has a turn. In smart mode the computer takes off enough marbles to make the size of the pile a power of two minus 1—that is, 3, 7, 15, 31, or 63.
             That is always a legal move, except when the size of the pile is currently one less than a power of two. In that case, the computer makes a random legal move.
             It should be noted that the computer cannot be beaten in smart mode when it has the first move,unless the pile size happens to be 15, 31, or 63.
             Of course a human player who has the first turn and knows the winning strategy can win against the computer.     */





#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void stupiduser( int p)
{   int n,i;
    A:
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
            if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);

            }
            else
            {
                    printf("\n Illegal Move...");
                    goto A;
            }
        for(i=1;p>=1;i++)
        {
            if(p==1)
                {
                    printf("\n Computer Lose!!!");
                    exit(0);
                }
            printf("\n Computers Turn...");
            n=(rand()%(p/2))+1;
            p=(p-n);
            printf("\n Remaining Marbles: %d.",p);

              B:
             if(p==1)
                {
                    printf("\n You Lose!!!");
                    exit(0);
                }
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
            if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);

            }
            else
            {
                    printf("\n Illegal Move...");
                    goto B;
            }
        }
}
void stupidcomp(int p)
{  int n,i;
     for(i=1;p>=1;i++)
        {
             if(p==1)
                {
                    printf("\n Computer Lose!!!");
                    exit(0);
                }
            printf("\n Computers Turn...");
            n=(rand()%(p/2))+1;
            p=(p-n);
            printf("\n Remaining Marbles: %d.",p);

              C:
            if(p==1)
                {
                    printf("\n You Lose!!!");
                    exit(0);
                }
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
            if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);

            }
            else
            {
                    printf("\n Illegal Move...");
                    goto C;
            }
        }
}
void smartuser(int p)
{ int n,i;
    D:
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
             if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);

            }
            else
            {
                    printf("\n Illegal Move...");
                    goto D;
            }
            for(i=1;p>=1;i++)
            {
                 if(p==1)
                {
                    printf("\n Computer Lose!!!");
                    exit(0);
                }
                 if(p==2)
                           {
                               printf("\n Computers Turn...");
                               p=1;
                               printf("\n Remaining Marbles: %d.",p);
                               if(p==1)
                               {
                                   printf("\n You Lose!!");
                                   exit(0);
                               }
                                     M:
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
             if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);

            }
            else
            {
                    printf("\n Illegal Move...");
                    goto M;
            }

                           }

                if(p==3 ||p==7 ||p==15 ||p==31 ||p==63)
                {
                     printf("\n Computers Turn...");
                  E: n=(rand()%(p/2))+1;
                     if(n>=1 && n<=p/2)
                     {
                      if(n==3 ||n==7 ||n==15 ||n==31 ||n==63)
                            goto E;


                     p=(p-n);
                     printf("\n Remaining Marbles: %d.",p);
                     }
                     else
                        goto E;
                      F:
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
             if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);

            }
            else
            {
                    printf("\n Illegal Move...");
                    goto F;
            }
                }


              else
              {
                  if(p!=3 ||p!=7 ||p!=15 ||p!=31 ||p!=63)
              {

                   printf("\n Computers Turn...");
               G:
                    n=(rand()%(p/2))+1;
                   if(n>=1 && n<=p/2)
                   {
                   p=(p-n);

                         if(p==3 ||p==7 ||p==15 ||p==31 ||p==63)
                           {
                               printf("\n Remaining Marbles: %d.",p);
                           }

                         else
                         {
                             p+=n;
                             goto G;
                         }
                     }
                   else
                    goto G;

                      H:
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
             if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);

            }
            else
            {
                    printf("\n Illegal Move...");
                    goto H;
            }

             } }


            }
}
void smartcomp(int p)
{   int n,i;
       for(i=1;p>=1;i++)
            {
                 if(p==1)
                {
                    printf("\n Computer Lose!!!");
                    exit(0);
                }
                 if(p==2)
                           {
                               printf("\n Computers Turn...");
                               p=1;
                               printf("\n Remaining Marbles: %d.",p);
                               if(p==1)
                               {
                                   printf("\n You Lose!!");
                                   exit(0);
                               }
                                     M:
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
             if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);
                if(p==1)
                {
                    printf("\n You Lose!!!");
                    exit(0);
                }
            }
            else
            {
                    printf("\n Illegal Move...");
                    goto M;
            }

                           }

                if(p==3 ||p==7 ||p==15 ||p==31 ||p==63)
                {
                     printf("\n Computers Turn...");
                  E: n=(rand()%(p/2))+1;
                     if(n>=1 && n<=p/2)
                     {
                      if(n==3 ||n==7 ||n==15 ||n==31 ||n==63)
                            goto E;


                     p=(p-n);
                     printf("\n Remaining Marbles: %d.",p);
                     }
                     else
                        goto E;
                      F:
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
             if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);
                if(p==1)
                {
                    printf("\n You Lose!!!");
                    exit(0);
                }
            }
            else
            {
                    printf("\n Illegal Move...");
                    goto F;
            }
                }


              else
              {
                  if(p!=3 ||p!=7 ||p!=15 ||p!=31 ||p!=63)
              {

                   printf("\n Computers Turn...");
               G:
                    n=(rand()%(p/2))+1;
                   if(n>=1 && n<=p/2)
                   {
                   p=(p-n);

                         if(p==3 ||p==7 ||p==15 ||p==31 ||p==63)
                           {
                               printf("\n Remaining Marbles: %d.",p);
                           }

                         else
                         {
                             p+=n;
                             goto G;
                         }
                     }
                   else
                    goto G;

                      H:
            printf("\n Take out your chance of Marbles:");
            scanf("%d",&n);
             if(n>=1 && n<=p/2)
            {
                printf("\n Legal Move...");
                p=(p-n);
                printf("\n Remaining Marbles: %d",p);

            }
            else
            {
                    printf("\n Illegal Move...");
                    goto H;
            }

             } }


            }
}
void main()
{
    int p,c,m,n,i,j,k;
    srand(time(NULL));
    p=(rand()%(91))+10;
    printf("\n The Allocated Pile size is %d.",p);
    srand(time(NULL));
    c=(rand()%(2));
    if(c==1) printf("\n You Play First!!!");
    else printf("\n Computer Plays first!!!");
    srand(time(NULL));
    m=(rand()%(2));
    if(m==1)
    {
        printf("\n Computer plays Smart!!");
        if(c==1)
        {
            smartuser(p);
        }
        else
        {
            smartcomp(p);

        }
    }
    else
    {
            printf("\n Computer plays Stupid!!");
              if(c==1)
        {
             stupiduser(p);
        }
    else
    {
        stupidcomp(p);
    }
   }
}
