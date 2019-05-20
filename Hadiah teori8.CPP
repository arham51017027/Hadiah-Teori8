#include <iostream.h>
#include <comio.h>
#include <stdio.h>

void main(){
char huruf,lagi, nm[20];
float nilai,Nmid, Nfinal,NA,Ttl_mid,Ttl_final,Ttl_tugas,jml=0;
int i=1;
atas:
cout<<"Menghitung Nilai Akhir Mahasiswa\n ";
cout<<"------------------------------------\n";
cout<<"Masukkan Nama Mahasiswa ="; cin>>nm;

   do
   { cout<<" Masukkan Nilai Tugas" <<i<<"=" ; cin>>nilai;
   jml = jml+nilai;
   i++;}
   while (i<=5);

cout<<" Masukkan Nilai Mid Mahasiswa= ";cin>>Nmid;
cout<<" Masukkan Nilai final Mahasiswa= ";cin>> Nfinal;

Ttl_tgs = 0.3 * (jml/5);
Ttl_mid = 0.3 * Nmid;
Ttl_final = 0.4 * Nfinal;
Na= Ttl_tgs + Ttl_mid + Ttl_final;

if ((NA >=80) && (NA<=100))
huruf = 'A');

else if ((NA >= 70) && (NA<=79))
huruf = 'B';

else if ((NA >=60) && (NA<=69))
huruf = 'C';

else if ((NA>=50) && (NA<= 59))
huruf ='D';

else if (NA < 50)
huruf = 'E';

cout<<endl;
cuut<<endl;
cout<<"Menghituung Nilai akhir Mahasiswa \n";
cout<<"---------------------------------\n";
cout<<" Nama Mahasiswa        = "<<nm<<endl;
cout<<" Total Nilai Tugas     = "<<Ttl_tgs<<endl;
cout<<" Total Nilai mid       = "<<Ttl_mid<<endl;
cout<<" Total Nilai final     = "<<Ttl_final<<endl;
cout<<" Nilai Akhir Mahasiswa = "<<NA<<endl;
cout<<" Nilai huruf Mahasiswa = "<<huruf<<endl;
cout<<" Ingin Menginput Lagi ? [Y/T]";
lagi = getch ();
clrscr();
if (lagi== 'Y' || lagi == 'Y') goto atas;

getch ();
}


