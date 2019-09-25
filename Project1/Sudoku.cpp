#include <iostream>
#include<stdio.h> 
#include <stdlib.h>
using namespace std;
int xx = 1;
int gong[9];
int completion(int *arr, const int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if (*(arr + i * n + j) == 0)
				return 1;
		}
	return 0;
}
void initial(int *arr, const int n)
{
	for (int i = 0; i < n; i++)
		*(arr + i) = 0;
}
int judge1(int *arr, const int n)
{
	int i, j;
	for (i = 0; i < n - 2; i++)
		for (j = i + 1; j < n; j++)
		{
			if (*(arr + i) == *(arr + j))
				if (*(arr + i) != 0)
					return 1;
		}
	return 0;
}
int judge(int *arr, const int n)
{
	int i, j, k, pd;

	for (i = 0; i < n; i++)
		for (j = 0; j <= n - 2; j++)
			for (k = j + 1; k < n; k++)
			{
				if (*(arr + i * n + j) == *(arr + i * n + k))
					if (*(arr + i * n + j) != 0)
						return 1;

			}
	for (j = 0; j < n; j++)
		for (i = 0; i <= n - 2; i++)
			for (k = i + 1; k < n; k++)
			{
				if (*(arr + i * n + j) == *(arr + k * n + j))
					if (*(arr + i * n + j) != 0)
						return 1;

			}
	//九宫格 
	if (n == 9)
		for (i = 0; i < n; i++)
		{
			int shu = 0;
			if (i < 3)
			{
				j = 0;
				initial(gong, n);
				for (; j < 3; j++)
					for (k = i * 3; k < (i * 3 + 3); k++)
					{

						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//	printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
			else if (i < 6)
			{
				j = 3;
				initial(gong, n);
				for (; j < 7; j++)
					for (k = (i - 3) * 3; k < ((i - 3) * 3 + 3); k++)
					{
						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//	printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
			else
			{
				j = 6;
				initial(gong, n);
				for (; j < 9; j++)
					for (k = (i - 6) * 3; k < ((i - 6) * 3 + 3); k++)
					{
						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
		}
	if (n == 8)
		for (i = 0; i < n; i++)
		{
			int shu = 0;
			if (i < 4)
			{
				j = 0;
				initial(gong, n);
				for (; j < 4; j++)
					for (k = i * 2; k < (i * 2 + 2); k++)
					{

						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//	printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
			else
			{
				j = 4;
				initial(gong, n);
				for (; j < 8; j++)
					for (k = (i - 4) * 2; k < ((i - 4) * 2 + 2); k++)
					{
						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
		}
	if (n == 6)
		for (i = 0; i < n; i++)
		{
			int shu = 0;
			if (i < 2)
			{
				j = 0;
				initial(gong, n);
				for (; j < 2; j++)
					for (k = i * 3; k < (i * 3 + 3); k++)
					{

						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//	printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
			else if (i < 4)
			{
				j = 2;
				initial(gong, n);
				for (; j < 4; j++)
					for (k = (i - 2) * 3; k < ((i - 2) * 3 + 3); k++)
					{
						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//	printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
			else
			{
				j = 4;
				initial(gong, n);
				for (; j < 6; j++)
					for (k = (i - 4) * 3; k < ((i - 4) * 3 + 3); k++)
					{
						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
		}
	if (n == 4)
		for (i = 0; i < n; i++)
		{
			int shu = 0;
			if (i < 2)
			{
				j = 0;
				initial(gong, n);
				for (; j < 2; j++)
					for (k = i * 2; k < (i * 2 + 2); k++)
					{

						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//	printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
			else
			{
				j = 2;
				initial(gong, n);
				for (; j < 4; j++)
					for (k = (i - 2) * 2; k < ((i - 2) * 2 + 2); k++)
					{
						gong[shu] = *(arr + j * n + k);
						shu++;

					}
				//	initialshow(gong,n);
				//	cout<<endl; 
				pd = judge1(gong, n);
				//printf(" %d \n",pd);
				if (pd == 0)
					continue;
				else
					return pd;
			}
		}
	return 0;
}
int tianshu(int *arr, const int n)
{
	int i, j, shu, x, s;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (*(arr + i * n + j) == 0)
			{
				//printf("%d %d\n",i,j);
				for (shu = 1; shu <= n; shu++)
				{
					if (xx == 0)
						return 0;
					*(arr + i * n + j) = shu;
					x = judge(arr, n);
					if (x == 1)
						if (shu == n)
						{
							*(arr + i * n + j) = 0;
							return 1;
						}
						else
						{
							continue;
						}
					s = tianshu(arr, n);
					if (s == 1)
						if (shu == n)
						{
							*(arr + i * n + j) = 0;
							return 1;
						}
						else
							continue;
					if (s == 0)
					{
						xx = 0;
						return 0;
					}
				}

			}
		}
	}
	return judge(arr, n);
}
int main(int argc, char *argv[])
{
	FILE *fopen1, *fopen2;
	errno_t err;
	int n, m;
	n = atoi(argv[2]);
	m = atoi(argv[4]);
	char *inname = argv[6];
	char *otname = argv[8];
	err = fopen_s(&fopen1, inname, "r");
	if (err != 0)
		return 1;
	err = fopen_s(&fopen2, otname, "w");
	if (err != 0)
		return 1;
	fclose(fopen2);
	int *a;
	a = (int *)malloc(sizeof(int) * (n*n));
	for (; m > 0; m--)
	{
		xx = 1;
		for (int i = 0; i < n; i++)//输入 
		{
			for (int j = 0; j < n; j++)
			{
				fscanf_s(fopen1, "%d", a + i * n + j);
			}
		}
		err = fopen_s(&fopen2,otname, "a");//打开输出文件
		if (err != 0)
			return 1;
		else
		{
			tianshu(a, n);
			for (int i = 0; i < n; i++)//输入 
			{
				for (int j = 0; j < n; j++)
				{
					if (fopen2 != NULL)
					{
						fprintf_s(fopen2, "%d ", *(a + i * n + j));
						if (j == n - 1)
							fprintf_s(fopen2, "\n");
					}
				}
			}
			if (fopen2 != NULL)
			{
				fprintf_s(fopen2, "\n");
				fclose(fopen2);//关闭输出文件
			}
		}
	}
	return 0;
}

