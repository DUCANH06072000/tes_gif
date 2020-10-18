#include<stdio.h>
#include<conio.h>
#include<fstream>
#define max 100
struct DOIBONG
	{
		char Name[30];
		int win, tie,lose;
	};
typedef DOIBONG DB;
	void nhap(DB &list)
		{
			fflush(stdin);
			printf("\nnhap ten doi bong:");
			gets(list.Name);
				fflush(stdin);
					printf("\nnhap so tran hoa:");
			scanf("%d",&list.tie);
			fflush(stdin);
			printf("\nnhap so tran thang:");
			scanf("%d",&list.win);
				printf("\nnhap so tran thua:");
			scanf("%d",&list.lose);
			fflush(stdin);
		}
	void xuat(DB list)
		{
			printf("\nten doi bong:%s",list.Name);
			printf("\t\t\ttran thang-tran thua-tran hoa:%d-%d-%d",list.win,list.lose,list.tie);
			
		}
	void nhapds(DOIBONG a[max],	int n)
	{
	
			
			for(int i=0;i<n;i++)
				{
					printf("doi bong thu:%d",i+1);
					nhap(a[i]);
				}
	}
	void xuatds(DOIBONG a[max],	int n)
	{
		
		printf("\n noi dung can hien thi:");
		for(int i=0;i<n;i++)
			{
				xuat(a[i]);
			}
	}
	void sx(DOIBONG a[max],int n)
	{
		DOIBONG temp;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			if((a[i].win*3+a[i].lose*0+a[i].tie*1)<(a[j].win*3+a[j].lose*0+a[j].tie*1))
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		for(int i=0;i<n;i++)
			xuatds(a,n);
		
	}
	void sxt()
	{
		
	}
int main()
	{
		DOIBONG a[max];
		int n;
		printf("\nnhap so luong doi bong:");
			scanf("%d",&n);
		nhapds(a,n);
		xuatds(a,n);
		sx(a,n);
	 } 

