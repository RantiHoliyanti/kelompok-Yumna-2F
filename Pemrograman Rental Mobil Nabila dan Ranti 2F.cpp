#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip> // sebagai library untuk membuat tabel
#include <ctime>  // sebagai pemanggil library time

using namespace std;

void loading()  // sebagai prosedur untuk menampilkan loading
{
 for(int load=0;load<100;load++)
    {
  cout<<endl<<"Loading . . . "<<load<<"%"<<endl;
        cout <<"\nPlease wait . . .";
   system("cls");
    }
}
void hias1()
{
 system ("cls");
 cout                <<"\t\t________________________________________"<<endl;
 cout                <<"\t\t|           Kelompok Yumna             |"<<endl;
 cout<<"Hy.... "     <<"\t\t|______________________________________|"<<endl;
 cout<<"Welcome To " <<"\t|        1. Nabila Nur Fransiska R     |"<<endl;
 cout<<"Our Program"  <<"\t|          2. Ranti Holiyanti          |"<<endl;
 cout                <<"\t\t|______________________________________|"<<endl;
 cout<<"\nLOADING COMPLETE"<<endl;
        system ("pause");
        system ("cls");

}
void hias2() // sebagai fungsi untuk menampilkan menu
{
 cout<<"\n================================ PILIHAN MENU ==================================\n\n\n";
 cout<<"1. Sewa Mobil\n";
 cout<<"2. Keluar\n\n\n";

}

void daftar() // sebagai penampil tabel mobil mobil yang tersedia
{
 cout<< "\n==============================  SEWA MOBIL =================================\n\n";
 cout<< "-------------------------------------------------------------------------\n";
 cout<< " \t\t\t\t\t\tpilih paket \n";
 cout<< "-------------------------------------------------------------------------\n";
 cout<< " Kode \t\tJenis\t\t1. Paket Harian\t\t2. Paket Bulanan\n";
 cout<< "-------------------------------------------------------------------------\n";
 {
 cout<<setiosflags(ios::left)<<setw(2)<<" "<<setiosflags(ios::left)<<setw(13)<<"1"<<setiosflags(ios::left)<<setw(17)<<"Alphard";
 cout<<setiosflags(ios::left)<<setw(25)<<"Rp. 1.500.000,-"<<setiosflags(ios::left)<<setw(20)<<"Rp. 20.000.000,-";
 cout<<setiosflags(ios::left)<<setw(3)<<"\n "<<setiosflags(ios::left)<<setw(13)<<"2"<<setiosflags(ios::left)<<setw(17)<<"Innova";
 cout<<setiosflags(ios::left)<<setw(25)<<"Rp.   800.000,-"<<setiosflags(ios::left)<<setw(20)<<"Rp. 10.000.000,-";
 cout<<setiosflags(ios::left)<<setw(3)<<"\n "<<setiosflags(ios::left)<<setw(13)<<"3"<<setiosflags(ios::left)<<setw(17)<<"Avanza";
 cout<<setiosflags(ios::left)<<setw(25)<<"Rp.   700.000,-"<<setiosflags(ios::left)<<setw(20)<<"Rp.  9.000.000,-";
 cout<<setiosflags(ios::left)<<setw(3)<<"\n "<<setiosflags(ios::left)<<setw(13)<<"4"<<setiosflags(ios::left)<<setw(17)<<"Mobilio";
 cout<<setiosflags(ios::left)<<setw(25)<<"Rp.   600.000,-"<<setiosflags(ios::left)<<setw(20)<<"Rp.  8.000.000,-";
 cout<<setiosflags(ios::left)<<setw(3)<<"\n "<<setiosflags(ios::left)<<setw(13)<<"5"<<setiosflags(ios::left)<<setw(17)<<"Yaris";
 cout<<setiosflags(ios::left)<<setw(25)<<"Rp.   500.000,-"<<setiosflags(ios::left)<<setw(20)<<"Rp.  7.000.000,-";
 }
 cout << "\n-------------------------------------------------------------------------\n\n";

}

void input1(char ktp[20], char nm[20],char almt[20],char tlp[12])
{
 cout<<"\nMasukkan Identitas Anda Terlebih Dahulu\n\n\n";
 cout<<"> Nomor KTP  = ";cin>>ktp;
 cout<<"\n> Nama Anda  = ";cin>>nm;
 cout<<"\n> Alamat Anda  = ";cin>>almt;
 cout<<"\n> Nomor Telepon Anda = ";cin>>tlp;
}

