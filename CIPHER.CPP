#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iomanip.h>
#include<dos.h>
struct books{
             int bookid;
	     char bookname[100];
	     char authorname[100];
	    }ob[10];
ob[0].id=1;
strcpy(ob[0].bookname,"Ruined");
strcpy(ob[0].authorname,"Paula Morris");
ob[1].id=2;
strcpy(ob[1].bookname,"Crooked House");
strcpy(ob[1].authorname,"Agatha Christtie");
ob[2].id=3;
strcpy(ob[2].bookname,"The Hobbit");
strcpy(ob[2].authorname,"Tolkien");
ob[3].id=4;
strcpy(ob[3].bookname,"Famous Five");
strcpy(ob[3].authorname,"Enid Blyton");
ob[4].id=5;
strcpy(ob[4].bookname,"Paper Towns");
strcpy(ob[4].authorname,"John Green");
ob[5].id=6;
strcpy(ob[5].bookname,"Jane Eyre");
strcpy(ob[5].authorname,"Charlotte Bronte");
ob[6].id=7;
strcpy(ob[6].bookname,"Emma");
strcpy(ob[6].authorname,"Jane Austen");
ob[7].id=8;
strcpy(ob[7].bookname,"Fablehaven");
strcpy(ob[7].authorname,"Brandon Mull");
ob[8].id=9;
strcpy(ob[8].bookname,"The Grand Sophy");
strcpy(ob[8].authorname,"Georgette Heyer");
ob[9].id=10;
strcpy(ob[9].bookname,"Twilight");
strcpy(ob[9].authorname,"Stephanie Meyer");


void searchforbook()
{
 char temp[100];
 cout<<"\nEnter book name:"
 gets(temp);
 for(int i=0; i<10; i++)
 {
  if(strcmp(ob[i].bookname, temp)==0)
  {
   print3();
   cout<<"\nDo you want to add book to cart?"
   cout<<"\n[1] Yes \n[2]No";
   cin>>choice3;
   if(choice3==1)
   {
    b[k].ID=ob[i].id;
    strcpy(b[k].bookname, ob[i].bookname);
    strcpy(b[k].authorname, ob[i].authorname);
    k++;
    numberofbooksborrowed++;
   }
  }
  else
  {
   cout<<"Book not found.";
   searchfor();
  }
 }
}

void searchforauthor()
{
 char temp[100]; int k=0;
 cout<<"\nEnter author name:"
 gets(temp);
 for(int i=0; i<10; i++)
 {
  if(strcmp(ob[i].authorname, temp)==0)
  {
   print3();
   k=1;
  }
 }
 if(k=0)
 {
  cout<<"Author not found.";
  searchfor();
 }
}

void searchbyid()
{
 int temp[100];
 cout<<"\nEnter book code:"
 cin>>temp;
 for(int i=0; i<10; i++)
 {
  if(strcmp(ob[i].bookid, temp)==0)
  {
   print3();
  }
  else
  {
   cout<<"Book not found.";
   searchfor();
  }
 }
}

void searchfor()
{
 int choice;
 nhike:
 cout<<"\nWhat do you wish to search by?";
 cout<<"\n[1] Search by Book Name";
 cout<<"\n[2] Search by Author Name";
 cout<<"\n[3] Search by Book Code";
 cout<<"\n[4] Exit to Main Menu";
 cout<<"\nEnter choice:";
 cin>>choice;
 switch(choice):
 {
  case(1):
	  searchforbook();
	  break;
  case(2):
	  searchforauthor();
	  break;
  case(3):
	  searchbyid();
	  break;
  case(4):
	  main();
	  break;
  default:
	  cout<<"Invalid option, try again?"
	  goto nhike;
 }
}

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

  void print3()
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

   cout<<setw(5);
   cout.setf(ios::left);
   cout<<serialno;
   serialno++;
   cout<<setw(40);
   cout.setf(ios::left);
   puts(ob[i].bookname);
   cout<<setw(40);
   cout.setf(ios::left);
   puts(ob[i].authorname);
   cout<<setw(5);
  cout.setf(ios::left);
  cout<<ob[i].id;
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

char username[20];//entered name will be stored during initial splash screen
int sl=0;
//-------------------------------------------------------------------------//
void menu(){
char in;
clrscr();
cout<<"================================================================================";
cout<<endl<<"		         THE IMPERIAL LIBRARY OF CORUSCANT                       ";
cout<<endl<<"================================================================================";
cout<<endl<<endl<<"Main Menu:";
cout<<endl<<"[1] Check in";
cout<<endl<<"[2] Check out";
cout<<endl<<"[3] Search for Books";
cout<<endl<<"[X] Exit";
beg:
cout<<endl<<endl<<"Input: ";
cin>>in;
if(in=='1'){
	//checkin();
	}
if(in=='2'){
	//checkout();
	}
if(in=='3'){
	//srch();
	}
if(in=='X'){
	}
else{
	cout<<"Sorry, Invalid Entry Try again. [X] to exit."<<in;
	goto beg;
	}
}
//-------------------------------------------------------------------------//
void login(){

int pas;
cout<<"Welcome back user, enter credentials to continue: "<<endl;
cout<<endl<<"User Name: ";
cin>>username;
cout<<endl<<"Enter Password:";
cin>>pas;
cout<<endl<<endl<<"Good to see you again, "<<username;
delay(1000);
sl=1;
menu();
}
//-------------------------------------------------------------------------//
void header(){
clrscr();
cout<<"================================================================================";
cout<<endl<<"		         THE IMPERIAL LIBRARY OF CORUSCANT                       ";
cout<<endl<<"================================================================================";
cout<<endl<<endl;
login();
}

//-------------------------------------------------------------------------//
void main(){
clrscr();
int i,numberofborrowedbooks=0,serialno.bookcode2,j,choice,choice2,amt,k=0,choice3;
cout<<endl<<endl<<"The_cipher_pre-aplha"<<endl<<endl;
textcolor(10);
cprintf("Authors:-");
cout<<endl<<"* RogueTerminal"<<endl<<"* Chewbacca2002"<<endl<<"* Just Kriti";
cout<<endl<<endl<<"Initializing";
delay(2000);
cout<<".";
delay(1500);
cout<<".";
delay(1000);
cout<<".";
header();
checkin();
borrow();
 }
