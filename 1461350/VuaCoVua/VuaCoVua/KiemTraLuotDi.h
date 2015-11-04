int KiemTraLuotDi(int &kiemtra,int BanCo[8][8],int N,int M)
{
	if(kiemtra==-1)
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				if(BanCo[i][j]==6)
				{
					kiemtra =1;
					return kiemtra;
				}
			}
		}
		kiemtra=100;
		return 100;
	}
	if(kiemtra==1)
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				if(BanCo[i][j]==-6)
				{
					kiemtra=-1;
					return kiemtra;
				}
			}
		}
		kiemtra=99;
		return 99;
	}
}