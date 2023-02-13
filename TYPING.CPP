   #include<iostream.h>
   #include<conio.h>
   #include<string.h>
   #include<stdio.h>
   #include<dos.h>

      void main()
     {

       float to_word=0,word=0,wrong_word=0,ac,speed,speed1,speed2,speed3,a1,a2,a3,a4,i=0,j=1,k=1,hr1,mn1,se1,hr2,mn2,se2,j1=1;
       char ch,a[1000],b[10000]="Digital India is a campaign launched by the Government of India to ensure that Government services are made available to citizens electronically by improved online infrastructure and by increasing Internet connectivity or by making the country digitally empowered in the field of technology.It was launched by Prime Minister Narendra Modi.The initiative includes plans to connect rural areas with highspeed internet networks.DigitalIndia consists of three core components";
    clrscr();

    cout<<b<<endl<<endl;
     while(1)
    {
       ch=getch();
       if(i==0)

	{
     ///////////////////////// get time from the system ////////////////////////////
	struct time t;
	gettime(&t);
	hr1=t.ti_hour;
	mn1=t.ti_min;
	se1=t.ti_sec;
	getch();
     }
   ///////////////////////////for backspace////////////////////////////////
	    if(ch==8)
     {
	cout<<"\b \b";
	i--;
	j--;
	j1--;
		if(a[i]==32)
	{
	 --word;
	}

     }

////////////////////for final time from system //////////////////////////////
     else if(ch==13)
     {
       struct time t1;
       gettime(&t1);
       hr2=t1.ti_hour;
       mn2=t1.ti_min;
       se2=t1.ti_sec;
     break;
      }

////////////////////// get the word & store in the memory/////////////////////
	else
     {
     a[i]=ch;
     cprintf("%c",a[i]);
     if(a[i]!=b[i])
    ////////////////////////wrong word  //////////////////////////
    {
	if(a[i]==32)
	{
	 ++wrong_word;
	}
	k++ ;
      }
    //////////////////////////////write word//////////////////////////
     if(a[i]==b[i])
	{
	if(a[i]==32)
	{
	 ++word;
	}
	 j++;
	}
  ////////////////////////////////////////total word////////////////////
		if(a[i]==32)
	{
	 ++to_word;
	}
	    i++;
	    j1++;
	}  ///////////////////////*else*////////////////////////////

      }//////////////////////*while*//////////////////////

a[i]='\0';

/////////////////*************time differences*************///////////////////////////
	  a1=hr2- hr1;
	  a2=mn2-mn1;
	  a3=se2-se1;
	  a1=60*a1;
	  a3=a3/60;

    /////////////////************ total sec ***************///////////////////////////////
	 a2=a1+a2+a3;

     /////////////////////************  accuracy percentage  **************//////////////////////
     ac=((j-1)*100)/(j1-1) ;

     ////////////********* letter per minute ******/////////////////////

	 speed=(j1-1)/a2;    ////////////*********  gross speed  ********///////////
	 speed1=(j-1)/a2;    ////////////*********  net speed  ********///////////

	 ////////////********* word per minute ******/////////////////////

	 speed2=word/a2;       ///////////////*******  net speed  ********////////////////////
	 speed3=to_word/a2;   ////////////*********  gross speed  ********///////////

  //////////////////////////// //for output the result// ///////////////////////////
   {
   cout<<endl<<endl;
   cout<<"  ";

	   textcolor(3);gotoxy(42,15); cprintf("no. of charater type: ");
	   textcolor(12);cprintf("%f",j1-1);

   cout<<endl;gotoxy(42,16); textcolor(10);cprintf("No. of right character:");
   textcolor(12);cprintf("%f",j-1);cout<<endl;

	   cout<<"  ";  gotoxy(42,17);textcolor(4);cprintf("No. of wrong character ");
	   textcolor(12);cprintf("%f",k-1);cout<<endl ;

    cout<<"  ";  gotoxy(42,18);textcolor(10);cprintf("No. of right word ");
   textcolor(12);cprintf("%f",word);cout<<endl ;

	   cout<<"  ";  gotoxy(42,19);textcolor(4);cprintf("No. of wrong word ");
	   textcolor(12);cprintf("%f",wrong_word);cout<<endl ;

   textcolor(14);gotoxy(42,20); cprintf("Time taken ");
   textcolor(13);cprintf("%f",a3);textcolor(3);cprintf(" min ");

	    cout<<endl;textcolor(4);gotoxy(42,21); cprintf("Gross Speed ");
	    textcolor(13);cprintf("%f",speed);textcolor(3);cprintf(" key/min");

    cout<<endl;textcolor(2);gotoxy(42,22); cprintf("Net speed  ");cout<<"    ";
    textcolor(13);cprintf("%f",speed1);textcolor(3);cprintf("  key/min");

	    cout<<endl;textcolor(4);gotoxy(42,23); cprintf("Gross Speed ");
	    textcolor(13);cprintf("%f",speed3);textcolor(3);cprintf(" word/min");

    cout<<endl;textcolor(2);gotoxy(42,24); cprintf("Net speed  ");cout<<"    ";
    textcolor(13);cprintf("%f",speed2);textcolor(3);cprintf(" word/min");

	     cout<<endl;textcolor(2);gotoxy(42,25); cprintf( "Accuracy rate  ");
	     textcolor(13);cprintf("%f",ac); ;textcolor(3);cprintf(" %");
     }///////////////////////////*********************////////////////////////////

     getch();

   } ////////**********main***************/////////////
