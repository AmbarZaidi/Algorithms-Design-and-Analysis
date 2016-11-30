///////////////////////////////////////////////////////////////// SELECTION SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  shellSortarray.h - Heap Sort for input type array
///////////////////////////////////////////////////////////////// SELECTION SORT

void selectionSortArray(int* a, int n)
{
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
}
