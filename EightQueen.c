#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int x[9],q=0;
int place(int s)
{
	int i=1;
	while(i<s)
	{
		if((abs(i-s)==abs(x[i]-x[s])||x[i]==x[s]))
		return 0;
		i++;
	}
	return 1;
}
int Tria(int i,int n)
{
	int j,m;
	if(i>n)
	{
	    for(i=1;i<=8;i++)
	    printf("%d ",x[i]);
	    printf("\n");
	    q++;
	}
	else
	{
		for(j=1;j<=n;j++)
		{
			x[i]=j;
			if(place(i))
			{
			m=Tria(i+1,n);
			if(m!=8)
			break;
		    }	
		}
		return x[i];
	}
}
int main()
{
	int i;
	printf("�˻ʺ������ÿ�ֽⷨ���£�\n");
	Tria(1,8);
	printf("�ⷨ����Ϊ:");
	printf("%d",q);
}
