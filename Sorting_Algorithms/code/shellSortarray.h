///////////////////////////////////////////////////////////////// SHELL SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  shellSortarray.h - Shell Sort for input type array
///////////////////////////////////////////////////////////////// SHELL SORT

void insertionGapSort(int* a, int n,int gap)
{
	for(int k=0;k<gap;k++)
	{
		for (int i = gap+k; i < n; i+=gap)
        {
          int j = i;
          while (j >= gap && a[j - gap] > a[j] && j<n)
          {
            swap(a[j],a[j-gap]);
            j-=gap;
          }
        }
	}
}
void shellSortArray(int* a, int n)
{
	int gap = 1;
	while(gap<=n/3)
	{
		gap=gap*3+1;
	}
	while(gap>=1)
	{
		insertionGapSort(a,n,gap);
		gap=gap/2;
		//println(a,n);
	}
}
