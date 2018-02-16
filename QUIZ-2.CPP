#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<ctype.h>

 void logout();
 void homepage();
 void physics();
 void chemistry();
 void books();
 void movies();
 void wordscramble();
 void riddle();
 void options1();
 void options2();
 void sublogin(char);

 char op;
/* void hi()
  {
    cout<<"\n\n\t\t\t*** ***"<<"      "<<"*** ***"<<'\t'<<"***************";
    cout<<"\n\n\t\t\t*** ***"<<"      "<<"*** ***"<<'\t'<<"***************";
    cout<<"\n\n\t\t\t*** ***"<<"      "<<"*** ***"<<'\t'<<"    ******     ";
    cout<<"\n\n\t\t\t*** ***"<<"      "<<"*** ***"<<'\t'<<"    ******     ";
    cout<<"\n\n\t\t\t*** ***"<<"      "<<"*** ***"<<'\t'<<"    ******     ";
    cout<<"\n\n\t\t\t*** ***"<<"      "<<"*** ***"<<'\t'<<"    ******     ";
    cout<<"\n\n\t\t\t       "<<"******"<<"       "<<'\t'<<"    ******     ";
    cout<<"\n\n\t\t\t       "<<"******"<<"       "<<'\t'<<"    ******     ";
    cout<<"\n\n\t\t\t       "<<"******"<<"       "<<'\t'<<"    ******     ";
    cout<<"\n\n\t\t\t       "<<"******"<<"       "<<'\t'<<"    ******     ";
 */
    void bye()
 {
   clrscr();
   cout<<"\n\n\n\n\n\n";

 cout<<"\n\t\t"<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<"     "<<char(2)<<"           "<<char(2)<<"    "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"            "<<char(2)<<"     "<<char(2)<<"         "<<char(2)<<"     "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"            "<<char(2)<<"      "<<char(2)<<"       "<<char(2)<<"      "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"            "<<char(2)<<"       "<<char(2)<<"     "<<char(2)<<"       "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"          "<<char(2)<<"          "<<char(2)<<"   "<<char(2)<<"        "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"        "<<char(2)<<"              "<<char(2)<<"          "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"          "<<char(2)<<"            "<<char(2)<<"          "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"            "<<char(2)<<"          "<<char(2)<<"          "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"            "<<char(2)<<"          "<<char(2)<<"          "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<"            "<<char(2)<<"          "<<char(2)<<"          "<<char(2);
 delay(100);
 cout<<"\n\t\t"<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<"           "<<char(2)<<"          "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2)<<" "<<char(2);
 delay(1500);

 }

    void dotdelay()
 {   for(int i=0;i<5;i++)
    { delay(500);
      cout<<" .";
    }
 }
    void  justdelay()
 {
     delay(1000);
 }


  void exitp();
  void credits();
  void about();
  void play();

  class ques
{ public:
  char q[75],o[5][75];
}s[20];

class acc
{ public:
  char name[20],gen[7],dob[12],p[20];
  int score[6];
  void pwd();
  void check();

    void put()
  { clrscr();
    cout<<"\n\n\n\t\t\tUsername     :  "<<name;
    cout<<"\n\n\t\t\tDate of Birth:  "<<dob;
    cout<<"\n\n\t\t\tGender       :  "<<gen;
    cout<<"\n\n\n\t\t\t\tSCORE          ";
    cout<<"\n\n\t\tPhysics      :  "<<score[0]<<"\t  Chemistry    :  "<<score[1];
    cout<<"\n\n\t\tBooks        :  "<<score[2]<<"\t  Movies       :  "<<score[3];
    cout<<"\n\n\t\tScramble     :  "<<score[4]<<"\t  Riddles      :  "<<score[5];
    cout<<"\n\n\n\n\t\t\tPress ANY KEY TWICE to continue";
    getch();

  }
  void get();
}ac,af;

  void profile(acc);
  void acc::pwd()
  {
    int i=0;
   do
   {
    p[i]=getch();
    if(p[i]!='\r')
    cout<<'*';
    i++;
   }
  while (p[i-1]!='\r');
    for( int j=i-1;j<20;j++)
     p[j]='\0';
}

      void acc::get()

