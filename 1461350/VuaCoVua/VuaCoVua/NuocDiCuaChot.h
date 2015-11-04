int ChotDi(int &Chot,int BanCo[8][8],int N,int M,int dong,int cot,int &dongdi,int &cotdi)
{
	int dem=0;
	do
	{
	
		if(Chot>0 && dong!=7)
		{
			if(dong==1)
			{
				printf("\nCHOT co the di den O[%d][%d]",dong+2,cot);
			}
			if(BanCo[dong+1][cot]==0 && dong+1<N)
			{
				printf("\nCHOT co the di den O[%d][%d]\n",dong+1,cot);
				dem++;
			}
			if(BanCo[dong+1][cot+1]<0 && dong+1>=0 && cot+1 >=0 && dong+1<N && cot+1<M)
			{
				printf("\nCHOT co the 'AN CO' tai O[%d][%d]\n",dong+1,cot+1);
				dem++;
			}
			if(BanCo[dong+1][cot-1]<0 && dong+1>=0 && cot-1 >=0 && dong+1<N && cot-1<M)
			{
				printf("\nCHOT co the 'AN CO' tai O[%d][%d]",dong+1,cot-1);
				dem++;
			}
		}
		if(Chot<0 && dong!=0)
		{
			if(dong==6)
			{
				printf("\nCHOT co the di den O[%d][%d]",dong-2,cot);
			}
			if(BanCo[dong-1][cot]==0 && dong-1>=0)
			{
				printf("\nCHOT co the di den O[%d][%d]\n",dong-1,cot);
				dem++;
			}
			if(BanCo[dong-1][cot+1]>0 && dong-1>=0 && cot+1 >=0 && dong-1<N && cot+1<M)
			{
				printf("\nCHOT co the 'AN CO' tai O[%d][%d]\n",dong-1,cot+1);
				dem++;
			}
			if(BanCo[dong-1][cot-1]>0 && dong-1>=0 && cot-1 >=0 && dong-1<N && cot-1<M)
			{
				printf("\nCHOT co the 'AN CO' tai O[%d][%d]",dong-1,cot-1);
				dem++;
			}
		}
		printf("\nBan muon di den O[dong][cot]");
		scanf("%d%d",&dongdi,&cotdi);
		if( dem==0)
		{
			return dem;
		}
		if(Chot>0 && dong==1)
		{
			if(dongdi-dong==2 && cotdi-cot==0)
			{
				return dem;
			}
		}
		if(Chot<0 && dong==6)
		{
			if(dongdi-dong==-2 && cotdi-cot==0)
			{
				return dem;
			}
		}
	}
	while(!((abs(dongdi-dong)==1 && cotdi-cot==0) || (BanCo[dongdi][cotdi]<0 && dongdi-dong==1 && (cotdi-cot==1 || cotdi-cot==-1))
		|| (BanCo[dongdi][cotdi]>0 && dongdi-dong==-1 && (cotdi-cot==1 || cotdi-cot==-1)))) ;
	
		if(Chot>0)
			{
				if(dongdi==7)
				{
					do
					{
						printf("\nBan muon phong CHOT thanh quan nao\nHAU:5\tTUONG:4\tMA:3\tXE:2");
						scanf("%d",&Chot);
					}
					while(Chot<0);
					BanCo[dong][cot]=Chot;
					/*switch(Chot)
					{
					case 2:
						{
							dem=XeDi(Chot,BanCo,N,M,dong,cot,dongdi,cotdi);
							break;
						}
					case 3:
						{
							dem=MaDi(Chot,BanCo,N,M,dong,cot,dongdi,cotdi);
							break;
						}
					case 4:
						{
							dem=TuongDi(Chot,BanCo,N,M,dong,cot,dongdi,cotdi);
							break;
						}
					case 5:
						{
							dem=HauDi(Chot,BanCo,N,M,dong,cot,dongdi,cotdi);
							break;
						}
					}
					return dem;*/
				}
				
			}
			else
			{
				if(dongdi==0)
				{
					do
					{
						printf("\nBan muon phong CHOT thanh quan nao\nHAU:-5\tTUONG:-4\tMA:-3\tXE:-2");
						scanf("%d",&Chot);
					}
					while(Chot>0);
					BanCo[dong][cot]=Chot;
					/*switch(Chot)
					{
					case -2:
						{
							dem=XeDi(Chot,BanCo,N,M,dong,cot,dongdi,cotdi);
							break;
						}
					case -3:
						{
							dem=MaDi(Chot,BanCo,N,M,dong,cot,dongdi,cotdi);
							break;
						}
					case -4:
						{
							dem=TuongDi(Chot,BanCo,N,M,dong,cot,dongdi,cotdi);
							break;
						}
					case -5:
						{
							dem=HauDi(Chot,BanCo,N,M,dong,cot,dongdi,cotdi);
							break;
						}
					}
					return dem;*/
				}
				
			}
	
	return dem;
}