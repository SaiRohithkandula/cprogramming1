#include <stdio.h>

int equilibrium_index(int arr[], int n)
{
int sum = 0;
int leftsum = 0;

for (int i = 0; i < n; ++i)
sum += arr[i];

for (int i = 0; i < n; ++i) {
sum -= arr[i];

if (leftsum == sum)
return i;

leftsum += arr[i];
}

return -1;
}

int main()
{
int n;
scanf("%d",&n);
int arr[n];
printf("\nInput the array elements");
for(int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("\nEquilibrium Index : %d\n", equilibrium_index(arr, n));
return 0;
}
