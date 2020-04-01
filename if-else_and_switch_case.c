/*#1.	Given an integer, n, perform the following conditional actions:

If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird. */

#include<stdio.h>
int main()
{
 int n;

 printf("ENTER A NUMBER  :");
 scanf("%d",&n);
 if(n%2!=0)
   {
    printf("\nWIERD");
   }
 else
   {
     if( n>=2 && n<=5)
       {
        printf("\nNOT WIERD");
       }
     else if( n>=6 && n<=20)
       {
        printf("\nWIERD");
       }
     else
       {
        printf("\nNOT WIERD");
       }
   }
 getchar();
 return(0);
}


/*#2.	Write a C program to find maximum between two numbers.*/

#include<stdio.h>

int main()
{
 int a,b;

 printf("\nEnter 2 different number  :");
 scanf("%d %d",&a,&b);
 if(a<b)
  {
   printf("\nGreater number is :%d",b);
  }
 else
  {
   printf("\nGreater number is :%d",a);
  }
 getchar();
return(0);
}


/*#3.	Write a C program to find maximum between three numbers.*/

#include<stdio.h>

int main()
{
 int a,b;

 printf("\nEnter 2 different number  :");
 scanf("%d %d",&a,&b);
 if(a>b)
  {
   printf("\nEnter a number  :");
   scanf("%d",&b);
   if(a>b)
     {
      printf("\nGreatest number is :%d",a);
     }
   else
     {
      printf("\nGreatest number is :%d",b);
     }
  }
 else
  {
   printf("\nEnter a number  :");
   scanf("%d",&a);
   if(a>b)
     {
      printf("\nGreatest number is :%d",a);
     }
   else
     {
      printf("\nGreatest number is :%d",b);
     }
  }
 getchar();
return(0);
}


/*#4.	Write a C program to check whether a number is negative, positive or zero.*/

#include<stdio.h>

int main()
{
 int a;
 
 printf("\nEnter number  :");
 scanf("%d",&a);
 if(a>0)
  {
    printf("\nEntered number is positive");
  }
 else if(a<0)
  {
    printf("\nEntered number is negitive");
  }
 else
  {
    printf("\nEntered number is zero");
  }
 getchar();
 return(0);
}


/*#5.	Write a C program to check whether a number is divisible by 5 and 11 or not.*/

#include<stdio.h>

int main()
{
 int a;
 
 printf("\nEnter number  :");
 scanf("%d",&a);
 if(a%5==0 && a%11==0)
  {
   printf("\nEntered number is valid");
  }
 else
  {
    printf("\nEntered number is not valid");
  }
 getchar();
 return(0);
}

/*#6.	Write a C program to check whether a number is even or odd*/

#include<stdio.h>

void main()
{
 int a;

 printf("\nEnter number  :");
 scanf("%d",&a);
 if(a%2==0)
  {
   printf("\nEntered number even");
  }
 else
  {
    printf("\nEntered number odd");
  }
 getchar();
}

/*#7.	Write a C program to check whether a year is leap year or not*/.

#include<stdio.h>

void main()
{
 int a;

 printf("\nEnter a year  :");
 scanf("%d",&a);
 if(a%4==0)
  {
   printf("\nEntered year is a leap year");
  }
 else
  {
    printf("\nEntered year is not a leap year");
  }
 getchar();
}

/*#8.	Write a C program to check whether a character is alphabet or not.*/

#include<stdio.h>

void main()
{
 char a;

 printf("\nEnter an character :");
 scanf("%c",&a);
 if((a>=65 && a<=90) || (a>=97 && a<=122) )
  {
   printf("\nEntered character is an alphabet ");
  }
 else
  {
    printf("\nEntered character is not an alphabet");
  }
 getchar();
}

/*#9.	Write a C program to input any alphabet and check whether it is vowel or consonant.*/

#include<stdio.h>

void main()
{
 char a;
 
 printf("\nEnter an character :");
 scanf("%c",&a);
 if((a>=65 && a<=90) || (a>=97 && a<=122))
  {
   if( a==97 || a==65 ||
       a==101 || a==69||
       a==105 || a==73 ||
       a==111 || a==79 ||
       a==117 || a==85)
     {
      printf("\nEntered character is a vowel");
     }

   else
     {
      printf("\nEntered character is an consonant");
     }
  }
 else
  {
   printf("\nEntered character is not an alphabet even");
  }
 getchar();
}

/*#10.	Write a C program to input any character and check whether it is alphabet, digit or special character.*/

#include<stdio.h>

void main()
{
 char a;

 printf("\nEnter an character :");
 scanf("%c",&a);
 if((a>=65 && a<=90) || (a>=97 && a<=122))
  {
   printf("\nEntered character is an alphabet ");
  }
 else if(a>=48 && a<=57)
  {
   printf("\nEntered character is a digit");
  }
 else
  {
   printf("\nEntered character is a special character ");
  }
getchar();
}


