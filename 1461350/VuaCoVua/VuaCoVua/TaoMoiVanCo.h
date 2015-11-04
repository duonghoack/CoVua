/*#include #include "XuatBanCo.h"
#include #include "BanCoVua.h"
#include #include "CapNhatCo.h"
#include #include "NuocDiCuaXe.h"
#include #include "NuocDiCuaTuong.h"
#include #include "NuocDiCuaMa.h"
#include #include "NuocDiCuaHau.h"
#include #include "NuocDiCuaVua.h"
#include #include "NuocDiCuaChot.h"
#include #include "ChonCoDuong.h"
#include #include "ChonCoAm.h"
#include #include "KiemTraLuotDi.h"
#include #include "Change.h"
int TaoMoiVanCo(int BanCo[8][8],int SOCONCO[],int TENCO[],int N,int M)
{
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
			int ykien=1;
			KiemTraLuotDi(kiemtra,BanCo,N,M);
			if(kiemtra==1)
			{
				do
				{
					do
					{
						printf("\nDEN LUOT NGUOI CHOI 1\n");
						ChonCoDuong(BanCo,N,M,dong,cot,ConCo,dongdi,cotdi);
					}
					while(BanCo[dongdi][cotdi]>0);
					system("cls");
					if(ConCo==7)
					{
						printf("\nNGUOI CHOI 1 DA XIN THUA!!!");
						printf("\nCHUC MUNG NGUOI CHOI 2");
						system("cls");
						printf("\nHEN GAP LAI!!!");
						return 0;
					}
					if(ConCo==8)
					{
						printf("\nNGUOI CHOI 1 MUON 'CAU HOA'!!!");
						printf("\nNGUOI CHOI 2 DONG Y<BAM 1> KHONG DONG Y <BAM 0>:");
						scanf("%d",&ykien);
						system("cls");
						if(ykien==1)
						{
							printf("\nHAI BEN HOA NHAU!!!");
							printf("\nHEN GAP LAI!!!");
							getch();
							return 0;
						}
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
						printf("\nDEN LUOT NGUOI CHOI 2\n");
						ChonCoAm(BanCo,N,M,dong,cot,ConCo,dongdi,cotdi);
					}
					while(BanCo[dongdi][cotdi]<0);
					system("cls");
					if(ConCo==-7)
						{
							printf("\nNGUOI CHOI 2 DA XIN THUA!!!");
							printf("\nCHUC MUNG NGUOI CHOI 2");
							printf("\nHEN GAP LAI!!!");
							getch();
							return 0;
						}
						if(ConCo==-8)
						{
							printf("\nNGUOI CHOI 2 MUON 'CAU HOA'!!!");
							printf("\nNGUOI CHOI 1 DONG Y<BAM 1> KHONG DONG Y <BAM 0>:");
							scanf("%d",&ykien);
							system("cls");
							if(ykien==1)
							{
								printf("\nHAI BEN HOA NHAU!!!");
								printf("\nHEN GAP LAI!!!");
								return 0;
							}
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
			}		
		}
		while(kiemtra!=99 || kiemtra!=100);
		getch();
}*/