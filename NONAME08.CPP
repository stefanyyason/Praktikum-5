#include <iostream.h>
#include <conio.h>
void main()
{
char hari;
cout<<"masukkan kode hari(a-g) : "; cin>>hari;
if (hari=='a'||hari=='A')
{cout<<"senin";}
else if(hari=='b'||hari=='B')
{cout<<"selasa";}
else if(hari=='c'||hari=='C')
{cout<<"rabu";}
else if(hari=='d'||hari=='D')
{cout<<"kamis";}
else if(hari=='e'||hari=='G')
{cout<<"jumat";}
else if(hari=='f'||hari=='F')
{cout<<"sabtu";}
else if(hari=='g'||hari=='G')
{cout<<"minggu";}
else
cout<<"Maaf kode harinya salah";
getch();
}
