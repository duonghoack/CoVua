#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
#include<string.h>
#include "XuatBanCo.h"
#include "BanCoVua.h"
#include "CapNhatCo.h"
#include "NuocDiCuaXe.h"
#include "NuocDiCuaTuong.h"
#include "NuocDiCuaMa.h"
#include "NuocDiCuaHau.h"
#include "NuocDiCuaVua.h"
#include "NuocDiCuaChot.h"
#include "ChonCoDuong.h"
#include "ChonCoAm.h"
#include "KiemTraLuotDi.h"
#include "Change.h"
int TaoMoi()
{
		int BanCo[8][8]={0},N=8,M=8;
		int SOCONCO[64];
		char TENCO[64];
		int kiemtra=-1;
		int dong,cot,dongdi,cotdi;
		int ConCo=0;
		BanCoVua(BanCo,TENCO,SOCONCO);
		CAPNHAT(BanCo,SOCONCO,TENCO);
		do
		{
			printf("\nBAM 1:Neu nguoi choi 2 di truoc");
			printf("\nBAM -1:Neu nguoi choi 1 di truoc:");
			scanf("%d",&kiemtra);
		}
		while(!(kiemtra==1 || kiemtra==-1));
		system("cls");
		XuatBanCo(BanCo,N,M,SOCONCO,TENCO);
		do
		{
			int ykien=2;
			KiemTraLuotDi(kiemtra,BanCo,N,M);
			if(kiemtra==1)
			{
				
				do
				{
					do
					{
						ykien=2;
						printf("\nDEN LUOT NGUOI CHOI 1\n");
						ChonCoDuong(BanCo,N,M,dong,cot,ConCo,dongdi,cotdi);
						if(ConCo==8)
						{
							printf("\nNGUOI CHOI 1 MUON 'CAU HOA'!!!");
							printf("\nNGUOI CHOI 2 DONG Y<BAM 1> KHONG DONG Y <BAM 0>:");
							scanf("%d",&ykien);
							system("cls");
							break;
						}
					}
					while(BanCo[dongdi][cotdi]>0 || ConCo<0);
					system("cls");
					//ykien=1;
					if(ConCo==7)
					{
						printf("\nNGUOI CHOI 1 DA XIN THUA!!!");
						printf("\nCHUC MUNG NGUOI CHOI 2");
						getch();
						system("cls");
						printf("\nHEN GAP LAI!!!");
						return 0;
					}
						if(ykien==1)
						{
							printf("\nHAI BEN HOA NHAU!!!");
							printf("\nHEN GAP LAI!!!");
							getch();
							return 0;
						}
					if(ConCo==9)
					{
						FILE* fp= fopen("LuuBanCoVua.txt","wt");
						if(fp==NULL)
						{
							printf("\nKhong co file nao de luu");
							getch();
							return 0;
						}
						fprintf(fp,"%5d",kiemtra);
						for(int i=0;i<8;i++)
						{
							for(int j=0;j<8;j++)
							{
								fprintf(fp,"%5d",BanCo[i][j]);
							}
						}
						fclose(fp);
						printf("\Ban vua luu lai Ban Co");
						getch();
						return 0;
					}
				}
				while(ykien==0);
			}
			if(kiemtra==-1)
			{
				do
				{
					ykien=2;
					do
					{
						ykien=2;
						printf("\nDEN LUOT NGUOI CHOI 2\n");
						ChonCoAm(BanCo,N,M,dong,cot,ConCo,dongdi,cotdi);
						if(ConCo==-8)
						{
							printf("\nNGUOI CHOI 2 MUON 'CAU HOA'!!!");
							printf("\nNGUOI CHOI 1 DONG Y<BAM 1> KHONG DONG Y <BAM 0>:");
							scanf("%d",&ykien);
							system("cls");
							break;
						}
					}
					while(BanCo[dongdi][cotdi]<0 || ConCo>0);
					system("cls");
					//ykien=1;
						if(ConCo==-7)
						{
							printf("\nNGUOI CHOI 2 DA XIN THUA!!!");
							printf("\nCHUC MUNG NGUOI CHOI 1");
							getch();
							system("cls");
							printf("\nHEN GAP LAI!!!");
							getch();
							return 0;
						}
							if(ykien==1)
							{
								printf("\nHAI BEN HOA NHAU!!!");
								printf("\nHEN GAP LAI!!!");
								return 0;
							}
						if(ConCo==-9)
						{
						FILE* fp= fopen("LuuBanCoVua.txt","wt");
						if(fp==NULL)
						{
							printf("\nKhong co file nao de luu");
							return 0;
						}
						fprintf(fp,"%5d",kiemtra);
						for(int i=0;i<8;i++)
						{
							for(int j=0;j<8;j++)
							{
								fprintf(fp,"%5d",BanCo[i][j]);
							}
						}
						fclose(fp);
						printf("\Ban vua luu lai Ban Co");
						getch();
						return 0;
						}
					}
					while(ykien==0);
						
			}
			Change(BanCo,N,M,dong,cot,dongdi,cotdi,SOCONCO);
			CAPNHAT(BanCo,SOCONCO,TENCO);
			system("cls");
			XuatBanCo(BanCo,N,M,SOCONCO,TENCO);
			if(kiemtra==100)
			{
				printf("\nCHUC MUNG NGUOI CHOI 2 DA CHIEN THANG");
				printf("\nHEN GAP LAI!!!");
				getch();
				return 0;
			}
			if(kiemtra==99)
			{
				printf("\nCHUC MUNG NGUOI CHOI THU 1 DA THANG !!!");
				printf("\nHEN GAP LAI!!!");
				getch();
				return 0;
			}		
		}
		while(kiemtra!=99 || kiemtra!=100);
		getch();
		return 0;
}
int TiepTuc()
{

		int BanCo[8][8],N=8,M=8;
		int SOCONCO[64];
		char TENCO[64];
		int kiemtra=-1;
		int dong,cot,dongdi,cotdi;
		int ConCo=0;
		FILE* fp= fopen("LuuBanCoVua.txt","rt");
		if(fp==NULL)
		{
			printf("\nKhong co VAN CO nao duoc luu truoc do!");
			return 0;
		}
		fscanf(fp,"%d",&kiemtra);
		kiemtra=-kiemtra;
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				fscanf(fp,"%d",&BanCo[i][j]);
			}
		}
		fclose(fp);
		//BanCoVua(BanCo,TENCO,SOCONCO);
		CAPNHAT(BanCo,SOCONCO,TENCO);
		/*do
		{
			printf("\nBAM 1:Neu nguoi choi 2 di truoc");
			printf("\nBAM -1:Neu nguoi choi 1 di truoc:");
			scanf("%d",&kiemtra);
		}
		while(!(kiemtra==1 || kiemtra==-1));*/
		system("cls");
		XuatBanCo(BanCo,N,M,SOCONCO,TENCO);
		do
		{
			int ykien=2;
			KiemTraLuotDi(kiemtra,BanCo,N,M);
			if(kiemtra==1)
			{
				do
				{
					do
					{
						ykien=2;
						printf("\nDEN LUOT NGUOI CHOI 1\n");
						ChonCoDuong(BanCo,N,M,dong,cot,ConCo,dongdi,cotdi);
						if(ConCo==8)
						{
							printf("\nNGUOI CHOI 1 MUON 'CAU HOA'!!!");
							printf("\nNGUOI CHOI 2 DONG Y<BAM 1> KHONG DONG Y <BAM 0>:");
							scanf("%d",&ykien);
							system("cls");
							break;
						}
					}
					while(BanCo[dongdi][cotdi]>0 || ConCo<0);
					system("cls");
					//ykien=1;
					if(ConCo==7)
					{
						printf("\nNGUOI CHOI 1 DA XIN THUA!!!");
						printf("\nCHUC MUNG NGUOI CHOI 2");
						getch();
						system("cls");
						printf("\nHEN GAP LAI!!!");
						return 0;
					}
					
						if(ykien==1)
						{
							printf("\nHAI BEN HOA NHAU!!!");
							printf("\nHEN GAP LAI!!!");
							getch();
							return 0;
						}
					if(ConCo==9)
					{
						FILE* fp= fopen("LuuBanCoVua.txt","wt");
						if(fp==NULL)
						{
							printf("\nKhong co file nao de luu");
							return 0;
						}
						fprintf(fp,"%5d",kiemtra);
						for(int i=0;i<8;i++)
						{
							for(int j=0;j<8;j++)
							{
								fprintf(fp,"%5d",BanCo[i][j]);
							}
						}
						fclose(fp);
						printf("\Ban vua luu lai Ban Co");
						getch();
						return 0;
					}
				}
				while(ykien==0);
			}
			if(kiemtra==-1)
			{
				do
				{
					do
					{
						ykien=2;
						printf("\nDEN LUOT NGUOI CHOI 2\n");
						ChonCoAm(BanCo,N,M,dong,cot,ConCo,dongdi,cotdi);
						if(ConCo==-8)
						{
							printf("\nNGUOI CHOI 2 MUON 'CAU HOA'!!!");
							printf("\nNGUOI CHOI 1 DONG Y<BAM 1> KHONG DONG Y <BAM 0>:");
							scanf("%d",&ykien);
							system("cls");
							break;
						}
					}
					while(BanCo[dongdi][cotdi]<0 || ConCo>0);
					system("cls");
					//ykien=1;
					if(ConCo==-7)
						{
							printf("\nNGUOI CHOI 2 DA XIN THUA!!!");
							printf("\nCHUC MUNG NGUOI CHOI 1");
							printf("\nHEN GAP LAI!!!");
							getch();
							return 0;
						}
						
							if(ykien==1)
							{
								printf("\nHAI BEN HOA NHAU!!!");
								printf("\nHEN GAP LAI!!!");
								return 0;
							}
						
						if(ConCo==-9)
						{
						FILE* fp= fopen("LuuBanCoVua.txt","wt");
						if(fp==NULL)
						{
							printf("\nKhong co file nao de luu");
							return 0;
						}
						fprintf(fp,"%5d",kiemtra);
						for(int i=0;i<8;i++)
						{
							for(int j=0;j<8;j++)
							{
								fprintf(fp,"%5d",BanCo[i][j]);
							}
						}
						fclose(fp);
						printf("\Ban vua luu lai Ban Co");
						getch();
						return 0;
						}
					}
					while(ykien==0);
						
			}
			Change(BanCo,N,M,dong,cot,dongdi,cotdi,SOCONCO);
			CAPNHAT(BanCo,SOCONCO,TENCO);
			system("cls");
			XuatBanCo(BanCo,N,M,SOCONCO,TENCO);
			if(kiemtra==100)
			{
				printf("\nCHUC MUNG NGUOI CHOI 2 DA CHIEN THANG");
				printf("\nHEN GAP LAI!!!");
				getch();
				return 0;
			}
			if(kiemtra==99)
			{
				printf("\nCHUC MUNG NGUOI CHOI THU 1 DA THANG !!!");
				printf("\nHEN GAP LAI!!!");
				getch();
				return 0;
			}		
		}
		while(kiemtra!=99 || kiemtra!=100);
		getch();
		return 0;
}
int main()
{
	
	int lenh;
	printf("\n\t\tCHAO MUNG BAN THAM GIA TRO CHOI CO VUA\n");
	do
	{
		printf("\nBAM 1:DE BAT DAU VAN MOI.\nBAM 2:DE TIEP TUC VAN CO: \nBAM 0:XEM HUONG DAN\nBAM -1:THOAT RA\n");
		scanf("%d",&lenh);
	}
	while(lenh!= 1 && lenh != 2 && lenh != 0 && lenh != -1);
	system("cls");
	if(lenh==0)
	{
		FILE* HD = fopen("HuongDan.txt","rt");
		char S[100];
		while(fgets(S,100,HD)!=NULL)
		{
			puts(S);
		}
		fclose(HD);
		do
		{
			printf("\nBAM 1:DE BAT DAU VAN MOI.\nBAM 2:DE TIEP TUC VAN CO:\nBAM -1:THOAT RA\n");
			scanf("%d",&lenh);
		}
		while(lenh != 1 && lenh != 2 && lenh != -1);
		getch();
		system("cls");
	}
	if(lenh == -1)
	{
		printf("\nCHAO TAM BIET!!!\n");
		getch();
		return 0;
	}
	if(lenh==2)
	{
		TiepTuc();
		getch();
	}
	if(lenh==1)
	{
		TaoMoi();
		getch();
	}
	return 0;

}