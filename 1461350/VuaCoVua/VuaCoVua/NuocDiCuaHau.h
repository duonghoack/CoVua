int HauDi(int Hau,int BanCo[8][8],int N,int M,int dong,int cot,int &dongdi,int &cotdi)
{
	int dem=0;
	printf("\nHAU dang nam tai O[%d][%d]!\n",dong,cot);
	do
	{
		if(Hau > 0)//Doi voi Hau (+)
		{//Giong Xe
			for(int j=cot+1;j<=M-1;j++)
			{
				if(BanCo[dong][j] == 0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong,j);
					dem++;
				}
				else
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
					printf("\nHOANG HAU co the di O[%d][%d]",dong,j);
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
					printf("\nHOANG HAU co the di O[%d][%d]",i,cot);
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
					printf("\nHOANG HAU co the di O[%d][%d]",i,cot);
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
			//CHEO CHINH TREN
			for(int k=1;k<=Min(dong,cot);k++)
			{
				if(BanCo[dong-k][cot-k]==0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong-k,cot-k);
					dem++;
				}
				else if(BanCo[dong-k][cot-k]!=0)
				{
					if(BanCo[dong-k][cot-k]<0)
					{
						printf("\nHOANG HAU co the 'AN CO' O[%d][%d]",dong-k,cot-k);
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
			//CHEO CHINH DUOI
			for(int k=1;k<=Min(N-1-dong,M-1-cot);k++)
			{
				if(BanCo[dong+k][cot+k]==0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong+k,cot+k);
					dem++;
				}
				else if(BanCo[dong+k][cot+k]!=0)
				{
					if(BanCo[dong+k][cot+k]<0)
					{
						printf("\nHOANG HAU co the 'AN CO' O[%d][%d]",dong+k,cot+k);
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
			//CHEO PHU TREN
			for(int k=1;k<=Min(dong,M-1-cot);k++)
			{
				if(BanCo[dong-k][cot+k]==0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong-k,cot+k);
					dem++;
				}
				else if(BanCo[dong-k][cot+k]!=0)
				{
					if(BanCo[dong-k][cot+k]<0)
					{
						printf("\nHOANGHAU co the 'AN CO' O[%d][%d]",dong-k,cot+k);
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
			//CHEO PHU DUOI
			for(int k=1;k<=Min(N-1-dong,cot);k++)//sai
			{
				if(BanCo[dong+k][cot-k]==0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong+k,cot-k);
					dem++;
				}
				else if(BanCo[dong+k][cot-k]!=0)
				{
					if(BanCo[dong+k][cot-k]<0)
					{
						printf("\nHOANG HAU co the 'AN CO' O[%d][%d]",dong+k,cot-k);
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
		else//Doi voi Hau (-)
		{//Giong Xe
			dem=0;
			for(int j=cot+1;j<=M-1;j++)
			{
				if(BanCo[dong][j] == 0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong,j);
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
					printf("\nHOANG HAU co the di O[%d][%d]",dong,j);
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
					printf("\nHOANG HAU co the di O[%d][%d]",i,cot);
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
					printf("\nHOANG HAU co the di O[%d][%d]",i,cot);
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
			//CHEO CHINH TREN
			for(int k=1;k<=Min(dong,cot);k++)
			{
				if(BanCo[dong-k][cot-k]==0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong-k,cot-k);
					dem++;
				}
				else if(BanCo[dong-k][cot-k]!=0)
				{
					if(BanCo[dong-k][cot-k]>0)
					{
						printf("\nHOANG HAU co the 'AN CO' O[%d][%d]",dong-k,cot-k);
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
			//CHEO CHINH DUOI
			for(int k=1;k<=Min(N-1-dong,M-1-cot);k++)
			{
				if(BanCo[dong+k][cot+k]==0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong+k,cot+k);
					dem++;
				}
				else if(BanCo[dong+k][cot+k]!=0)
				{
					if(BanCo[dong+k][cot+k]>0)
					{
						printf("\nHOANG HAU co the 'AN CO' O[%d][%d]",dong+k,cot+k);
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
			//CHEO PHU TREN
			for(int k=1;k<=Min(dong,M-1-cot);k++)
			{
				if(BanCo[dong-k][cot+k]==0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong-k,cot+k);
					dem++;
				}
				else if(BanCo[dong-k][cot+k]!=0)
				{
					if(BanCo[dong-k][cot+k]>0)
					{
						printf("\nHOANGHAU co the 'AN CO' O[%d][%d]",dong-k,cot+k);
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
			//CHEO PHU DUOI
			for(int k=1;k<=Min(N-1-dong,cot);k++)
			{
				if(BanCo[dong+k][cot-k]==0)
				{
					printf("\nHOANG HAU co the di O[%d][%d]",dong+k,cot-k);
					dem++;
				}
				else if(BanCo[dong+k][cot-k]!=0)
				{
					if(BanCo[dong+k][cot-k]>0)
					{
						printf("\nHOANG HAU co the 'AN CO' O[%d][%d]",dong+k,cot-k);
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
	printf("\nBan muon di chuyen toi O[dong][cot]:");
	scanf("%d%d",&dongdi,&cotdi);
	if( dem==0)
		{
			return dem;
		}
	}
	while(!((abs(cotdi-cot) == abs(dongdi-dong)) ||(((dongdi == dong) && (cotdi != cot)) || ((cotdi==cot) && (dongdi != dong)))));
	return dem;
}