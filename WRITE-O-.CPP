#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
#include<process.h>

void main()
{
	clrscr();

	char S[13]="Write-o-Meter";
	gotoxy(35,10);

	for(int t=0; t<13; t++)
	{
		cout<<S[t];
		delay(200);
	}
	cout<<"\n\nPress any key to continue";
	getch();
	clrscr();

	int ctr=1;
	int X=0,e=0;
	char username[10];
	char pass[8]="arpit_97";
	char pwd[8];
	cout<<"\n";
	while(ctr<4)
	{
		clrscr();
		{
			/*Draw Box*/
			gotoxy(25,5);

			for(int l=0; l<35; l++)
			{
				cout<<"_";
			}
			int Y=6;
			gotoxy(24,Y);
			for(int c=0; c<13; c++)
			{
				gotoxy(24,Y);
				cout<<"|";
				Y++;
			}
			gotoxy(25,18);
			for(int Q=0; Q<35; Q++)
			{
				cout<<"_";
			}
			int Z=6;
			gotoxy(60,10);
			for(int C=0; C<13; C++)
			{
			gotoxy(60,Z);
			cout<<"|";
			Z++;
			}
			gotoxy(27,9);
			cout<<"Username: __________";
			gotoxy(27,14);
			cout<<"Password: __________";

			/*Box Drawing ends here*/

			}
		gotoxy(37,9);
		gets(username);
		if(strcmp(username,"ArpitKumar")==0)
		{
			gotoxy(37,14);
			for(int q=0; q<8; q++)
			{
				pwd[q]=getch();
				cout<<"*";
				if(pwd[q]==pass[q])
				X++;
			}
			if(X==8)
			{
				gotoxy(1,2);
				cout<<"You have sucessfully logged in";
				getch();
				goto label;
			}
			else
			{
				gotoxy(1,2);
			cout<<"\n Wrong Password"<<endl;
			getch();
			e++;
			}
		}
		else
		{
			if(e==0)
			{
				gotoxy(1,2);
				cout<<"Wrong Username"<<endl;
				getch();
			}
		}
		e=0;
		ctr++;
	}

	label:
	clrscr();
	char bar = 219;
	gotoxy(30,9);
	cout<<"Loading...... Please Wait";
	gotoxy(30,11);
	for(int c=0; c<21; c++)
	{
		cout<<"-";
	}
	gotoxy(30,13);
	for(int C=0; C<21; C++)
	{
		cout<<"-";
	}
	gotoxy(30,12);
	for(int r=0; r<19; r++)
	{
		delay(500);
		cout<<bar;
	}
	delay(2000);
	cout<<bar;

	cout<<"\n\n\nPress any key to continue";
	getch();

	clrscr();
	char ch[46]="the quick brown fox jumped over the lazy dog";
	char CH[46];
	char health_bar[11]="##########";
	int y=0;
	int P=0;
	clock_t start,end,START,END;
	cout<<"\n";
	puts(ch);
	gotoxy(40,10);
	puts(health_bar);
	gotoxy(20,10);
	cout<<"Speed Bar -";
	cout<<"\n\n";
	gotoxy(1,20);
	cout<<"Note - The points on the speed bar reduces if you type and individual character slow. if you make a mistake then a beep sound will be heard. The correct letters will be replaced by stars(*)";
	START = clock();
	for(int i=0; i<44; i++)
	{
		start = clock();
		gotoxy(i,0);
		CH[i] = getch();
		end = clock();
		cout<<"\n";
		gotoxy(7,20);
		if((end-start)>=10)
		{
			health_bar[y]=' ';
			gotoxy(40,10);
			puts(health_bar);
			y++;
		}
		if(CH[i]==ch[i])
		{
			ch[i]='*';
			clrscr();
			cout<<"\n";
			puts(ch);
			gotoxy(20,10);
			cout<<"Speed Bar -";
			gotoxy(40,10);
			puts(health_bar);
		}
		else
		{
			cout<<"\a";
			i--;
			P++;
		}
		if(y==10)
		{
			clrscr();
			cout<<"\a";
			cout<<"\nSlow typer! You have lost!";
			getch();
			exit(1);
		}
	}
	END = clock();
	cout<<"\n\nResult:";
	cout<<"\n\nYou completed the paragraph in "<<(END-START)/CLK_TCK<<" secs";
	cout<<"\nYou made "<<P<<" mistakes";
	cout<<"\nYour speed is "<<9/((END-START)/CLK_TCK)<<" words per sec";

	getch();
}


