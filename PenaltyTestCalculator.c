#include <stdio.h>
#include <math.h>

int main()
{ int total,incorrect,correctNeeded;
  double minimumAnswers,remaining;

  printf("Enter the total number of questions: ");
  scanf("%d",&total);

  remaining=total;
  incorrect=0;
  minimumAnswers=ceil((total-1)/2.0);

if(total%2==0){
  while (remaining>minimumAnswers)
    {
     remaining-=1.25;
     incorrect++;
    }
}
else {
 while (remaining>minimumAnswers)
    {if ((remaining-1.5)>=minimumAnswers)
     {remaining-=1.25;
     incorrect++;}
     else
        break;
    }
}

  correctNeeded=total-incorrect;
  printf("You need to have at least %d correct answers.\n",correctNeeded);


return 0;}