/*#11.	Write a C program to check whether a character is uppercase or lowercase alphabet.*/

#include<stdio.h>

void main()
{

 char a;
 printf("\nEnter an character :");
 scanf("%c",&a);
 if((a>=65 && a<=90) || (a>=97 && a<=122))
  {
   if(a>=97 && a<=122)
     {
      printf("\nEntered character is in lower case");
     }
   else
     {
      printf("\nEntered character is in lower case");
     }
  }
 else
  {
   printf("\nEntered character is not an alphabet.");
  }
 getchar();
}

/*#12.	Write a C program to input week number and print week day.*/

#include<stdio.h>

void main()
{
 char a;

 printf("\nEnter an character :");
 scanf("%c",&a);
 switch(a)
  {
   case '1' : printf("\nSunday");
	      break;
   case '2' : printf("\nMonday");
	      break;
   case '3' : printf("\nTuesday");
	      break;
   case '4' : printf("\nWednesday");
	      break;
   case '5' : printf("\nThursday");
	      break;
   case '6' : printf("\nFriday");
	      break;
   case '7' : printf("\nSaturday");
	      break;
   default  : break;
  }
 getchar();
}

//#13.	Write a C program to input month number and print number of days in that month.


#include<stdio.h>

void main()
{
 char a;
 
 printf("\nEnter an character :");
 scanf("%c",&a);
 switch(a)
  {
   case '1' : printf("\nJanuary");
	      break;
   case '2' : printf("\nFebruary");
	      break;
   case '3' : printf("\nMarch");
	      break;
   case '4' : printf("\nApril");
	      break;
   case '5' : printf("\nMay");
	      break;
   case '6' : printf("\nJune");
	      break;
   case '7' : printf("\nJuly");
	      break;
   case '8' : printf("\nAugust");
	      break;
   case '9' : printf("\nSeptember");
	      break;
   case '10' : printf("\nOctober");
	      break;
   case '11' : printf("\nNovember");
	      break;
   case '12' : printf("\nDecember");
   default  : break;
  }
 getchar();
}


//#14.	Write a C program to count total number of notes in given amount.

#include<stdio.h>

void main()
{
long n,th,fh,h,f,tw,t,fc,tc,oc;

 printf("Enter an amount  :");
 scanf("%d",&n);
 th=n/2000;
 n=n%2000;
 fh=n/500;
 n=n%500;
 h=n/100;
 n=n%100;
 f=n/50;
 n=n%50;
 tw=n/20;
 n=n%20;
 t=n/10;
 n=n%10;
 fc=n/5;
 n=n%5;
 tc=n/2;
 n=n%2;
 oc=n/1;
 printf("\n2000 rupees notes are  :%d",th);
 printf("\n 500 rupees notes are  :%d",fh);
 printf("\n 100 rupees notes are  :%d",h);
 printf("\n  50 rupees notes are  :%d",f);
 printf("\n  20 rupees notes are  :%d",tw);
 printf("\n  10 rupees notes are  :%d",t);
 printf("\n   5 rupees coin  are  :%d",fc);
 printf("\n   2 rupees coin  are  :%d",tc);
 printf("\n   1 rupee  coin  are  :%d",oc);
 getchar();
}


//#15.	Write a C program to input angles of a triangle and check whether triangle is valid or not.


#include<stdio.h>

void main()
{
 int a,b,c;
 
 printf("\nEnter 3 angles of the triangle  :");
 scanf("%d %d %d",&a,&b,&c);
 if ((a+b+c)==180 )
   {
    printf("\nTriangle is valid");
   }
 else
   {
    printf("\nTriangle is not valid");
   }
 getchar();
}


//#16.	Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include<stdio.h>

void main()
{
 int a,b,c;

 printf("\nEnter 3 side of the triangle  :");
 scanf("%d %d %d",&a,&b,&c);
 if ( (a+b>c) && (a+c>b) && (c+b>a) )
   {
    printf("\nTriangle is valid");
   }
 else
   {
    printf("\nTriangle is not valid");
   }
 getchar();
}

//#17.	Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include<stdio.h>

void main()
{
 int a,b,c,a1,b1,c1;

 printf("\nEnter 3 side of the triangle  :");
 scanf("%d %d %d",&a,&b,&c);

 if ( (a+b>c) && (a+c>b) && (c+b>a) )
   {
    if(a==b && b==c && a==c)
      {
       printf("\nTringle formed is an Equilateral triangle");
      }
    else if(a==b && b!=c)
      {
       printf("\nTrinangle in Isoceles triangle");
      }
    else if(a!=b && b!=c && a!=c)
    {
        printf("\n Triangle is Scalene triangle.");
    }
   }
 else
   {
    printf("\nTriangle is not valid");
   }
 getchar();
}


