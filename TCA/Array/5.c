#include<stdio.h>
//function declaration/prototype
void accept(int [], int);
void display(int [], int);
void display_reverse(int [], int);
void display_even(int [], int);
void display_odd(int [], int);
void display_even_position(int [], int);
void display_odd_position(int [], int);
void display_max(int [], int);
void display_min(int [], int);
void display_sum(int [], int);

//fuction definition
void accept(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the no: ");
		scanf("%d",&a[i]);
	}
}

void display(int a[], int n)
{
	int i;
	printf("Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}

void display_reverse(int a[], int n)
{
	int i;
	printf("\nreverse nos: ");
	for(i==5;i>=0;i--)
	{
		
		printf("%d ",a[i]);
	}

}

void display_even(int a[], int n)
{
	int i;
	printf("\neven nos: ");
	
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				
				printf("%d ", a[i]);
			}

		}
}

void display_odd(int a[], int n)
{
	int i;

	printf("\nodd nos: ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d",a[i]);
		}
	}
	
}

void display_even_position(int a[], int n)
{
	int i;

	printf("\n even position nos: ");
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d",a[i]);
		}
	}
	
}

void display_odd_position(int a[], int n)
{
	int i;

	printf("\n odd position nos: ");
	for(i=0;i<n;i++)
	{
		if(i%2==1)
		{
			printf("%d ",a[i]);
		}
	}
}

void display_max(int a[], int n)
{
	
}

void display_min(int a[], int n)
{
	
}

void display_sum(int a[], int n)
{
	int sum=0;
	int i;

	printf("\n");
	for(i=0;i<n;i++)
	{
		//printf("%d ", a[i]);
		sum=sum+a[i];
	}
	printf("\n sum: %d",sum);
	
}

int calculate_sum(int a[], int n)
{

	int sum=0;
	int i;

	printf("\n");
	for(i=0;i<n;i++)
	{
		//printf("%d ", a[i]);
		sum=sum+a[i];
	}
	return sum;
}







int main()
{
	int a[5],n,sum;

	printf("how many nos: ");
	scanf("%d", &n);

	accept(a,n);
	display(a,n);
	display_reverse(a,n);
	display_even(a,n);
	display_odd(a,n);
	display_even_position(a,n);
	display_odd_position(a,n);
	display_max(a,n);
	display_min(a,n);
	display_sum(a,n);

	sum=calculate_sum(a,n);
	printf("\nsum: %d",sum);

	return 0;
}