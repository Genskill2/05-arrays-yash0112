/* Enter your solutions in this file */
#include <stdio.h>

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
 
 int main(void){
 
   int n;
   n=get_int("How many numbers?-");
   int array[n];
   for(int i=0; i<n; i++){
   
    array[i]=get_int("Enter number %d- ", i+1);
    }
   int maximum=max(array, n);
   
   printf("Max number is %d\n", maximum);
   
  }


