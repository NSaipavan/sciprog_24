#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

   inum = 345028;

   fnum = (float) inum;

   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

   binnum[i] = '\0';

   int length, mid, j;
   char aux;
   length = strlen(binnum);
   mid = length/2;
   for(i = 0; i < mid; i++) {
       j = length-i-1;
       aux = binnum[i];
       binnum[i] = binnum[j];
       binnum[j] = aux;
    }

   numdigits = ceil(logf(fnum)/logf(2));
   printf("The number of digits is %d\n",numdigits);

   printf("inum=%d,  fnum=%f, inum in binary=%s\n",inum,fnum,binnum);

   return 0;
}