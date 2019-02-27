#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
struct cart{
	     char bookname[100];
	     char authorname[100];
	     int ID;
	     }b[10];
struct checkedinbooks{
	     char bookname[100];
	     char authorname[100];
	     int ID;
	     }a[10];



void delete()
{
 for(i=0;i<numberofborrowedbooks;i++)
 {
  if(a[i].ID==bookcode2)
  {
   for(j=i;j<numberofborrowedbooks;j++)
   {
    a[i]=a[i+1];

   }
  }
 }




void print1()
{
  cout<<setw(5);
  cout.setf(ios::left);
  cout<<"Serialno";
  cout<<setw(40);
  cout.setf(ios::left);
  cout<<"Book Name";
  cout<<setw(40);
  cout.setf(ios::left);
  cout<<"Author's Name";
  cout<<endl;
  cout<<setw(5);
  cout.setf(ios::left);
  cout<<"Book ID";
  for(i=0,serialno=1;i<numberofborrowedbooks;i++)
  {
   cout<<setw(5);
   cout.setf(ios::left);
   cout<<serialno;
   serialno++;
   cout<<setw(40);
   cout.setf(ios::left);
   puts(a[i].bookname);
   cout<<setw(40);
   cout.setf(ios::left);
   puts(a[i].authorname);
   cout<<setw(5);
  cout.setf(ios::left);
  cout<<a[i].ID;
  cout<<endl;
  }
}

void print2()
{
  cout<<setw(5);
  cout.setf(ios::left);
  cout<<"Serialno";
  cout<<setw(40);
  cout.setf(ios::left);
  cout<<"Book Name";
  cout<<setw(40);
  cout.setf(ios::left);
  cout<<"Author's Name";
  cout<<setw(5);
  cout.setf(ios::left);
  cout<<"Book ID";
  cout<<endl;
  for(i=0,serialno=1;i<numberofborrowedbooks;i++)
  {
   cout<<setw(5);
   cout.setf(ios::left);
   cout<<serialno;
   serialno++;
   cout<<setw(40);
   cout.setf(ios::left);
   puts(b[i].bookname);
   cout<<setw(40);
   cout.setf(ios::left);
   puts(b[i].authorname);
   cout<<setw(5);
  cout.setf(ios::left);
  cout<<a[i].ID;
  cout<<endl;
  }







void checkin()
{
 cout<<" You have borrowed these books";
 cout<<endl<<endl;
 print1();
 cout<<" Do you want to return books?";
 cin>>choice;
 if(choice==1)
 {
  cout<<"Enter book code. To stop press 0";
  cat:
  cin>>bookcode2;
  if(bookcode2==0)
  goto fan;
  else
  {
   delete();
   numberofborrowedbooks--;
   goto cat;
  }
 }
 fan:
 print1();
}


void borrow()
{
 cout <<"These are books in your cart";
 print2();
 cout<<"Do you want to check them out?Press 1 for yes and 0 for no";
 cin>>choice2;
 if(choice2==1)
 {
  amt= numberofborrowedbooks*30;
  cout<<" Amount to be paid: Rs "<<amt;
 }


 void main()
 {
   int i,numberofborrowedbooks,serialno.bookcode2,j,choice,choice2,amt;
  checkin();
  borrow();
 }
