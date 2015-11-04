int XeDi(int Xe,int BanCo[8][8],int N,int M,int dong,int cot,int &dongdi,int &cotdi)
{
	int dem=0;
	do
	{
		if(Xe>0)
		{
			for(int j=cot+1;j<=M-1;j++)
			{
				if(BanCo[dong][j] == 0)
				{
					printf("\nXE co the di O[%d][%d]",dong,j);
					dem++;
				}
				else if(BanCo[dong][j] != 0)
				{
					if(BanCo[dong][j]<0)
					{
						printf("\nBan co the 'AN CO' tai O[%d][%d]",dong,j);
						dem++;
						break;
					}
					else
					{
						printf("\n");
						break;
					}
				}
			}
			for(int j=cot-1;j>0;j--)
			{
				if(BanCo[dong][j] == 0)
				{
					printf("\nXE co the di O[%d][%d]",dong,j);
					dem++;
				}
				else if(BanCo[dong][j] != 0)
				{
					if(BanCo[dong][j]<0)
					{
						printf("\nBan co the 'AN CO' tai O[%d][%d]",dong,j);
						dem++;
						break;
					}
					else
					{
						printf("\n");
						break;
					}
				}
			}
			for(int i=dong+1;i<=N-1;i++)
			{
				if(BanCo[i][cot] == 0)
				{
					printf("\nXE co the di O[%d][%d]",i,cot);
					dem++;
				}
				else if(BanCo[i][cot] != 0)
				{
					if(BanCo[i][cot]<0)
					{
						printf("\nBan co the 'AN CO' tai O[%d][%d]",i,cot);
						dem++;
						break;
					}
					else
					{
						printf("\n");
						break;
					}
				}
			}
			for(int i=dong-1;i>0;i--)
			{
				if(BanCo[i][cot] == 0)
				{
					printf("\nXE co the di O[%d][%d]",i,cot);
					dem++;
				}
				else if(BanCo[i][cot] != 0)
				{
					if(BanCo[i][cot]<0)
					{
						printf("\nBan co the 'AN CO' tai O[%d][%d]",i,cot);
						dem++;
						break;
					}
					else
					{
						printf("\n");
						break;
					}
				}
			}
		}
		else if(Xe<0)
		{
			for(int j=cot+1;j<=M-1;j++)
			{
				if(BanCo[dong][j] == 0)
				{
					printf("\nXE co the di O[%d][%d]",dong,j);
					dem++;
				}
				else if(BanCo[dong][j] != 0)
				{
					if(BanCo[dong][j]>0)
					{
						printf("\nBan co the 'AN CO' tai O[%d][%d]",dong,j);
						dem++;
						break;
					}
					else
					{
						printf("\n");
						break;
					}
				}
			}
			for(int j=cot-1;j>0;j--)
			{
				if(BanCo[dong][j] == 0)
				{
					printf("\nXE co the di O[%d][%d]",dong,j);
					dem++;
				}
				else if(BanCo[dong][j] != 0)
				{
					if(BanCo[dong][j]>0)
					{
						printf("\nBan co the 'AN CO' tai O[%d][%d]",dong,j);
						dem++;
						break;
					}
					else
					{
						printf("\n");
						break;
					}
				}
			}
			for(int i=dong+1;i<=N-1;i++)
			{
				if(BanCo[i][cot] == 0)
				{
					printf("\nXE co the di O[i][cot]",i,cot);
					dem++;
				}
				else if(BanCo[i][cot] != 0)
				{
					if(BanCo[i][cot]>0)
					{
						printf("\nBan co the 'AN CO' tai O[%d][%d]",i,cot);
						dem++;
						break;
					}
					else
					{
						printf("\n");
						break;
					}
				}
			}
			for(int i=dong-1;i>0;i--)
			{
				if(BanCo[i][cot] == 0)
				{
					printf("\nXE co the di O[i][cot]",i,cot);
					dem++;
				}
				else if(BanCo[i][cot] != 0)
				{
					if(BanCo[i][cot]>0)
					{
						printf("\nBan co the 'AN CO' tai O[%d][%d]",i,cot);
						dem++;
						break;
					}
					else
					{
						printf("\n");
						break;
					}
				}
			}
		}
		printf("\nBan muon di chuyen den O[dong][cot]:");
		scanf("%d%d",&dongdi,&cotdi);
		if( dem==0)
		{
			return dem;
		}
	}
	while(((cotdi != cot) && (dongdi != dong)) || ((cotdi == cot) && (dongdi == dong)));
	return dem;
}