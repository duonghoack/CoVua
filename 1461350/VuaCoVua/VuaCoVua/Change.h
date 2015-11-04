void Change(int BanCo[8][8],int N,int M,int dong,int cot,int dongdi,int cotdi,int SOCONCO[])
{
	int temp;
	if(BanCo[dongdi][cotdi]!=0)
	{
		BanCo[dongdi][cotdi]=0;
	}
	temp=BanCo[dong][cot];
	BanCo[dong][cot]=BanCo[dongdi][cotdi];
	BanCo[dongdi][cotdi]=temp;
	for(int i=0;i<M*N;i++)
	{
		SOCONCO[i]=BanCo[i/M][i%M];
	}
}