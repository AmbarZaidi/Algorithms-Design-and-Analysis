//////////////////////////////////////////////////////////////// QUICK SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  quickSortarray.h - Quick Sort for input type array
//////////////////////////////////////////////////////////////// QUICK SORT

void quickSort(int* a, int l, int r)
{
	if(r-l<1) return;
//	cout<<"\n"<<a[l]<<" __||"<<l<<","<<r<<"||__ ";
	int lower = l+1;
	int higher = l+1;
	while(higher<=r)
	{
		if(a[higher]<a[l])
		{
			if(lower!=higher)
			{
//				cout<<"|"<<a[lower]<<"<-->"<<a[higher]<<" .. "<<lower-l<<","<<higher-l<<"|";
				swap(a[lower],a[higher]);
			}
			lower++;
		}
		higher++;
	}
//	cout<<"\n ???|"<<a[l]<<"<-->"<<a[lower-1]<<" .. "<<lower-l<<","<<higher-l<<"|";
	swap(a[l],a[lower-1]);
//	println(a,8);
	quickSort(a,l,lower-2);
	quickSort(a,lower,r);
}
void quickSortArray(int *a, int n)
{
    quickSort(a, 0, n-1);
}
