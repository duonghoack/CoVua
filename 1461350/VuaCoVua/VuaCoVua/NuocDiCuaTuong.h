int Min(int a,int b)
{
	return a<b?a:b ;
}
int TuongDi(int Tuong,int BanCo[8][8],int N,int M,int dong,int cot,int &dongdi,int &cotdi)
{
	int dem=0;
	do
	{
		if(Tuong > 0)//Doi voi tuong (+)
		{
			for(int k=1;k<=Min(dong,cot);k++)
			{
				if(BanCo[dong-k][cot-k]==0)
				{
					printf("\nTUONG co the di O[%d][%d]",dong-k,cot-k);
					dem++;
				}
				else if(BanCo[dong-k][cot-k]!=0)
				{
					if(BanCo[dong-k][cot-k]<0)
					{
						printf("\nTUONG co the 'AN CO' O[%d][%d]",dong-k,cot-k);
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
			for(int k=1;k<=Min(N-1-dong,M-1-cot);k++)
			{
				if(BanCo[dong+k][cot+k]==0)
				{
					printf("\nTUONG co the di O[%d][%d]",dong+k,cot+k);
					dem++;
				}
				else if(BanCo[dong+k][cot+k]!=0)
				{
					if(BanCo[dong+k][cot+k]<0)
					{
						printf("\nTUONG co the 'AN CO' O[%d][%d]",dong+k,cot+k);
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
			for(int k=1;k<=Min(dong,M-1-cot);k++)
			{
				if(BanCo[dong-k][cot+k]==0)
				{
					printf("\nTUONG co the di O[%d][%d]",dong-k,cot+k);
					dem++;
				}
				else if(BanCo[dong-k][cot+k]!=0)
				{
					if(BanCo[dong-k][cot+k]<0)
					{
						printf("\nTUONG co the 'AN CO' O[%d][%d]",dong-k,cot+k);
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
			for(int k=1;k<=Min(N-1-dong,cot);k++)
			{
				if(BanCo[dong+k][cot-k]==0)
				{
					printf("\nTUONG co the di O[%d][%d]",dong+k,cot-k);
					dem++;
				}
				else if(BanCo[dong+k][cot-k]!=0)
				{
					if(BanCo[dong+k][cot-k]<0)
					{
						printf("\nTUONG co the 'AN CO' O[%d][%d]",dong+k,cot-k);
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
		else//DOI voi tuong (-)
		{
			for(int k=1;k<=Min(dong,cot);k++)
			{
				if(BanCo[dong-k][cot-k]==0)
				{
					printf("\nTUONG co the di O[%d][%d]",dong-k,cot-k);
					dem++;
				}
				else if(BanCo[dong-k][cot-k]!=0)
				{
					if(BanCo[dong-k][cot-k]>0)
					{
						printf("\nTUONG co the 'AN CO' O[%d][%d]",dong-k,cot-k);
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
			for(int k=1;k<=Min(N-1-dong,M-1-cot);k++)
			{
				if(BanCo[dong+k][cot+k]==0)
				{
					printf("\nTUONG co the di O[%d][%d]",dong+k,cot+k);
					dem++;
				}
				else if(BanCo[dong+k][cot+k]!=0)
				{
					if(BanCo[dong+k][cot+k]>0)
					{
						printf("\nTUONG co the 'AN CO' O[%d][%d]",dong+k,cot+k);
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
			for(int k=1;k<=Min(dong,M-1-cot);k++)
			{
				if(BanCo[dong-k][cot+k]==0)
				{
					printf("\nTUONG co the di O[%d][%d]",dong-k,cot+k);
					dem++;
				}
				else if(BanCo[dong-k][cot+k]!=0)
				{
					if(BanCo[dong-k][cot+k]>0)
					{
						printf("\nTUONG co the 'AN CO' O[%d][%d]",dong-k,cot+k);
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
			for(int k=1;k<=Min(N-1-dong,cot);k++)
			{
				if(BanCo[dong+k][cot-k]==0)
				{
					printf("\nTUONG co the di O[%d][%d]",dong+k,cot-k);
					dem++;
				}
				else if(BanCo[dong+k][cot-k]!=0)
				{
					if(BanCo[dong+k][cot-k]>0)
					{
						printf("\nTUONG co the 'AN CO' O[%d][%d]",dong+k,cot+k);
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
		printf("\nBan muon di chuyen TUONG den O[dong][cot](nhap dong -> enter -> nhap cot -> enter)");
		scanf("%d%d",&dongdi,&cotdi);
		if( dem==0)
		{
			return dem;
		}
	}
	while(abs(dongdi - dong) != abs(cotdi - cot));//Dieu kien tuong di sai
	return dem;
}