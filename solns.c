/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>

int max(int a[], int l)
{
   int m=a[0];
   for(int i=0; i<l; i++)
   {
     if(m<a[i])
       m=a[i];
    }
    
    return m;
 }


int min(int a[], int l)
{
   int m=a[0];
   for(int i=0; i<l; i++)
   {
     if(m>a[i])
       m=a[i];
    }
    
    return m;
 }


float average(int a[], int l){
  
    int sum=0;
    for(int i=0; i<l; i++){
    
      sum=sum+a[i];
      }
      
    return sum/l;
    
 }
 


int mode(int a[], int l){

  int max=a[0],i,m,count;
  for ( i=0; i<l; i++)
  {
     if(max<a[i])
        max=a[i];
     }
     printf("%d\n",max);
   int counts[max+1];
   for(int j=0;j<=max;j++){
      count=0;
      for( i=0; i<l; i++){
        if(j==a[i])
           count++;
        }
        counts[j]=count;
     }
  int maximum=counts[0];
  for( i=0; i<=max; i++){
     if(maximum<counts[i])
        maximum=counts[i];
    }
    
    printf("%d\n",maximum);
  for(i=0; i<=max; i++){
  
   if(maximum==counts[i]){
      m=i;
      break;
      }
      }
      printf("%d\n",m);
      
      return m;
      }
   

int factors(int n, int fac[])
{  int j=0;
    
    while (n%2 == 0)
    {
        fac[j]=2;
        n = n/2;
        j++;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        
        while (n%i == 0)
        {
            fac[j]=i;
            n = n/i;
            j++;
        }
    }
 
    if (n > 2){
        fac[j]=n;
        j++;}
        
   for(int i=0; i<j; i++){
       printf("%d ",fac[i]);}
    
   return j;
}
 