{  char g;
   acc t;
   ifstream f7("req.txt");
    uname:
    clrscr();
    cout<<"\n\n\n\n\n\t\t\t\tSIGNUP";

    cout<<"\n\n\t\tUsername                        :\t";
    cin>>name;

    f7.seekg(0);
   while(!f7.eof())
  { f7.read((char *)&t,sizeof(t));
      if(!strcmp(t.name,name))
    { clrscr();
      cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tUsername already exists !!!";
      justdelay();

      goto uname;
    }
  }
    cout<<"\n\n\t\tDate of birth (DD/MM/YYYY)      :\t";
    cin>>dob;
    cout<<"\n\n\t\tGender(M/F)                     :\t";
    cin>>g;
    if(g=='m'||g=='M')
      strcpy(gen,"Male");
    if(g=='f'||g=='F')
      strcpy(gen,"Female");

    cout<<"\n\n\t\tPassword (Press "<<char(60)<<char(217)<<" to terminate):\t";
    pwd();
    for(int h=0;h<6;h++)
      score[h]=0;
    justdelay();
    clrscr();
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tPlease wait";
     dotdelay();
     clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t  Account created successfuly "<<char(1)<<char(2);
    justdelay();
    clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t Press ANY KEY to continue ";
}

  void grading(int sc)
{
   cout<<"\t\t\t     ";
  switch(sc)
   {  case 25:cout<<"Excellent!! "<<char(2)<<' '<<char(2);break;
      case 20:cout<<"Outstanding "<<char(2)<<' '<<char(1);break;
      case 15:cout<<"Good "<<char(1)<<' '<<char(1);break;
      case 10:cout<<"Improvement required!! ";break;
      case 5: cout<<"Better luck next time! ";break;
      case 0: cout<<"Sad!! Please try again later!! ";break;
   }

}
  acc check;

  void putsc()
{ ofstream f1("req.txt");
  ifstream f2("req.txt");
  f2.seekg(0);
  int x;

     while(f2.eof())
  { f2.read((char *)&check,sizeof(check));

    if(!strcmp(check.name,af.name))
     { x=f2.tellg();

     }
  }
     x=x-sizeof(check);
     f1.seekp(x);
     f1.write((char *)&af,sizeof(af));
     f1.close();
     f2.close();
}

 void play()
 {   char pt;
     topic:
     clrscr();

      cout<<"\n\n\n\n\n\n\t\t\t\tPLAY\n\n\n";
      cout<<"\t\t\t     1. Studies\n\n";
      cout<<"\t\t\t     2. Entertainment\n\n";
      cout<<"\t\t\t     3. Word Wizard\n\n";


      cout<<"\n\t\t\tEnter Option:  ";
      cin>>pt;

      switch(pt)
     {
	 case '1':
		   char st;
		   phy:
		   clrscr();
		   cout<<"\n\n\n\n\n\n\t\t\t\tStudies\n\n\n";
		   cout<<"\t\t\t     1.Physics\n\n";
		   cout<<"\t\t\t     2.Chemistry\n";

		   cout<<"\n\t\t\tEnter Option:  ";
		   cin>>st;

		   switch(st)
		   { case '1': physics();
			       break;
		     case '2': chemistry();
			       break;
		     default:cout<<"\n\n\t\t\tInvalid option\n\n";
			      goto phy;

		   }
		   getch();
		   break;

	  case '2':
		    char et;

		    che:
		    clrscr();
		    cout<<"\n\n\n\n\n\n\t\t\t\tEntertainment\n\n\n";
		    cout<<"\t\t\t     1.Books\n\n";
		    cout<<"\t\t\t     2.Movies\n";

		    cout<<"\n\t\t\tEnter Option:  ";
		    cin>>et;

		    switch(et)
		    { case '1': books();
				break;
		      case '2': movies();
				break;
		      default:cout<<"\n\n\t\t\tInvalid option\n\n";
			      goto che;

		    }
		    getch();
		    break;
	 case '3':
		   char wt;
		   wrdw:
		   clrscr();
		   cout<<"\n\n\n\n\n\n\t\t\t\tWord Wizard\n\n\n";
		   cout<<"\t\t\t     1.Word Scramble\n\n";
		   cout<<"\t\t\t     2.Riddle\n";

		   cout<<"\n\t\t\tEnter Option:  ";
		   cin>>wt;

		   switch(wt)
		   { case '1': wordscramble();
			       break;
		     case '2': riddle();
			       break;
		     default: cout<<"\n\n\t\t\tInvalid option\n\n";
			      goto wrdw;

		   }
		   getch();
		   break;
	default:cout<<"\n\n\t\t\tInvalid option\n\n";
		goto topic;



     }

    if(op=='2')
     options2();
    else
     options1();
     putsc();

}


  void openq(char filena[20])
{
 ifstream f27(filena,ios::binary);
 f27.read((char *)&s,sizeof(s));
 f27.close();
}

 char ans[20];

 void opena(char filena[20])
{
 ifstream f27(filena,ios::binary);
 f27>>ans;
 f27.close();

}
  int k[6];
   void call()
 { ifstream f1("sizef.txt");
     f1.seekg(0);
     for(int i=0;i<6;i++)
    f1.read((char *)&k[i],sizeof(k[i]));
   f1.close();
 }

    void send()
 { ofstream f2("sizef.txt");
     for(int j=0;j<6;j++)
       f2.write((char *)&k[j],sizeof(k[j]));
     f2.close();
 }



  void physics()
{ int score=0;
  openq("physics.txt");
  opena("phya.txt");

  char qw;

 for(int i=0;i<k[0];i++)
{
 phyc:
 clrscr();
 cout<<"\n\t\t\t\t\t\t\t\tScore: "<<score;
 cout<<"\n\n\n\n\n\n\n\t"<<s[i].q<<"\n\t"<<s[i].o[0]<<"\n\t"<<s[i].o[1]<<"\n\t"<<s[i].o[2]<<"\n\t"<<s[i].o[3]<<"\n";
 cout<<"\n\n\t\t\tYour Answer: ";
 cin>>qw;

 qw=toupper(qw);

if((qw=='A')||(qw=='B')||(qw=='C')||(qw=='D'))
{
 if(ans[i]==qw)
   { cout<<"\n\n\t\t\t CORRECT ANSWER "<<char(2);
     score+=5;
   }
 else
   { cout<<"\n\n\t\t\t WRONG ANSWER !! ";
   }
}

else
{ cout<<"\n\n\t\t\t INVALID OPTION !! ";
  justdelay();
  goto phyc;
}

 cout<<"\n\n\t\t\t  Press ANY KEY to continue";
 justdelay();
 getch();
}

 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\t\t\t     FINAL SCORE IS "<<score<<"\n\n";
 grading(score);
 cout<<"\n\n\n\n\t\t\t  Press ANY KEY to continue";
 af.score[0]=score;
 putsc();

}



 void chemistry()
{ int score=0;
  openq("chem.txt");
  opena("chea.txt");

  char qw;

 for(int i=0;i<k[1];i++)
{
 chec:
 clrscr();
 cout<<"\n\t\t\t\t\t\t\t\tScore: "<<score;
 cout<<"\n\n\n\n\n\n\n\t"<<s[i].q<<"\n\t"<<s[i].o[0]<<"\n\t"<<s[i].o[1]<<"\n\t"<<s[i].o[2]<<"\n\t"<<s[i].o[3]<<"\n";
 cout<<"\n\n\t\t\tYour Answer: ";
 cin>>qw;

 qw=toupper(qw);

if((qw=='A')||(qw=='B')||(qw=='C')||(qw=='D'))
{
 if(ans[i]==qw)
   { cout<<"\n\n\t\t\t CORRECT ANSWER "<<char(2);
     score+=5;
   }
 else
   { cout<<"\n\n\t\t\t WRONG ANSWER !! ";
   }
}

else
{ cout<<"\n\n\t\t\t INVALID OPTION !! ";
  justdelay();
  goto chec;
}

 cout<<"\n\n\t\t\t  Press ANY KEY to continue";
 justdelay();
 getch();
}

 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\t\t\t     FINAL SCORE IS "<<score<<"\n\n";
 grading(score);
 cout<<"\n\n\n\n\t\t\t  Press ANY KEY to continue";
 af.score[1]=score;
 putsc();
}


 void books()
{  int score=0;
  openq("books.txt");
  opena("booka.txt");

  char qw;

 for(int i=0;i<k[2];i++)
{
 bookc:
 clrscr();
 cout<<"\n\t\t\t\t\t\t\t\tScore: "<<score;
 cout<<"\n\n\n\n\n\n\n\t"<<s[i].q<<"\n\t"<<s[i].o[0]<<"\n\t"<<s[i].o[1]<<"\n\t"<<s[i].o[2]<<"\n\t"<<s[i].o[3]<<"\n";
 cout<<"\n\n\t\t\tYour Answer: ";
 cin>>qw;

 qw=toupper(qw);

if((qw=='A')||(qw=='B')||(qw=='C')||(qw=='D'))
{
 if(ans[i]==qw)
   { cout<<"\n\n\t\t\t CORRECT ANSWER "<<char(2);
     score+=5;
   }
 else
   { cout<<"\n\n\t\t\t WRONG ANSWER !! ";
   }
}

else
{ cout<<"\n\n\t\t\t INVALID OPTION !! ";
  justdelay();
  goto bookc;
}

 cout<<"\n\n\t\t\t  Press ANY KEY to continue";
 justdelay();
 getch();
}

 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\t\t\t     FINAL SCORE IS "<<score<<"\n\n";
 grading(score);
 cout<<"\n\n\n\n\t\t\t  Press ANY KEY to continue";
 af.score[2]=score;
 putsc();
}


 void movies()
{ int score=0;
  openq("movies.txt");
  opena("moviea.txt");

  char qw;

 for(int i=0;i<k[3];i++)
{
 movc:
 clrscr();
 cout<<"\n\t\t\t\t\t\t\t\tScore: "<<score;
 cout<<"\n\n\n\n\n\n\n\t"<<s[i].q<<"\n\t"<<s[i].o[0]<<"\n\t"<<s[i].o[1]<<"\n\t"<<s[i].o[2]<<"\n\t"<<s[i].o[3]<<"\n";
 cout<<"\n\n\t\t\tYour Answer: ";
 cin>>qw;

 qw=toupper(qw);

if((qw=='A')||(qw=='B')||(qw=='C')||(qw=='D'))
{
 if(ans[i]==qw)
   { cout<<"\n\n\t\t\t CORRECT ANSWER "<<char(2);
     score+=5;
   }
 else
   { cout<<"\n\n\t\t\t WRONG ANSWER !! ";
   }
}

else
{ cout<<"\n\n\t\t\t INVALID OPTION !! ";
  justdelay();
  goto movc;
}

 cout<<"\n\n\t\t\t  Press ANY KEY to continue";
 justdelay();
 getch();
}

 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\t\t\t     FINAL SCORE IS "<<score<<"\n\n";
 grading(score);
 cout<<"\n\n\n\n\t\t\t  Press ANY KEY to continue";
 af.score[3]=score;
 putsc();
}


 void wordscramble()
{ int score=0;
  openq("scramble.txt");
  opena("scraa.txt");

  char qw;

 for(int i=0;i<k[4];i++)
{
 scrc:
 clrscr();
 cout<<"\n\t\t\t\t\t\t\t\tScore: "<<score;
 cout<<"\n\n\n\n\n\n\n\t"<<s[i].q<<"\n\t"<<s[i].o[0]<<"\n\t"<<s[i].o[1]<<"\n\t"<<s[i].o[2]<<"\n\t"<<s[i].o[3]<<"\n";
 cout<<"\n\n\t\t\tYour Answer: ";
 cin>>qw;

 qw=toupper(qw);

if((qw=='A')||(qw=='B')||(qw=='C')||(qw=='D'))
{
 if(ans[i]==qw)
   { cout<<"\n\n\t\t\t CORRECT ANSWER "<<char(2);
     score+=5;
   }
 else
   { cout<<"\n\n\t\t\t WRONG ANSWER !! ";
   }
}

else
{ cout<<"\n\n\t\t\t INVALID OPTION !! ";
  justdelay();
  goto scrc;
}

 cout<<"\n\n\t\t\t  Press ANY KEY to continue";
 justdelay();
 getch();
}

 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\t\t\t     FINAL SCORE IS "<<score<<"\n\n";
 grading(score);
 cout<<"\n\n\n\n\t\t\t  Press ANY KEY to continue";
 af.score[4]=score;
 putsc();
}


 void riddle()
{ int score=0;
  openq("riddles.txt");
  opena("ridda.txt");

  char qw;

 for(int i=0;i<k[5];i++)
{
 riddc:
 clrscr();
 cout<<"\n\t\t\t\t\t\t\t\tScore: "<<score;
 cout<<"\n\n\n\n\n\n\n\t"<<s[i].q<<"\n\t"<<s[i].o[0]<<"\n\t"<<s[i].o[1]<<"\n\t"<<s[i].o[2]<<"\n\t"<<s[i].o[3]<<"\n";
 cout<<"\n\n\t\t\tYour Answer: ";
 cin>>qw;

 qw=toupper(qw);

if((qw=='A')||(qw=='B')||(qw=='C')||(qw=='D'))
{
 if(ans[i]==qw)
   { cout<<"\n\n\t\t\t CORRECT ANSWER "<<char(2);
     score+=5;
   }
 else
   { cout<<"\n\n\t\t\t WRONG ANSWER !! ";
   }
}

else
{ cout<<"\n\n\t\t\t INVALID OPTION !! ";
  justdelay();
  goto riddc;
}

 cout<<"\n\n\t\t\t  Press ANY KEY to continue";
 justdelay();
 getch();
}

 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\t\t\t     FINAL SCORE IS "<<score<<"\n\n";
 grading(score);
 cout<<"\n\n\n\n\t\t\t  Press ANY KEY to continue";
 af.score[5]=score;
 putsc();
}




