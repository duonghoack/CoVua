int MaDi(int Ma,int BanCo[8][8],int N,int M,int dong,int cot,int &dongdi,int &cotdi)
{
	int dem=0;
	do
	{
		if(Ma>0)
		{
			if(BanCo[dong-2][cot-1]==0 && dong-2>=0 && cot-1>=0)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong-2,cot-1);
				dem++;
			}
			else if(BanCo[dong-2][cot-1]!=0 && dong-2>=0 && cot-1>=0)
			{
				if(BanCo[dong-2][cot-1]<0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong-2,cot-1);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong-2][cot+1]==0 && dong-2>=0 && cot+1>=0 && cot+1<M)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong-2,cot+1);
				dem++;
			}
			else if(BanCo[dong-2][cot+1]!=0 && dong-2>=0 && cot+1>=0 && cot+1<M)
			{
				if(BanCo[dong-2][cot+1]<0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong-2,cot+1);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong-1][cot-2]==0 && dong-1>=0 && cot-2>=0)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong-1,cot-2);
				dem++;
			}
			else if(BanCo[dong-1][cot-2]!=0 && dong-1>=0 && cot-2>=0)
			{
				if(BanCo[dong-1][cot-2]<0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong-1,cot-2);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong-1][cot+2]==0 && dong-1>=0 && cot+2>=0 && cot+2<M)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong-1,cot+2);
				dem++;
			}
			else if(BanCo[dong-1][cot+2]!=0 && dong-1>=0 && cot+2>=0 && cot+2<M)
			{
				if(BanCo[dong-1][cot+2]<0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong-1,cot+2);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong+1][cot-2]==0 && dong+1>=0 && dong+1<N && cot-2>=0)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong+1,cot-2);
				dem++;
			}
			else if(BanCo[dong+1][cot-2]!=0 && dong+1>=0 && dong+1<N && cot-2>=0)
			{
				if(BanCo[dong+1][cot-2]<0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong+1,cot-2);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong+1][cot+2]==0 && dong+1>=0 && dong+1<N && cot+2>=0 && cot+2<M)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong+1,cot+2);
				dem++;
			}
			else if(BanCo[dong+1][cot+2]!=0 && dong+1>=0 && dong+1<N && cot+2>=0 && cot+2<M)
			{
				if(BanCo[dong+1][cot+2]<0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong+1,cot+2);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong+2][cot-1]==0 && dong+2>=0 && dong+2<N && cot-1>=0)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong+2,cot-1);
				dem++;
			}
			else if(BanCo[dong+2][cot-1]!=0 && dong+2>=0 && dong+2<N && cot-1>=0)
			{
				if(BanCo[dong+2][cot-1]<0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong+2,cot-1);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong+2][cot+1]==0 && dong+2>=0 && dong+2<N && cot+1>=0 && cot+1<M)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong+2,cot+1);
				dem++;
			}
			else if(BanCo[dong+2][cot+1]!=0 && dong+2>=0 && dong+2<N && cot+1>=0 && cot+1<M)
			{
				if(BanCo[dong+2][cot+1]<0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong+2,cot+1);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
		}
			//Doi voi ma (-)
		else
		{
			if(BanCo[dong-2][cot-1]==0 && dong-2>=0 && cot-1>=0)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong-2,cot-1);
				dem++;
			}
			else if(BanCo[dong-2][cot-1]!=0 && dong-2>=0 && cot-1>=0)
			{
				if(BanCo[dong-2][cot-1]>0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong-2,cot-1);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong-2][cot+1]==0 && dong-2>=0 && cot+1>=0 && cot+1<M)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong-2,cot+1);
				dem++;
			}
			else if(BanCo[dong-2][cot+1]!=0 && dong-2>=0 && cot+1>=0 && cot+1<M)
			{
				if(BanCo[dong-2][cot+1]>0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong-2,cot+1);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong-1][cot-2]==0 && dong-1>=0 && cot-2>=0)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong-1,cot-2);
				dem++;
			}
			else if(BanCo[dong-1][cot-2]!=0 && dong-1>=0 && cot-2>=0)
			{
				if(BanCo[dong-1][cot-2]>0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong-1,cot-2);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong-1][cot+2]==0 && dong-1>=0 && cot+2>=0 && cot+2<M)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong-1,cot+2);
				dem++;
			}
			else if(BanCo[dong-1][cot+2]!=0 && dong-1>=0 && cot+2>=0 && cot+2<M)
			{
				if(BanCo[dong-1][cot+2]>0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong-1,cot+2);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong+1][cot-2]==0 && dong+1>=0 && dong+1<N && cot-2>=0)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong+1,cot-2);
				dem++;
			}
			else if(BanCo[dong+1][cot-2]!=0 && dong+1>=0 && dong+1<N && cot-2>=0)
			{
				if(BanCo[dong+1][cot-2]>0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong+1,cot-2);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong+1][cot+2]==0 && dong+1>=0 && dong+1<N && cot+2>=0 && cot+2<M)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong+1,cot+2);
				dem++;
			}
			else if(BanCo[dong+1][cot+2]!=0 && dong+1>=0 && dong+1<N && cot+2>=0 && cot+2<M)
			{
				if(BanCo[dong+1][cot+2]>0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong+1,cot+2);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong+2][cot-1]==0 && dong+2>=0 && dong+2<N && cot-1>=0)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong+2,cot-1);
				dem++;
			}
			else if(BanCo[dong+2][cot-1]!=0 && dong+2>=0 && dong+2<N && cot-1>=0)
			{
				if(BanCo[dong+2][cot-1]>0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong+2,cot-1);
					dem++;
				}
				else
				{
					printf("\n");
				}
			}
			if(BanCo[dong+2][cot+1]==0 && dong+2>=0 && dong+2<N && cot+1>=0 && cot+1<M)
			{
				printf("\nMA co the di chuyen toi O[%d][%d]",dong+2,cot+1);
				dem++;
			}
			else if(BanCo[dong+2][cot+1]!=0 && dong+2>=0 && dong+2<N && cot+1>=0 && cot+1<M)
			{
				if(BanCo[dong+2][cot+1]>0)
				{
					printf("\nMA co the 'AN CO' tai O[%d][%d]",dong+2,cot+1);
					dem++;
				}
				else
				{
					printf("\n");
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
	while(!((abs(dong-dongdi)==2 && abs(cot-cotdi)==1) || (abs(dong-dongdi)==1 && abs(cot-cotdi)==2)));
	return dem;
}