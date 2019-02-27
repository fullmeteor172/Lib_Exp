#include<iostream.h>
#include<conio.h>
#include<dos.h>
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
}


