/////////////////////////////////////////////////////////////// COUNTING SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  countingSortarray.h - Counting Sort for input type array
/////////////////////////////////////////////////////////////// COUNTING SORT

/* assuming all non-negative integer elements with maximum value k.*/

void countingSortArray(int* a, int n)
{
  int k = maxElem(a,n);
	int* b = new int[n];
	int* count = new int[k+1];

	for(int i=0;i<=k;i++)
	{
	  	count[i]=0;
	}  //	println(a,n);
	for(int i=0;i<n;i++)
	{
	  	count[a[i]]++;
	}  //	println(count,k+1);
	for(int i=1;i<k+1;i++)
	{
  		count[i]+=count[i-1];
	}  //	println(count,k+1);
	for(int i=0;i<n;i++)
	{
	  	b[count[a[i]]-1]= a[i];
	  	count[a[i]]--;
	}  //	println(b,7);
	for(int i=0;i<n;i++)
	{
	  	a[i]=b[i];
	}
}
void countingSortArray(int* a, int n, int k)
{
	int* b = new int[n];
	int* count = new int[k+1];

	for(int i=0;i<=k;i++)
	{
	  	count[i]=0;
	}  //	println(a,n);
	for(int i=0;i<n;i++)
	{
	  	count[a[i]]++;
	}  //	println(count,k+1);
	for(int i=1;i<k+1;i++)
	{
  		count[i]+=count[i-1];
	}  //	println(count,k+1);
	for(int i=0;i<n;i++)
	{
	  	b[count[a[i]]-1]= a[i];
	  	count[a[i]]--;
	}  //	println(b,7);
	for(int i=0;i<n;i++)
	{
	  	a[i]=b[i];
	}
}