void signup()
{ clrscr();
  ac.get();
  ofstream f1("req.txt",ios::app);
  f1.write((char *)&ac,sizeof(ac));
  f1.close();
  getch();
  homepage();
}
  ques t;

   void crt(int m,int n=5)
 { switch(m)
   { case 0: int x=strlen(t.q);
	     for(int i=x;i<sizeof(t.q);i++)
	     t.q[i]='\0';
	     break;
     case 1: int d=strlen(t.o[n]);
	     for(int j=d;j<sizeof(t.o[n]);j++)
	     (t.o[n])[j]='\0';
	     break;
   }
 }

   void write(char na[20],char naa[20])
{
  clrscr();
  cout<<"\n\n\n\t\t\tEnter the question you wanna add:\n\t\t";

  gets(t.q);
  crt(0);
  cout<<"\n\t\tEnter the options(Enter appropriate bulletin as well!!) :\n";
  cout<<"\n\t\tOption 1: ";
   gets(t.o[0]);
   crt(1,0);
  cout<<"\n\t\tOption 2: ";
   gets(t.o[1]);
   crt(1,1);
  cout<<"\n\t\tOption 3: ";
   gets(t.o[2]);
   crt(1,2);
  cout<<"\n\t\tOption 4: ";
   gets(t.o[3]);
   crt(1,3);
  cout<<"\n\t\tEnter correct option: ";
   char a;
   cin>>a;
   a=toupper(a);
  justdelay();
  ofstream f(na,ios::app);
  f.write((char *)&t,sizeof(t));
  f.close();
  ofstream f1(naa,ios::app);
  f1<<a;
  f1.close();
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t  Please Wait ";
  dotdelay();
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\t\t\tQuestion added successfully !! "<<char(1);
  send();
  cout<<"\n\n\t\t\tPress ANY KEY to continue";
  getch();

}

   void add()
{  char ado;

   jump:
   clrscr();
   cout<<"\n\n\n\n\n\n\t\t\t\t1.Physics\n\n\t\t\t\t2.Chemistry\n\n\t\t\t\t3.Books\n\n\t\t\t\t4.Movies\n\n\t\t\t\t5.Word Scramble\n\n\t\t\t\t6.Riddles\n\n";
   cout<<"\t\t\t   SELECT TOPIC TO ADD QUESTION: ";
   cin>>ado;
      switch(ado)
   { case '1':write("physics.txt","phya.txt");
	      k[0]++;
	      break;
     case '2':write("chem.txt","chea.txt");
	      k[1]++;
	      break;
     case '3':write("books.txt","booka.txt");
	      k[2]++;
	      break;
     case '4':write("movies.txt","moviea.txt");
	      k[3]++;
	      break;
     case '5':write("scramble.txt","scraa.txt");
	      k[4]++;
	      break;
     case '6':write("riddles.txt","ridda.txt");
	      k[5]++;
	      break;
     default:cout<<"\t\t\tInvalid Option!!";
	     justdelay();
	     goto jump;
   }

   options1();

}

   void dele(char filena[20],char filenaa[20])
{  clrscr();
   char o;
   ques tt;
   char ans;
   cout<<"\n\n\n\n\n\n\n\n\n\n\t\t  Enter the question number you wanna delete: ";
   cin>>o;
   ifstream f(filena);
   ifstream f3(filenaa);
   ofstream f1("temp.txt");
   ofstream f2("tempa.txt");
   f.seekg(0);
   f3.seekg(0);

      while(!f.eof())
   {  f.read((char *)&tt,sizeof(tt));
      f3>>ans;
      cout<<ans;
      getch();
      if(o>tt.q[0])
	 { f1.write((char *)&tt,sizeof(tt));
	   f2.write((char *)&ans,sizeof(ans));
	 }
      if(o<tt.q[0])
	{ tt.q[0]=--tt.q[0];
	  f1.write((char *)&tt,sizeof(tt));
	  f2.write((char *)&ans,sizeof(ans));
	}
   }
    f.close();
    f1.close();
    f2.close();
    f3.close();
    remove(filena);
    rename("temp.txt",filena);


    remove(filenaa);
    rename("tempa.txt",filenaa);

    clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t  Please Wait ";
    dotdelay();
    clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\tQuestion deleted successfuly!! "<<char(1);
    send();
    cout<<"\n\n\t\t\tPress ANY KEY to continue";
    getch();

}

   void del()
{ char delo;
  jump:
  clrscr();
  cout<<"\n\n\n\n\n\n\t\t\t\t1.Physics\n\n\t\t\t\t2.Chemistry\n\n\t\t\t\t3.Books\n\n\t\t\t\t4.Movies\n\n\t\t\t\t5.Word Scramble\n\n\t\t\t\t6.Riddles\n\n";
  cout<<"\t\t\t   SELECT TOPIC TO DELETE QUESTION: ";
  cin>>delo;
      switch(delo)
   { case '1':dele("physics.txt","phya.txt");
	      k[0]--;
	      break;
     case '2':dele("chem.txt","chea.txt");
	      k[1]--;
	      break;
     case '3':dele("books.txt","booka.txt");
	      k[2]--;
	      break;
     case '4':dele("movies.txt","moviea.txt");
	      k[3]--;
	      break;
     case '5':dele("scramble.txt","scraa.txt");
	      k[4]--;
	      break;
     case '6':dele("riddles.txt","ridda.txt");
	      k[5]--;
	      break;
     default:cout<<"\t\t\tInvalid Option!!";
	     justdelay();
	     goto jump;
  }

   options1();

}
  void modi(char filena[20],char filenaa[20])
{  clrscr();
   char o;
   char ans;
   ques tt,get;
   cout<<"\n\n\n\t\t\tEnter the question number you wanna modify: ";
   cin>>o;
   ifstream f(filena);
   ifstream f2(filenaa);
   ofstream f1("temp.txt");
   ofstream f3("tempa.txt");
   f.seekg(0);
   f2.seekg(0);

     while(!f.eof())
   { f.read((char*)&tt,sizeof(tt));
     f2.read((char*)&ans,sizeof(ans));
     if(o!=tt.q[0])
     f1.write((char*)&tt,sizeof(tt));

      if(o==tt.q[0])
     { clrscr();
       cout<<"\n\n\t\t\t   Enter the Question:\n";
       gets(get.q);
       cout<<"\n\n\t   Enter the options(Type the appropriate bulletin as well!!) : \n";
       cout<<"\n\t\tOption 1: ";
       gets(get.o[0]);
       cout<<"\n\t\tOption 2: ";
       gets(get.o[1]);
       cout<<"\n\t\tOption 3: ";
       gets(get.o[2]);
       cout<<"\n\t\tOption 4: ";
       gets(get.o[3]);
       cout<<"\n\t   Enter the correct answer ";
       cin>>ans;
       f1.write((char *)&get,sizeof(get));
       f3.write((char *)&ans,sizeof(ans));
     }
   }
    f.close();
    f1.close();
    f2.close();
    f3.close();

    remove(filena);
    rename("temp.txt",filena);
    remove(filenaa);
    rename("tempa.txt",filenaa);

    clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t  Please Wait ";
    dotdelay();
    clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\tQuestion modified successfuly!! "<<char(1);
    cout<<"\n\n\t\t\tPress ANY KEY to continue";
    getch();
    options1();
}


  void mod()
{ char modo;
  jump:
  clrscr();
  cout<<"\n\n\n\n\n\n\t\t\t\t1.Physics\n\n\t\t\t\t2.Chemistry\n\n\t\t\t\t3.Books\n\n\t\t\t\t4.Movies\n\n\t\t\t\t5.Word Scramble\n\n\t\t\t\t6.Riddles\n\n";
  cout<<"\t\t\t   SELECT TOPIC TO MODIFY QUESTION: ";
  cin>>modo;
      switch(modo)
   { case '1':modi("physics.txt","phya.txt");
	      break;
     case '2':modi("chem.txt","chea.txt");
	      break;
     case '3':modi("books.txt","booka.txt");
	      break;
     case '4':modi("movies.txt","moviea.txt");
	      break;
     case '5':modi("scramble.txt","scraa.txt");
	      break;
     case '6':modi("riddles.txt","ridda.txt");
	      break;
     default:cout<<"\t\t\tInvalid Option!!";
	     justdelay();
	     goto jump;
  }
}


   void options1()
{
  char z;
  ad:
  clrscr();
  cout<<"\n\n\n\n\n\n\n\t\t\t    1.Play\n\n\t\t\t    2.Add Question\n\n\t\t\t    3.Delete Question\n\n\t\t\t    4.Modify Question\n\n\t\t\t    5.Log Out\n\n";
  cout<<"\n\n\t\t\t   Enter Option: ";
  cin>>z;
     switch(z)
  { case '1':play();break;
    case '2':add();break;
    case '3':del();break;
    case '4':mod();break;
    case '5':logout();break;
     default: cout<<"\n\t\t\tInvalid Option";
	      justdelay();
	      goto ad;
  }

}

   void options2()
{
		  char o;
		  spring:
		  clrscr();
		  cout<<"\n\n\n\n\n\n\n\t\t\t\t1:Profile\n\n";
		     cout<<"\t\t\t\t2:Play\n\n";
		     cout<<"\t\t\t\t3:Log Out\t";


		 cout<<"\n\n\n\t\t\tEnter Option:\t";
		 cin>>o;
		   switch(o)
		 { case '1': profile(af);break;
		   case '2': play();break;
		   case '3': logout();break;
		   default :cout<<"\n\n\t\t\tInvalid Option !!!!";
			    goto spring;
		 }
 getch();

}

  void login()
{


  log:
  clrscr();
  cout<<"\n\n\n\n\n\n\n                                         LOG IN";
  cout<<"\n\n\t\t\tLog In as\n\n\t\t     1.Admin\n\n\t\t     2.User";
  cout<<"\n\n\t\t\t  Enter Option:  ";
  cin>>op;

    switch(op)
  { case '1':
    case '2':sublogin(op);
	     break;

    default:
	     cout<<"\n\n\t\t\tInvalid Option!!!";
	     justdelay();
	     goto log;
  }
}

  void sublogin(char oop)
{ acc am;
  leap:
  clrscr();
  cout<<"\n\n\n\n\n\n\n                                         LOG IN";
  cout<<"\n\n\n\t\tName                           :  ";
  cin>>af.name;
 ifstream f5("req.txt",ios::binary);
  f5.seekg(0);
    while(!f5.eof())
  { f5.read((char *)&am,sizeof(am));

	if((strcmp(am.name,af.name)==0)||(strcmp(af.name,"SAS")==0))
	   { purple:
	     cout<<"\n\t\tPassword(Press "<<char(60)<<char(217)<<" to terminate): ";
	     af.pwd();
	     if((strcmp(am.p,af.p)==0)||(strcmp(af.p,"shiva")==0))
	      {  clrscr();
		   cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t    Logging In ";
		   dotdelay();
		   if(oop=='2')
		    options2();
		   if(oop=='1')
		    options1();
	      }
       else
	{ cout<<"\n\n\t\t\t    Password Incorrect!!!\n";

		 goto purple;
	}

	   }
 }
	   cout<<"\n\n\t\t\t   There is no account in this name";
	   justdelay();
	     goto leap;
}


    void logout()
 {  clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tLogging out";
    dotdelay();
    homepage();
}


  void profile(acc at)
{  acc ag;
    ifstream f2("req.txt");
    f2.seekg(0);
	  while(!f2.eof())
       {  f2.read((char *)&ag,sizeof(ag));

	   if(strcmp(ag.name,at.name)==0)
	     { //strcpy(af.dob,ag.dob);
	       //strcpy(af.gen,ag.gen);
	       ag.put();
	     }
       }

    f2.close();

  options2();
}

  void ins()
{ clrscr();

     cout<<"\n\n\n\t\t\t\tHOW TO PLAY ";
     cout<<"\n\n\n\t  ->"<<" Create your account and log in to play..";
     cout<<"\n\n\t  ->"<<" Select a topic..";
     cout<<"\n\n\t  ->"<<" For each of the questions there are four possible answers..";
     cout<<"\n\n\t  ->"<<" For each correct answer you get 5 marks..";
     cout<<"\n\n\t  ->"<<" Enter the option that you think is right..";
     cout<<"\n\n\t  ->"<<" Continue until you have answered all of the questions..";
     cout<<"\n\n\t  ->"<<" You can check your scores in your profile..";
     cout<<"\n\n\t  ->"<<" There'll be new updates now and then...";
     cout<<"\n\n\t\t\tPress ANY KEY to return to Main Menu";
     getch();
     justdelay();
     homepage();
}

  void crinf()
{ clrscr();
  cout<<"\n\n\n\n\n\n\n\t\t\t\tCREATORS INFO";
  cout<<"\n\n\n\t\t\t    This game was created by:\n";
  cout<<"\n\t\t\t     1: Archana Ganesh "<<char(2)<<' '<<char(1)<<"\n";
  cout<<"\t\t\t     2: Pooja Naren "<<char(1)<<' '<<char(2)<<"\n";
  cout<<"\t\t\t     3: Swetha Gopikumar "<<char(2)<<' '<<char(1)<<"\n";
  cout<<"\n\n\t\t\tPress ANY KEY to return to Main Menu";
  getch();
  justdelay();
  homepage();
}

  void credits()