//#18.	Write a C program to find all roots of a quadratic equation.

#include<stdio.h>

void main()
{
 int a,b,c;

 printf("\nEnter coefficient of X^2  :");
 scanf("%d",&a);
 printf("\nEnter coefficient of X  :");
 scanf("%d",&b);
 printf("\nEnter the constant :");
 scanf("%d",&c);
  printf("\n1st root is  :%f",(-b+sqrt((b*b)-(4*a*c)))/2*a);
  printf("\n2nd root is  :%f",(-b-sqrt((b*b)-(4*a*c)))/2*a);

  getchar();
}

//#19.	Write a C program to calculate profit or loss.

#include<stdio.h>

void main()

{

 float i,f,p,l;

 printf("Enter the initial capital:");

 scanf("%f",&i);

 printf("\n Enter the final capital:");

 scanf("%f",&f);

 if(i<f)

 {
 
 printf("\n Profit:");

  p=(f-i);

  printf("%f",p);
 
 }

 else if(i==f)
 
 printf("\n No Profit,No Loss.");

 else
 
 {

   printf("\n Loss:");

   l=(i-f);

   printf("%f",l);

   }


 getchar();
}


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

  
/*#21.	Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>
void main()
{
    int bs,hra,da,gs;
    printf("\n Enter the basic salary of the Employee:");
    scanf(("%u",&bs));
    if(bs<=10000)
    {
        hra=(0.2*bs);
        da=(0.8*bs);
    }
    else if(bs>=10000 && bs<=20000)
    {
        hra=(0.25*bs);
        da=(0.9*bs);
    }
   else
    {
        hra=(0.3*bs);
        da=(0.95*bs);
    }
    gs=(bs+hra+da);
    printf("\n The grioss Salary of the employee is: %u",gs);
    getchar();

}


/*#22.	Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/


#include<stdio.h>
void main()
{
    int a,amt;
    printf("\n Enter no. of Electricity Units consumed:");
    scanf("%d",&a);
    if(a<=50)
       amt=(a*0.5);
    else if(a>50 && a<=150)
        amt=(a*0.75);
    else if(a>50 && a<=250)
        amt=(a*1.2);
    else
        amt=(a*1.5);
    amt=(amt*0.2);
    printf("\n The total Electricity Bill is: %d",amt);
    getchar();

}


/*#23 write a switch statement that will examine the value of an integer variable called flag and print one of 
the following messages , depending on the value assigned to flag.
a) HOT, if flag has a value of 1
b) LUKE WARM, if flag has a value of 2
c)COLD, if flag has a vlue of 3
d) OUT OF RANGE, if flag has any other value
*/

#include<stdio.h>
void main()
{
    int flag;
    printf("\n Enter the value of tbe Flag:");
    scanf("%d",&flag);
    switch(flag)
    {
        case 1 : printf("\n HOT");
                 break;
        case 2 : printf("\n LUKE WARM");
                 break;
        case 3 : printf("\n COLD");
                 break;
        default : printf("\n OUT OF RANGE");
                  break;
    }
    getchar();
}


/*#24  write a switch statement that will examine the value of a char type variable called color and print one of the 
following messages,depending on the value assigned to color
a) RED, if either r or R is assigned to color
b) GREEN, if either g or G is assigned to color
c) BLUE, if either b or B is assigned to color
d) BLACK, if color assigned is any other

*/


#include<stdio.h>
void main()
{
     color;
    printf("\n Enter character in color:");
    scanf("%c",&color);
    switch(color)
    {
    case 'r':
    case  'R':printf("\n GREEN");
                      break;
        case 'g' :
        case  'G' : printf("\n GREEN");
                          break;
       case 'b':
       case 'B': printf("\n BLUE");
                          break;
        default : printf("\n BLACK");
                  break;
    }
    getchar();
}


/*#25  write an appropriate control structure that will examine the value of a floating point variable called temp
and print one of the following messages,depending on the value assigned to temp.
a) ICE, if the value of temp is less than 0
b) WATER, if the value of temp is between 0 and 100
c) STEAM, if the value of temp is greater than 100

*/
#include<stdio.h>
void main()
{
    float temp;
    printf("\n Enter the value of temp:");
    scanf("%f",&temp);
    if(temp<0)
        printf("\n ICE");
    else if(temp>=0 && temp<=100)
        printf("\n WATER");
    else
        printf("\n STEAM");
    getchar();
}


/*#26 Program to check if a character is alphabet,digit or special character.  */

#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("enter any character");
scanf("%c",&a);
	if((a>64 && a<91) || (a>96 && a<123)) 
			printf("Alphabet");
	else if(a>47 && a<58) 
		printf("digit");
	else
		 printf("special character");
getch();
}

