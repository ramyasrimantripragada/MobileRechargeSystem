#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<fstream>
using namespace std;
class network
{
	public:
		string phnNum,name,mode,service;
		int ch,validity;
		float price,data;
		void get()
		{
			cout<<"CHOOSE THE SERVICE NETWORK OF YOUR PHONE NUMBER FROM THE FOLLOWING OPTIONS:\n1.AIRTEL\n2.JIO\n3.IDEA\n4.BSNL\n5.VODAFONE\nENTER THE NAME OF YOUR NETWORK : ";
			cin>>service;
		}
	void show()
	{
		cout<<"ENTER MODE OF PAYMENT: [CREDITCARD/DEBITCARD/NETBANKING/UPI] :";
		cin>>mode;
		system("cls");
		cout<<"\t\t\t*RECHARGE SUCCESSFULLY DONE*\n";
		for (int i=0;i<100;i++)
		   cout<<"-";
		cout<<"\nNAME OF CUSTOMER  \t: "<<name<<"\nPHONE NUMBER  \t\t: "<<phnNum<<"\nNETWORK SEVICE  \t: "<<service<<"\nPRICE OF PLAN  \t\t: Rs."<<price<<"\nDATA BENEFIT  \t\t: "<<data<<"GB/DAY\nVALIDITY  \t\t: "<<validity<<"DAYS\nCALLING  \t\t: UNLIMITED\nSMS  \t\t\t: 100/DAY\nMODE OF PAYMENT  \t: "<<mode; 
		time_t now =time(0);
		char* dt= ctime(&now);
		cout<<endl<<"DATE AND TIME  \t\t: "<<dt;
		for (int i=0;i<100;i++)
		    cout<<"-";
		ofstream out;
        out.open("MOBILE RECHARGE LOG",ios::app);
	    for (int i=0;i<100;i++)
		   out<<"-";
		out<<"\nNAME OF CUSTOMER  \t: "<<name<<"\nPHONE NUMBER  \t\t: "<<phnNum<<"\nNETWORK SEVICE  \t: "<<service<<"\nPRICE OF PLAN  \t\t: Rs."<<price<<"\nDATA BENEFIT  \t\t: "<<data<<"GB/DAY\nVALIDITY  \t\t: "<<validity<<"DAYS\nCALLING  \t\t: UNLIMITED\nSMS  \t\t\t: 100/DAY\nMODE OF PAYMENT  \t: "<<mode; 
		out<<endl<<"DATE AND TIME  \t\t: "<<dt;
		for (int i=0;i<100;i++)
		    out<<"-";
		out<<endl;
        out.close();
	}
};
class airtel:public network
{
	public:
		airtel()
		{
			service="AIRTEL";
			cout<<"WELCOME TO AIRTEL ONLINE RECHARGE PORTAL\nENTER THE NAME OF THE CUSTMOR : ";
			cin>>name;
			cout<<"ENTER THE PHONE NUMBER : ";
			cin>>phnNum;
			cout<<"CHOOSE FROM THE PLANS AVAILABLE :\nRECHARGE PLAN\tDATA BENEFIT\tVALIDITY\tCALLS\tSMS\n1.Rs.199\t1GB/DAY\t\t28DAYS\tUNLIMITED\t100/DAY\n2.Rs.279\t1.5GB/DAY\t28DAYS\tUNLIMITED\t100/DAY\n3.Rs.349\t2GB/DAY\t\t28DAYS\tUNLIMITED\t100/DAY\n4.Rs.398\t3GB/DAY\t\t28DAYS\tUNLIMITED\t100/DAY \n5.Rs.598 \t1.5GB/DAY\t84DAYS\tUNLIMITED\t100/DAY\n6.Rs.698\t2GB/DAY\t\t84DAYS\tUNLIMITED\t100/DAY ";
			cin>>ch;
			if(ch==1)
			{
				price=199 ; data=1 ; validity=28 ;
			}
			else if(ch==2)
			{
				price=279 ; data=1.5 ; validity=28 ;
			}
			else if(ch==3)
			{
				price=349 ; data=2 ; validity=28 ;
			}
			else if(ch==4)
			{
				price=398 ; data=3 ; validity=28 ;
			}
			else if(ch==5)
			{
				price=598 ; data=1.5 ; validity=84 ;
			}
			else if(ch==6)
			{
				price=698 ; data=2 ; validity=84 ;
			}
		}
};
class jio:public network
{
	public:
		jio()
		{
			service="JIO";
			cout<<"WELCOME TO JIO ONLINE RECHARGE PORTAL\nENTER THE NAME OF THE CUSTMOR : ";
			cin>>name;
			cout<<"ENTER THE PHONE NUMBER : ";
			cin>>phnNum;
			cout<<"CHOOSE FROM THE PLANS AVAILABLE :\nRECHARGE PLAN\tDATA BENEFIT\tVALIDITY\tCALLS\tSMS\n1.Rs.149\t1GB/DAY\t\t24DAYS\tUNLIMITED\t100/DAY\n2.Rs.199\t1.5GB/DAY\t28DAYS\tUNLIMITED\t100/DAY\n3.Rs.599\t2GB/DAY\t\t84DAYS\tUNLIMITED\t100/DAY\n4.Rs.399\t1.5GB/DAY\t56DAYS\tUNLIMITED\t100/DAY \n5.Rs.444 \t2GB/DAY\t\t56DAYS\tUNLIMITED\t100/DAY\n6.Rs.999\t3GB/DAY\t\t84DAYS\tUNLIMITED\t100/DAY ";
			cin>>ch;
			if(ch==1)
			{
				price=149 ; data=1 ; validity=24 ;
			}
			else if(ch==2)
			{
				price=199 ; data=1.5 ; validity=28 ;
			}
			else if(ch==3)
			{
				price=599 ; data=2 ; validity=84 ;
			}
			else if(ch==4)
			{
				price=399 ; data=1.5 ; validity=56 ;
			}
			else if(ch==5)
			{
				price=444 ; data=2 ; validity=56 ;
			}
			else if(ch==6)
			{
				price=999 ; data=3 ; validity=84 ;
			}
		}
};
class idea:public network
{
	public:
		idea()
		{
			service="IDEA";
			cout<<"WELCOME TO IDEA ONLINE RECHARGE PORTAL\nENTER THE NAME OF THE CUSTMOR : ";
			cin>>name;
			cout<<"ENTER THE PHONE NUMBER : ";
			cin>>phnNum;
			cout<<"CHOOSE FROM THE PLANS AVAILABLE :\nRECHARGE PLAN\tDATA BENEFIT\tVALIDITY\tCALLS\tSMS\n1.Rs.219\t1GB/DAY\t\t28DAYS\tUNLIMITED\t100/DAY\n2.Rs.249\t1.5GB/DAY\t28DAYS\tUNLIMITED\t100/DAY\n3.Rs.299\t2GB/DAY\t\t28DAYS\tUNLIMITED\t100/DAY\n4.Rs.398\t3GB/DAY\t\t28DAYS\tUNLIMITED\t100/DAY \n5.Rs.599 \t1.5GB/DAY\t84DAYS\tUNLIMITED\t100/DAY\n6.Rs.699\t2GB/DAY\t\t84DAYS\tUNLIMITED\t100/DAY ";
			cin>>ch;
			if(ch==1)
			{
				price=219; data=1 ; validity=28 ;
			}
			else if(ch==2)
			{
				price=249 ; data=1.5 ; validity=28 ;
			}
			else if(ch==3)
			{
				price=299 ; data=2 ; validity=28 ;
			}
			else if(ch==4)
			{
				price=398 ; data=3 ; validity=28 ;
			}
			else if(ch==5)
			{
				price=599 ; data=1.5 ; validity=84 ;
			}
			else if(ch==6)
			{
				price=699 ; data=2 ; validity=84 ;
			}
		}
};
class bsnl:public network
{
	public:
		bsnl()
		{
			service="BSNL";
			cout<<"WELCOME TO BSNL ONLINE RECHARGE PORTAL\nENTER THE NAME OF THE CUSTMOR : ";
			cin>>name;
			cout<<"ENTER THE PHONE NUMBER : ";
			cin>>phnNum;
			cout<<"CHOOSE FROM THE PLANS AVAILABLE :\nRECHARGE PLAN\tDATA BENEFIT\tVALIDITY\tCALLS\tSMS\n1.Rs.144\t1GB/DAY\t\t30DAYS\tUNLIMITED\t100/DAY\n2.Rs.187\t2GB/DAY\t\t28DAYS\tUNLIMITED\t100/DAY\n3.Rs.247\t3GB/DAY\t\t30DAYS\tUNLIMITED\t100/DAY\n4.Rs.297\t1GB/DAY\t\t54DAYS\tUNLIMITED\t100/DAY \n5.Rs.399\t1GB/DAY\t\t80DAYS\tUNLIMITED\t100/DAY\n6.Rs.485\t1.5GB/DAY\t90DAYS\tUNLIMITED\t100/DAY ";
			cin>>ch;
			if(ch==1)
			{
				price=144 ; data=1 ; validity=30 ;
			}
			else if(ch==2)
			{
				price=187 ; data=2 ; validity=28 ;
			}
			else if(ch==3)
			{
				price=247 ; data=3 ; validity=30 ;
			}
			else if(ch==4)
			{
				price=297 ; data=1 ; validity=54 ;
			}
			else if(ch==5)
			{
				price=399 ; data=1 ; validity=80 ;
			}
			else if(ch==6)
			{
				price=485 ; data=1.5 ; validity=90 ;
			}
		}
};
class vodafone:public network
{
	public:
		vodafone()
		{
			service="VODAFONE";
			cout<<"WELCOME TO VODAFONE ONLINE RECHARGE PORTAL\nENTER THE NAME OF THE CUSTMOR : ";
			cin>>name;
			cout<<"ENTER THE PHONE NUMBER : ";
			cin>>phnNum;
			cout<<"CHOOSE FROM THE PLANS AVAILABLE :\nRECHARGE PLAN\tDATA BENEFIT\tVALIDITY\tCALLS\tSMS\n1.Rs.299\t4GB/DAY\t\t28DAYS\tUNLIMITED\t100/DAY\n2.Rs.449\t4GB/DAY\t\t56DAYS\tUNLIMITED\t100/DAY\n3.Rs.699\t4GB/DAY\t\t84DAYS\tUNLIMITED\t100/DAY\n4.Rs.399\t1.5GB/DAY\t56DAYS\tUNLIMITED\t100/DAY \n5.Rs.599 \t1.5GB/DAY\t84DAYS\tUNLIMITED\t100/DAY\n6.Rs.499\t1.5GB/DAY\t70DAYS\tUNLIMITED\t100/DAY ";
			cin>>ch;
			if(ch==1)
			{
				price=299 ; data=4 ; validity=28 ;
			}
			else if(ch==2)
			{
				price=449 ; data=4 ; validity=56 ;
			}
			else if(ch==3)
			{
				price=699 ; data=4 ; validity=84 ;
			}
			else if(ch==4)
			{
				price=399 ; data=1.5 ; validity=56 ;
			}
			else if(ch==5)
			{
				price=599 ; data=1.5 ; validity=84 ;
			}
			else if(ch==6)
			{
				price=499 ; data=1.5 ; validity=70 ;
			}
		}
};
int main()
{
	char ch;
	cout<<"DO YOU WANT TO PERFORM A RECHARGE [Y/N] : ";
	while((ch=getchar())!='N')
	{
	
    	network n;
    	n.get();
	    if(n.service=="AIRTEL")
	    {
	    	airtel a;
	    	a.show();
		}
	    else if(n.service=="JIO")
	    {
	    	jio j;
	    	j.show();
    	}
	    else if(n.service=="IDEA")
	    {
	    	idea i;
	    	i.show();
		}
    	else if(n.service=="BSNL")
	     {
	     	bsnl b;
	     	b.show();
		 }
	    else if(n.service=="VODAFONE")
	    {
	    	vodafone v;
	    	v.show();
		}
		else
		{
			cout<<"NO MATCH";
		}
        cout<<endl<<"DO YOU WANT TO CONTINUE [Y/N] : ";
        ch=getchar();
    }
	return 0;
}
