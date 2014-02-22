#include<iostream>
using namespace std;
void sort(int arr[],int p,int q)
{
	int left,right,k;
	if (p<q)
	{
		left=p;right=q;k=arr[left];
		do
		{
			while ((right>left)&&(arr[right]>=k)) right--;
			if (left<right)
			{
                  arr[left]=arr[right];
				  left++;
			}
			while ((left<right)&&(arr[left]<=k)) left++;
			if (left<right)
			{
				arr[right]=arr[left];
			}
		}
		while (left!=right);
		arr[left]=k;
		sort(arr,p,left-1);
		sort(arr,left+1,q);
	}
}
int main()
{
	int j,a[11]={0};
	for (j=1;j<=10;j++)
		cin>>a[j];
	sort(a,1,10);
	for (j=1;j<=10;j++)
		cout<<a[j]<<" ";
	system("pause");
	return 0;
}