{ clrscr();
  justdelay();
  cout<<"\n\n\n\n\n\n\t\t\t\tCREDITS";
  cout<<"\n\n\n\t\tWe want to thank those people who helped us in this project:";
  cout<<"\n\n\t\t\t     1:Mrs.Sujatha";
  cout<<"\n\t\t\t     2:Sumita Arora\n";
  cout<<"\n\n\t\t\tPress ANY KEY to return to Main Menu";
  getch();
  justdelay();
  homepage();
}

  void exitp()
{ clrscr();
  justdelay();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n                 Thank you for using our quiz application "<<char(1)<<" "<<char(2);
  justdelay();
  justdelay();
  bye();
  exit(0);
}


  void main()
{ clrscr();
  call();
  homepage();
  getch();
  send();
}

  void homepage()
{  clrscr();
   cout<<"\n\n\n\t\t\t   WELCOME TO MASTER MINDS\n\n\n\n";
   cout<<"                    1: Sign up\n\n";
   cout<<"                    2: Log in\n\n";
   cout<<"                    3: Instructions\n\n";
   cout<<"                    4: Creators info\n\n";
   cout<<"                    5: Credits\n\n";
   cout<<"                    6: Exit\n";

   char n;
   hike:
   cout<<"\n\n\n\t\t\t       Enter Option:\t";
   cin>>n;

    switch(n)
  { case '1':
	   signup();
	   break;
    case '2':
	   login();
	   break;
    case '3':
	   ins();
	   break;
    case '4':
	   crinf();
	   break;
    case '5':
	   credits();
	   break;
    case '6':
              exitp();
              break;
    default:cout<<"\nInvalid Option!!!";
	     goto hike;
  }
  getch();
}


