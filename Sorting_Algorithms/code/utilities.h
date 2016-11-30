///////////////////////////////////////////////////////////////// COMMON UTILITIES
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  utilities.h - Utility Functions
///////////////////////////////////////////////////////////////// COMMON UTILITIES
void swap(int& a,int& b)
{
	int temp = a;
	a=b;
	b=temp;
}
void print(int* a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void println(int*a, int n)
{
	cout<<"\n ---- ";
	print(a,n);
}
int digit(int m, int k)
{
     while(k--)
     {
         m/=10;
     }
     m%=10;
     return m;
}
int maxElem(int*a, int n)
{
	int mx=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>mx)mx=a[i];
	}
	return mx;
}
int nDigits(int m)
{
  int l=1;
  while(m/=10)
  {
    l++;
  }
  return l;
}
void randomArray(int* a, int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%200;
    }

}

