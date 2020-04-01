
/*#20.	Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/
#include<stdio.h>

int main()

{

 float p,c,m,b,comp,per;
char grade;

 printf("Enter marks of different subjects(out of 100):\n Physics:");

 scanf("%f",&p);

 printf("\n Chemistry:");

 scanf("%f",&c);

 printf("\n Maths:");

 scanf("%f",&m);

 printf("\n Biology:");

 scanf("%f",&b);

 printf("\n Computer:");

fflush(stdin);

 scanf("%f",&comp);

 per=(p+c+m+b+comp)/5;

 if(per>=90)

   {

     grade='A';

     printf("\n Grade: %c",grade);

  }

else if(per>=80 && per<90)

   {

   grade='B';

     printf("\n Grade: %c",grade);

   }

else if(per>=70 && per<80)

  {

    grade='C';

     printf("\n Grade: %c",grade);

    }

else if(per>=60 && per<70)

 {

     grade='D';

     printf("\n Grade: %c",grade);

 }

 else if(per>=40 && per<60)

{

grade='E';

    printf("\n Grade: %c",grade);

     }

 else

    {

     grade='F';

     printf("\n Grade: %c",grade);

     }


 getchar();

 return(0);

}





