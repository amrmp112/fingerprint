#include <stdio.h>
int arr[]={5,6,7,8};
int k=sizeof(void);
int main()
{int n, c, d, a[100], b[100],p,q,z;
    q=sizeof(p);
    printf("Enter the number of elements in array\n");
   scanf("%d", &n );
 printf("Enter array elements\n");
 for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);
 
   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];
 
   for (c = 0; c < n; c++)
      a[c] = b[k];
 
   printf("Reverse array is\n");
 
   for (c = 0; c < n; c++)
      printf("%d\n", a[c]);
   return 0;
}

