
// this program reports all the perfet squares before a number
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
  int x, i, z;
  float j;
  printf ("enter a number");
  scanf ("%d", &x);
  for (i = 1; i <= x; i++)
    {j=sqrt(i);
     z=j;
     if(j==z)
	{printf ("%d\n", i);
	}
    }
  getch ();
}