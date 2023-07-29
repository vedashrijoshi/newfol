#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		int a;
		printf("Enter the value of a = ");
		scanf("%d",&a);
		arr[i]=a;
	}
	int k;
	printf("Enter the value of k = ");
	scanf("%d",&k);
	int res=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]==k)
		{
			printf("Exist in an array\n");
			res = 1;
		}	
	}
	if(res == 0)
	{
		printf("Not in an array\n");
	}
	return 0;
}
