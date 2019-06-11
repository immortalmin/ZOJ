#include<stdio.h>
int main()
{
  long i,j,k,l;
  for(i=2;i<=200;i++)
  {
     for(j=2;j<=200;j++)
     {
        for(k=j+1;k<=200;k++)
        {
          for(l=k+1;l<=200;l++)
          {
            if((i*i*i)==((j*j*j)+(k*k*k)+(l*l*l)))
              printf("Cube = %ld, Triple = (%ld,%ld,%ld)\n",i,j,k,l);
          }
        }
     }
  }
  return 0;
}