void input2(int &hrg,long &dp,int &hr)
{
 int pil,paket;
do
{
 cout<<"> Masukkan Kode Jenis Mobil = ";cin>>pil;
 if (pil==1)
 {
  cout<<"\t> Pilih Paket Harga = ";cin>>paket;
  {
   if (paket==1)
   {
    hrg=1500000;
    cout<<" > Jumlah Hari     = ";cin>>hr;
   }
   else if (paket==2)
   {
    hrg=20000000;
    cout<<" > Jumlah Bulan     = ";cin>>hr;
   }
   else
   { cout<<"Inputan Salah !!!\n";
    hrg=0;
   }
  }
 }
 else if (pil==2)
 {
  cout<<"\t> Pilih Paket Harga = ";cin>>paket;
  {
   if (paket==1)
   {
    hrg=800000;
    cout<<" > Jumlah Hari     = ";cin>>hr;
   }
   else if (paket==2)
   {
    hrg=10000000;
    cout<<" > Jumlah Bulan     = ";cin>>hr;
   }
   else
   { cout<<"Inputan Salah !!!\n";
    hrg=0;
   }
  }
 }
 else if (pil==3)
 {
  cout<<"\t> Pilih Paket Harga = ";cin>>paket;
  {
   if (paket==1)
   {
    hrg=700000;
    cout<<" > Jumlah Hari     = ";cin>>hr;
   }
   else if (paket==2)
   {
    hrg=9000000;
    cout<<" > Jumlah Bulan     = ";cin>>hr;
   }
   else
   { cout<<"Inputan Salah !!!\n";
    hrg=0;
   }
  }
 } else
 if (pil==4)
 {
  cout<<"\t> Pilih Paket Harga = ";cin>>paket;
  {
   if (paket==1)
   {
    hrg=600000;
    cout<<" > Jumlah Hari     = ";cin>>hr;
   }
   else if (paket==2)
   {
    hrg=8000000;
    cout<<" > Jumlah Bulan     = ";cin>>hr;
   }
   else
   { cout<<"Inputan Salah !!!\n";
    hrg=0;
   }
  }
 } else
 if (pil==5)
 {
  cout<<"\t> Pilih Paket Harga = ";cin>>paket;
  {
   if (paket==1)
   {
    hrg=500000;
    cout<<" > Jumlah Hari     = ";cin>>hr;
   }
   else if (paket==2)
   {
    hrg=7000000;
    cout<<" > Jumlah Bulan     = ";cin>>hr;
   }
   else
   { cout<<"Inputan Salah !!!\n";
    hrg=0;
   }
  }
 }
 else
 {
 cout<<"\t\nInputan Salah !!! Masukkan Angka 1 - 5 Saja\n\n" ;
 }
}
 while((pil>6 || pil<1));

 cout<<"> Jumlah DP      = Rp. ";cin>>dp;
}

void out(char ktp[20],char nm[20],char almt[20],char tlp[12],long sewa,int dp,long tot,int &a)
{
 time_t now = time(0);  //inisialisasi waktu yang disimpan di variabel time_t_now

 cout<<"\n\t\t\t\t Bukti Pembayaran\n";
 cout<<"\t\t\t\t Yumna Rental Car\n";
 cout<<"\t\t+==++==++==++==++==++==++==++==++==++==++==++==+\n\n";
 cout<<"No. Reg = "<<a;
 cout<<"\nTanggal Transaksi = "<<ctime(&now)<<endl;
 cout<<"================================================================================\n";
 cout<<"> Nomor KTP  = "<<ktp;
 cout<<"\n> Nama Anda  = "<<nm;
 cout<<"\n> Alamat Anda  = "<<almt;
 cout<<"\n> Nomor Telepon Anda = "<<tlp<<endl<<endl;
 cout<<"================================================================================";
 cout<<"\n> TOTAL HARGA = Rp."<<sewa<<endl;
 cout<<"================================================================================";
 cout<<"\n> Jumlah DP  = Rp."<<dp;
 cout<<"\n> Sisa Pembayaran = Rp."<<tot<<endl;
 cout<<"================================================================================";
}

int jmlhsewa(int hrg, int h)
{
 int sewa;
  sewa=hrg*h;
  return (sewa);
}

int harga(int sewa,int dp)
{
 int tot;
 tot = sewa-dp;
 return (tot);
}

main()
{
 char nm[20],ktp[16],almt[30],tlp[12],ulang;
 int hrg,hari,pilih,a=1;
 long dp,sewa,tot;
 time_t tanggal;

 loading();
    hias1();
    hias2();

 do
 {
 cout<<"\n> Pilih Menu = ";cin>>pilih;
  if (pilih==1)
  { do
   {
   system ("cls");
      input1(ktp,nm,almt,tlp);
    system ("cls");
   daftar();
   input2(hrg,dp,hari);
   sewa= jmlhsewa(hrg,hari);
   tot= harga(sewa,dp);
   system("cls");
   out(ktp,nm,almt,tlp,sewa,dp,tot,a);
   cout<<"\n Apakah Sudah Selesai Menyewa ? [Y/N] = ";cin>>ulang;
   a++;
   system("cls");
   }
   while ((ulang=='N') || (ulang=='n'));
   system ("cls");
   cout<<"\n\t\tThank You Very Much. See You Soon ....\n\n\n";
  }

  else if (pilih==2)
  {
   system ("cls");
   cout<<"\n\t\tThank You Very Much. See You Soon ....\n\n\n";
  }
  else
  {
   cout<<"Inputan Tidak Tersedia !!! Masukkan Angka 1 atau 2 Saja";
  }
 }
 while ((pilih<1) || (pilih>2));

 getch();

}

