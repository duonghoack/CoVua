int VuaDi(int Vua,int BanCo[8][8],int N,int M,int dong,int cot,int &dongdi,int &cotdi)
{
	int dem=0;
	printf("\nVua dang nam tai O[%d][%d]",dong,cot);
	do
	{
		if(Vua>0)
		{
			for(int di=-1;di<=1;di++)
			{
				for(int dj=-1;dj<=1;dj++)
				{
					if(dong+di>=0 && cot+dj>=0 && dong+di<M && cot+dj<N && !(di==0 && dj==0))
					{
						if(BanCo[dong+di][cot+dj]==0)
						{
							printf("\nVUA co the di den O[%d][%d]",dong+di,cot+dj);
							dem++;
						}
						else if(BanCo[dong+di][cot+dj]!=0)
						{
							if(BanCo[dong+di][cot+dj]<0)
							{
								printf("\nBan co the 'AN CO' tai O[%d][%d]",dong+di,cot+dj);
								dem++;
							}
							else
							{
								printf("\n");
							}
						}
					}
				}
			}
		}
		else
		{
			for(int di=-1;di<=1;di++)
			{
				for(int dj=-1;dj<=1;dj++)
				{
					if(dong+di>=0 && cot+dj>=0 && dong+di<M && cot+dj<N && !(di==0 && dj==0))
					{
						if(BanCo[dong+di][cot+dj]==0)
						{
							printf("\nVUA co the di den O[%d][%d]",dong+di,cot+dj);
							dem++;
						}
						else if(BanCo[dong+di][cot+dj]!=0)
						{
							if(BanCo[dong+di][cot+dj]>0)
							{
								printf("\nBan co the 'AN CO' tai O[%d][%d]",dong+di,cot+dj);
								dem++;
							}
							else
							{
								printf("\n");
							}
						}
					}
				}
			}
		}
		printf("\nBan muon di den O[dong][cot]:");
		scanf("%d%d",&dongdi,&cotdi);
		if( dem==0)
		{
			return dem;
		}
	}
	while((abs(dong-dongdi)==1 && abs(cot-cotdi)>1) || (abs(cot-cotdi)==1 && abs(dong-dongdi)>1));
	return dem;
}