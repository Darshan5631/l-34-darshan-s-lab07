#include <stdio.h>
int main()
 {
   int n,a[10],i,j,temp;
  printf("ENTER THE VALUE OF N\n");
  scanf("%d",&n);
  printf("ENTER N ELEMENTS\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
  for(j=0;j<n-1-i;j++)
  {
    if(a[j]<a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
  }
  }
  printf("SORTED ELEMENTS ARE:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  printf("\n");
  return 0;
}//DECENDING ORDER