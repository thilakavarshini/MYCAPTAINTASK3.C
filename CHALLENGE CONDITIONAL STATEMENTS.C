#include <stdio.h>

int main()

{
   int s1,s2,s3,s4,s5,s6;
   float avg;
   printf("enter the marks");
   scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
   avg= (s1 + s2 + s3+ s4+ s5 + s6 )/6;
   if (avg>85&&avg<100)
  {
  printf("gradeA");
  }
  if (avg>70&&avg<84)
  {
  printf("grade B");
  }
  if( avg>55&&avg<69)
  {
    printf (" grade C");
  }
  if ( avg>40&&avg<54)
  {
    printf("grade D");
  }
  else
  if (avg<40)
  {
     printf("grade F");
  }
 return 0;
}

