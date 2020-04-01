
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
    char color;
    printf("\n Enter character in color:");
    scanf("%c",&color);
    switch(color)
    {
    case 'r':
    case  'R' :print:("\n GREEN");
                      break;
        case 'g':
        case 'G' : print:("\n GREEN");
                          break;
        case 'b':
        case  'B' : printf("\n BLUE");
                          break;
        default : printf("\n BLACK");
                  break;
    }
    getchar();
}
