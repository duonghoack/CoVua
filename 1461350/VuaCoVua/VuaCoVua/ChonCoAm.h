int ChonCoAm(int BanCo[8][8],int N,int M,int &dong,int &cot,int &ConCo,int &dongdi,int &cotdi)
{
	int dem=0;
	do
	{
		do
		{
			printf("\nBan muon chon 'CON CO':");
			scanf("%d",&ConCo);
		}
		while(ConCo>=0 || ConCo<=-10);
		if(ConCo==-7 || ConCo==-8 || ConCo==-9)
		{
			return 0;
		}
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				if(BanCo[i][j]==ConCo)
				{
					printf("\nCo the chon co tai O[%d][%d]",i,j);
				}
			}
		}
		do
		{
			printf("\nBan muon chon co tai O[dong][cot]:");
			scanf("%d%d",&dong,&cot);
		}
		while((dong>=N || cot>=M || dong<0 || cot<0) || BanCo[dong][cot]!=ConCo);
		switch(ConCo)
			{
			case -1:
				{
					dem=ChotDi(ConCo,BanCo,N,M,dong,cot,dongdi,cotdi);
					break;
				}			
			case -2:
				{
					dem=XeDi(ConCo,BanCo,N,M,dong,cot,dongdi,cotdi);
					break;
				}
			case -3:
				{
					dem=MaDi(ConCo,BanCo,N,M,dong,cot,dongdi,cotdi);
					break;
				}
			case -4:
				{
					dem=TuongDi(ConCo,BanCo,N,M,dong,cot,dongdi,cotdi);
					break;
				}
			case -5:
				{
					dem=HauDi(ConCo,BanCo,N,M,dong,cot,dongdi,cotdi);
					break;
				}
			case -6:
				{
					dem=VuaDi(ConCo,BanCo,N,M,dong,cot,dongdi,cotdi);
					break;
				}
		}
	}
	while(dem==0);
	return 0;
}