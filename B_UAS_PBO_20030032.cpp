/* 
	Nama  	: Nindya Kusuma Ningrum
	NIM		: 20030032
	Prodi	: Informatika
*/

#include <iostream>
#include <conio.h>
using namespace std;

class BangunRuang
{
  protected:
 	//p(panjang), r(jari-jari), l(lebar)
       double p,r,l;
  public:
       virtual void masukkan()=0;
       virtual void display()=0;
};

//untuk menghitung luas selimut tabung
class selimut_tabung : public BangunRuang
{
   public:
    	void masukkan(void)
   		{
   			cout<<"--------------------------------------\n";
       		cout<<"|   Menghitung Luas Selimut Tabung    |\n";
       		cout<<"--------------------------------------\n";
       		cout<<" Masukkan Angka Yang Diketahui : \n";
       		cout<<" Panjang = "; 
	  		cin>>p;
       		cout<<" Lebar   = "; 
	   		cin>>l;
   		}
   		
    	void display(void)
    	{
       	double selimut;
        selimut = p * l;
       		cout<<"\n----------------------------------------\n";
       		cout<<"Diketahui : Panjang = "<<p;
       		cout<<"\n	    Lebar   = "<<l;   
       		cout<<"\n\nDitanya : Luas Selimut Tabung ";
       		cout<<"\n\nPenyelesaian : ";
       		cout<<"\n\nLuas Selimut Tabung = panjang x lebar ";
       		cout<<"\n                    = "<< p<< " x "<<l;
      	  	cout<<"\n                    = "<<selimut;
       		cout<<"\n----------------------------------------\n";
    	}
};

//untuk menghitung volume tabung
class volume_tabung : public BangunRuang
{
   	public:
		void masukkan(void)
    	{
    		cout<<"---------------------------------\n";
       		cout<<"|    Menghitung Volume Tabung    |\n";
       		cout<<"---------------------------------\n";
       		cout<<" Masukkan Angka Yang Diketahui : \n";
       		cout<<" Jari - Jari = "; 
	   		cin>>r;
       		cout<<" Lebar       = "; 
	   		cin>>l;
    	}
    	
		void display(void)
    	{
       	double volume;
       	volume = 3.14 *r*r * l ;
       		cout<<"\n----------------------------------------\n";
       		cout<<"Diketahui : Jari - jari = "<<r;
       		cout<<"\n	    Lebar   = "<<l;   
       		cout<<"\n\nDitanya : Volume Tabung ";
       		cout<<"\n\nPenyelesaian : ";
       		cout<<"\n\nVolume Tabung = phi x r x r x lebar ";
       		cout<<"\n              = 3,14 x "<<r<< " x " <<r<< " x " <<l;
       		cout<<"\n              = "<<volume;
       		cout<<"\n----------------------------------------\n";
    	}
};

//untuk menghitung selimut + volume tabung
class semua_tabung : public BangunRuang
{
    public:
    	void masukkan(void)
    	{
    		cout<<"----------------------------\n";
       		cout<<"| Menghitung Bangun Tabung |\n";
       		cout<<"----------------------------\n";
       		cout<<" Masukkan Angka Yang Diketahui : \n";
       		cout<<" Panjang     = "; 
	   		cin>>p;
       		cout<<" Lebar       = "; 
	   		cin>>l;
       		cout<<" Jari - Jari = "; 
			cin>>r;
    	}
    	
		void display(void)
    	{
        double selimut,volume;
        selimut = p*l;
        volume = 3.14*r*r*l;
       		cout<<"\n----------------------------------------\n";
       		cout<<"Diketahui : Panjang	= "<<p;
       		cout<<"\n            Jari - jari = "<<r;
       		cout<<"\n	    Lebar   	= "<<l;   
       		cout<<"\n\nDitanya : Luas Selimut Tabung ";
       		cout<<"\n          Volume Tabung ";
       		cout<<"\n\nPenyelesaian : ";
       		cout<<"\n\nLuas Selimut Tabung = panjang x lebar ";
       		cout<<"\n                    = "<< p<< " x "<<l;
       		cout<<"\n                    = "<<selimut;
       		cout<<"\n\nVolume Tabung = phi x r x r x lebar ";
       		cout<<"\n              = 3.14 x "<<r<< " x " <<r<< " x " <<l;
       		cout<<"\n              = "<<volume;
       		cout<<"\n----------------------------------------\n";
    	}
};

int main()
{
	system("cls");
	selimut_tabung selimut;
	volume_tabung volume;
	semua_tabung tabung;

BangunRuang *pilih[3];
pilih[0]=&selimut;
pilih[1]=&volume;
pilih[2]=&tabung;

int pilihan;
while(1)
{
system("cls");
  cout<<"------------------------------------";
  cout<<"\n|   WELCOME TO PROGRAM APLIKASI    |\n";
  cout<<"------------------------------------";
  cout<<"\n|  MENGHITUNG BANGUN RUANG TABUNG  |\n";
  cout<<"------------------------------------\n";
  cout<<"| 1) Luas Selimut Tabung           |\n\n";
  cout<<"| 2) Volume Tabung		   |\n\n";
  cout<<"| 3) Luas Selimut + Volume Tabung  |\n";
  cout<<"------------------------------------\n";
  cout<<"Masukkan Pilihan: ";
  cin>>pilihan;
  
  if(pilihan==1){
          pilih[0]->masukkan();
          pilih[0]->display();
          getch();
          }
  else if (pilihan==2){
          pilih[1]->masukkan();
          pilih[1]->display();
          getch();
          }
  else if (pilihan==3){
          pilih[2]->masukkan();
          pilih[2]->display();
          getch();
          }
  else
     exit(1);
}}

