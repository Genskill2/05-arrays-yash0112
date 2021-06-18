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
   printf("How many numbers? - ");
   scanf("%d", &n);
   int array[n];
   for(int i=0; i<n; i++){
   
    printf("Enter number %d- ",i+1);
    scanf("%d", &array[i]);
    }
   int maximum=max(array, n);
   
   printf("Max number is %d\n", maximum);
   
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
 
 int main(void){
 
   int n;
   printf("How many numbers? - ");
   scanf("%d", &n);
   int array[n];
   for(int i=0; i<n; i++){
   
    printf("Enter number %d- ",i+1);
    scanf("%d", &array[i]);
    }
   int minimum=min(array, n);
   
   printf("Min number is %d\n", minimum);
   
  }


