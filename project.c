#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
struct account
{	
	char username[100];
	char password[100];
	char mobile[10];
};
struct account s[100];
struct account acc;
struct hotels
{
	char hotel[100];
	char first_food[50];
	char second_food[80];
	char third_food[50];
	char fourth_food[50];
	char fifth_food[50];
	char sixth_food[50];
	char seventh_food[50];
	char eight_food[50];
	char ninth_food[50];
	char tenth_food[50];
	char item[100];
	int prize;
	int quantity;
	int TOTAL;
	int first,second,third,fourth,fifth,sixth,seventh,eight,ninth,tenth;
};
struct hotels b[7];
struct hotels l[7];
struct hotels d[7];
struct location
{
	char location1[50];
	char location2[50];
	char location3[50];
};
struct location area[4];
struct wish_list
{
	struct hotels h[50];
};
struct wish_list ord,ordd,orddd,w,w1,w2;
int choice,loc;
int x,y,i,j,k,m,q=0,p,o,search_choice,food_choice,v,success,flag,cl,J=0,g=0,L=0,H=0,T=0,P,P1,P2,I=0,K=0;
int A=1,E=0,O,Z,V,M=0,N=0,B=0,f,S=0,W=0,C=0;
int height = 5;
int option,total,n;
int c ,ch, z; 
char name[100];
char mobilenum[10];
char pass[100];
char pass1[100];
char F[200];
char hno[100];
char man[100];
char plot[100];
char plot[100];
void signup();
void login();
int validate();
int accountcheck();
int search_hotel();
int food();
int cart(struct hotels*ptr,int pr,int q,int G,int Q,int mon);
int cart1(struct hotels*ptr,int pr,int q,int G,int Q,int mon);
int cart2(struct hotels*ptr,int pr,int q,int G,int Q,int mon);
int cart3(struct hotels*ptr,int pr,int q,int G,int Q,int mon);
int cart4(struct hotels*ptr,int pr,int q,int G,int Q,int mon);
int cart5(struct hotels*ptr,int pr,int q,int G,int Q,int mon);
void ORDER();
void ORDER1();
void bill();
void bill2();
int main()
{
	while(1)
{		
int choice;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
printf("\n\n\n\t\t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
printf("\t\t\t\t\t\t|   WELCOME TO $WIGGY  |\t\t\n"); 
printf("\t\t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
printf("\t\t\t\t\t>>>>>>>THE FLAVOURS OF YOUR WISH<<<<<<<<\n\n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
printf(" \t\t\t\tEnter:\n");
printf(" \t\t\t\t {1}:CREATE AN ACCOUNT\n\t\t\t\t {2}:LOGIN\n\t\t\t\t {3}:EXIT\n");
printf("Enter Your Choice : ");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	{
	signup();
	break;
	}
	case 2:
	{
	login();
	break;
	}
	case 3:
		exit(1);
	{
	break;
	}
	default : 
	{
		printf("    Please Enter Valid Choice ");
		break;
	}
}
}
}
 void signup()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	printf("\n      Create Your Account");	
	printf("\nPlease Enter Your Username : ");
	scanf("%s",name);
	printf("Enter Your Mobile Number : ");
	scanf("%s",mobilenum);
	printf("Enter The Password : ");
	scanf("%s",pass);
	printf("Conform The Password : ");
	scanf("%s",pass1);
	while(!(strcmp(pass,pass1)==0))
	{
		printf("Enter Correct Password : ");
		scanf("%s",pass1);
	}
	printf("Password matched\n");
     o = validate();
	if(o == 1)
	{
	//printf("\n%d",o);
	accountcheck();
}
}
int validate()
{
	for ( i = 0; name[i] != '\0'; i++) 
	{
       while(! ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z')))
		{
			flag = 0;
            printf("\nPlease Enter the valid Name : \n");
            scanf("%s",name);
            if((name[i] >= 'A' && name[i] <= 'Z')|| (name[i] >= 'a'&& name[i] <= 'z'))
            {
            	continue;
			}
        }
    }
    flag=1;
    //printf("ok");
    if(flag==1)
 {
    if (strlen(mobilenum) == 10)
	{
        for (i = 0; i < 10; i++)
		{
            if (mobilenum[i] >= '0'  && mobilenum[i] <= '9') 
			{
              success=1;
            }
        }
    }
    if(success==0)
   {
   	while(!(strlen(mobilenum)==10))
   	{
   			printf("Enter Valid Number\n");
   		scanf("%s",&mobilenum);
   		if(strlen(mobilenum)==10)
   		{
   			for (i = 0; i < 10; i++)
		{
            if (mobilenum[i] >= '0'  && mobilenum[i] <= '9') 
			{
              success=1;
            }
        }
    }
 
	   }
   }
}
return 1;
}	
int accountcheck()
{
for(i=0;i<100;i++)
{
	if(!(strcmp(name,s[i].username) && strcmp(pass,s[i].password)))
	{
		printf("ACCOUNT ALREADY EXSISTED\n");
		printf("PLEASE LOGIN\n");
		main();
		break;
	}
}
if(i==100)
{
	strcpy(s[q].username,name);
	strcpy(s[q].password,pass);
	strcpy(s[q].mobile,mobilenum);
	q++;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
	printf("\n\n ACCOUNT CREATED SUCCESFULLY");
}
}	
void login()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	printf("Enter Username : ");
	scanf("%s",name);
	printf("Enter Password : ");
	scanf("%s",pass);
	for(i=0;i<100;i++)
	{
		if(!strcmp(s[i].username,name))
		{
			if(!strcmp(s[i].password,pass))
			{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
				printf("\nYOU ARE SUCCESSFULLY LOGGED IN :-)\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
		        printf("\t\t\t\tYOU HAVE TWO WAYS FOR SELECTING YOUR FAVORITE FOOD\n\n\n");
		        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
		        printf("\t\t\t\t[1]:SEARCH BY LOCATION ---WHERE AVAILABLE HOTELS WILL BE DISPLAYED\n");
		        printf("\n");
		        printf("\t\t\t\t[2]:SEARCH BY FOOD\n");
		        printf("\n");
		        printf("\t\t\t\t[3]:EXIT\n\n");
		        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		        printf("PLEASE ENTER YOUR CHOICE\n");
		        scanf("%d",&search_choice);
		        switch(search_choice)
		        {
			    case 1:
			    {  
			    loc=location();
			    search_hotel();
			    break;
		        }
			    case 2:
			    {
			    food();
			    break;
			    }
			   case 3:
			   {
			   exit(1);
			   break;
		       }
			   default:
			   {
				printf("Please Enter Valid Choice\n");
				break;
			   }
			   break;
     	    }
	   }
		else
		{
			printf("\n\n INVALID PASSWORD !");
			printf("PLEASE ENTER THE CORRECT PASSWORD\n\n");
			main();
			break;
		}
	}
			else
			{
				printf("\n\nAcoount Doesn't Exist..Please Signup!!\n\n");
				main();
				break;
			}
}
 }
 void hotel_intial()
{
strcpy(b[1].hotel,"SWAGATH");
	strcpy(b[1].first_food,"idly with sambhar");
	strcpy(b[1].second_food,"puri");
	strcpy(b[1].third_food,"dosa with chutney");
	strcpy(b[1].fourth_food,"vada with sambhar");
	strcpy(b[1].fifth_food," Avocado Toasts");
	strcpy(b[1].sixth_food,"Breakfast Bread Pudding");
	strcpy(b[1].seventh_food,"Chole Bhatoora");
	strcpy(b[1].eight_food,"Hazelnut latte+potato chilli");
	strcpy(b[1].ninth_food,"American Set Breakfast Plate");
	strcpy(b[1].tenth_food,"Keto Breakfast");
	b[1].first=60;
	b[1].second=90;
	b[1].third=80;
	b[1].fourth=100;
	b[1].fifth=160;
	b[1].sixth=190;
	b[1].seventh=150;
	b[1].eight=290;
	b[1].ninth=250;
	b[1].tenth=300;
	strcpy(l[1].hotel,"SWAGATH");
	strcpy(l[1].first_food,"RICE WITH 2 CURRIES");
	strcpy(l[1].second_food,"CHICKEN BIRIYANI FAMILY PACK");
	strcpy(l[1].third_food,"Sambhar Rice");
	strcpy(l[1].fourth_food,"Panner Biriyani");
	strcpy(l[1].fifth_food,"Paraotha+Butter Paneer");
	strcpy(l[1].sixth_food,"Tandoori Chicken+Apollo fish");
	strcpy(l[1].seventh_food,"Jeera Rice");
	strcpy(l[1].eight_food,"Chole chawal + Dal");
	strcpy(l[1].ninth_food,"Mughalai EGG curry + Rice");
	strcpy(l[1].tenth_food,"Curd Rice");
	l[1].first=250;
	l[1].second=600;
	l[1].third=200;
	l[1].fourth=500;
	l[1].fifth=360;
	l[1].sixth=630;
	l[1].seventh=250;
	l[1].eight=169;
	l[1].ninth=219;
	l[1].tenth=150;
	strcpy(d[1].hotel,"SWAGATH");
	strcpy(d[1].first_food,"Dinner Meal");
	strcpy(d[1].second_food,"CHICKEN BIRIYANI");
	strcpy(d[1].third_food,"Chicken Stroganoff Brown Rice");
	strcpy(d[1].fourth_food,"Panner Biriyani");
	strcpy(d[1].fifth_food,"Veg fried Rice");
	strcpy(d[1].sixth_food,"Non Veg Thali Dinner");
	strcpy(d[1].seventh_food,"Butter Naan + Butter Chicken");
	strcpy(d[1].eight_food,"Rasam Rice + Curd Rice");
	strcpy(d[1].ninth_food,"Paneer Matar Pulav");
	strcpy(d[1].tenth_food,"Gobi Paratha With Curd + Pickle");
	d[1].first=230;
	d[1].second=400;
	d[1].third=279;
	d[1].fourth=500;
	d[1].fifth=180;
	d[1].sixth=630;
	d[1].seventh=250;
	d[1].eight=169;
	d[1].ninth=185;
	d[1].tenth=120;
	strcpy(b[2].hotel,"MEHFIL");
	strcpy(b[2].first_food,"idly with sambhar");
	strcpy(b[2].second_food,"poori+ Bombay Chutney");
	strcpy(b[2].third_food,"Masala dosa with chutney");
	strcpy(b[2].fourth_food,"vada with sambhar");
	strcpy(b[2].fifth_food," Avocado Toasts");
	strcpy(b[2].sixth_food,"Amritsari Chole");
	strcpy(b[2].seventh_food,"Butter Dosa");
	strcpy(b[2].eight_food,"Oats chilla");
	strcpy(b[2].ninth_food,"American Set Breakfast Plate");
	strcpy(b[2].tenth_food,"Keto Breakfast");
	b[2].first=65;
	b[2].second=95;
	b[2].third=83;
	b[2].fourth=100;
	b[2].fifth=160;
	b[2].sixth=180;
	b[2].seventh=150;
	b[2].eight=220;
	b[2].ninth=250;
	b[2].tenth=300;
	strcpy(l[2].hotel,"MEHFIL");
	strcpy(l[2].first_food,"Lunch Meal (VEG)");
	strcpy(l[2].second_food,"Hyderabadi Chicken Dhum Biriyani");
	strcpy(l[2].third_food,"Tomato pula");
	strcpy(l[2].fourth_food,"Mushroom Biriyani");
	strcpy(l[2].fifth_food,"Paraotha+Butter Paneer");
	strcpy(l[2].sixth_food,"Chicken 65 + Paneer Tikka");
	strcpy(l[2].seventh_food,"Paneer Kababs");
	strcpy(l[2].eight_food,"Rajma chawal + Dal");
	strcpy(l[2].ninth_food,"Mughalai EGG curry + Rice");
	strcpy(l[2].tenth_food,"Curd Rice");
	l[2].first=250;
	l[2].second=650;
	l[2].third=200;
	l[2].fourth=450;
	l[2].fifth=360;
	l[2].sixth=530;
	l[2].seventh=250;
	l[2].eight=169;
	l[2].ninth=219;
	l[2].tenth=150;
	strcpy(d[2].hotel,"MEHFIL");
	strcpy(d[2].first_food,"Dinner Meal (Veg)");
	strcpy(d[2].second_food,"Mutton BIRIYANI");
	strcpy(d[2].third_food,"Chicken Fried Rice");
	strcpy(d[2].fourth_food,"Panner Aloo Dhum Biriyani");
	strcpy(d[2].fifth_food,"Veg Dhum Biriyani");
	strcpy(d[2].sixth_food,"Non Veg Thali Dinner");
	strcpy(d[2].seventh_food,"Rumal Roti + Butter Chicken");
	strcpy(d[2].eight_food,"Sambhar Rice + Curd Rice");
	strcpy(d[2].ninth_food,"Aloo paratha + Peas Masala");
	strcpy(d[2].tenth_food,"Prawn Biriyani");
	d[2].first=230;
	d[2].second=670;
	d[2].third=479;
	d[2].fourth=500;
	d[2].fifth=580;
	d[2].sixth=530;
	d[2].seventh=350;
	d[2].eight=169;
	d[2].ninth=195;
	d[2].tenth=660;
	 	strcpy(b[3].hotel,"PARADISE");
	strcpy(b[3].first_food,"idly with sambhar");
	strcpy(b[3].second_food,"poori");
	strcpy(b[3].third_food,"Onion dosa with chutney");
	strcpy(b[3].fourth_food,"vada with sambhar");
	strcpy(b[3].fifth_food," Avocado Toasts");
	strcpy(b[3].sixth_food,"Breakfast Bread Pudding");
	strcpy(b[3].seventh_food,"Poha");
	strcpy(b[3].eight_food,"Hazelnut latte+potato chilli");
	strcpy(b[3].ninth_food,"American Set Breakfast Plate");
	strcpy(b[3].tenth_food,"Upma");
	b[3].first=60;
	b[3].second=90;
	b[3].third=80;
	b[3].fourth=100;
	b[3].fifth=160;
	b[3].sixth=190;
	b[3].seventh=90;
	b[3].eight=290;
	b[3].ninth=250;
	b[3].tenth=111;
	strcpy(l[3].hotel,"PARADISE");
	strcpy(l[3].first_food,"Lunch meal");
	strcpy(l[3].second_food,"Fried Piece Chicken Biriyani + Chicken 65");
	strcpy(l[3].third_food,"All Mixed Vegetable Fried Rice");
	strcpy(l[3].fourth_food,"Panner Tikka Biriyani");
	strcpy(l[3].fifth_food,"Methi Muttar Malai + Roti");
	strcpy(l[3].sixth_food,"Chicken Tikka Curry + Roti");
	strcpy(l[3].seventh_food,"Muttar Pulav");
	strcpy(l[3].eight_food,"Dal Makhani + Chawal");
	strcpy(l[3].ninth_food,"Egg Biriyani");
	strcpy(l[3].tenth_food,"Curd Rice");
	l[3].first=250;
	l[3].second=650;
	l[3].third=300;
	l[3].fourth=539;
	l[3].fifth=369;
	l[3].sixth=634;
	l[3].seventh=350;
	l[3].eight=189;
	l[3].ninth=299;
	l[3].tenth=150;
	strcpy(d[3].hotel,"PARADISE");
	strcpy(d[3].first_food,"Dinner Meal");
	strcpy(d[3].second_food,"Kolkata Chicken Biriyani");
	strcpy(d[3].third_food,"One Pot Chicken Alfredo");
	strcpy(d[3].fourth_food,"Butter Paneer Pulav");
	strcpy(d[3].fifth_food,"Baby Corn Rice");
	strcpy(d[3].sixth_food,"Non Veg Thali Dinner");
	strcpy(d[3].seventh_food,"Butter Naan + Butter Chicken");
	strcpy(d[3].eight_food,"Rasam Rice + Curd Rice");
	strcpy(d[3].ninth_food,"Paneer Makhani + Kulchas");
	strcpy(d[3].tenth_food,"Jeera Rice + Dal Tdka");
	d[3].first=230;
	d[3].second=490;
	d[3].third=379;
	d[3].fourth=400;
	d[3].fifth=280;
	d[3].sixth=630;
	d[3].seventh=250;
	d[3].eight=169;
	d[3].ninth=285;
	d[3].tenth=190;
	strcpy(b[4].hotel,"SPICY RESTAURANT");
	strcpy(b[4].first_food,"idly with sambhar");
	strcpy(b[4].second_food,"puri + Aloo Masala");
	strcpy(b[4].third_food,"plain dosa with chutney");
	strcpy(b[4].fourth_food,"vada with sambhar");
	strcpy(b[4].fifth_food," Chai Thadi(TWO ENGLISH TEA)");
	strcpy(b[4].sixth_food,"Breakfast Bread Pudding");
	strcpy(b[4].seventh_food,"Poha");
	strcpy(b[4].eight_food,"Breakfast Combo");
	strcpy(b[4].ninth_food,"English Break Fast EGG");
	strcpy(b[4].tenth_food,"ALL Mixed Salad");
	b[4].first=70;
	b[4].second=100;
	b[4].third=80;
	b[4].fourth=110;
	b[4].fifth=150;
	b[4].sixth=190;
	b[4].seventh=90;
	b[4].eight=349;
	b[4].ninth=310;
	b[4].tenth=251;
    strcpy(l[4].hotel,"SPICY RESTAURANT");
	strcpy(l[4].first_food,"Tangdi Kebab(NON VEG)");
	strcpy(l[4].second_food,"Manchurian Noodles");
	strcpy(l[4].third_food,"Garlic Naan + Mushroom Masala");
	strcpy(l[4].fourth_food,"Veg Biriyani Jumbo Pack");
	strcpy(l[4].fifth_food,"Pudina Rice");
	strcpy(l[4].sixth_food,"Schezwan Chicken Fried Rice");
	strcpy(l[4].seventh_food,"Chilli Prawns");
	strcpy(l[4].eight_food," Kadai Paneer + Butter Naan ");
	strcpy(l[4].ninth_food,"Mutton Party Pack ");
	strcpy(l[4].tenth_food,"Curd Rice");
	l[4].first=170;
	l[4].second=180;
	l[4].third=300;
	l[4].fourth=639;
	l[4].fifth=169;
	l[4].sixth=210;
	l[4].seventh=310;
	l[4].eight=289;
	l[4].ninth=950;
	l[4].tenth=150;
	strcpy(d[4].hotel,"SPICY RESTAURANT");
	strcpy(d[4].first_food,"Chicken Corn Soup");
	strcpy(d[4].second_food,"Chicken Shawarma");
	strcpy(d[4].third_food,"Punjabi Chicken + Garlic Naan");
	strcpy(d[4].fourth_food,"Chicken Biriyani + Thumps Up (250 ml)");
	strcpy(d[4].fifth_food," Schezwan Baby Corn Rice");
	strcpy(d[4].sixth_food,"Mutton Jumbo Pack");
	strcpy(d[4].seventh_food,"Butter Naan + Praws Masala");
	strcpy(d[4].eight_food,"All Mixed Kichidi");
	strcpy(d[4].ninth_food,"Mushroom Tikka");
	strcpy(d[4].tenth_food," saagwala Cheese Kofta + Tandoori Naan");
	d[4].first=130;
	d[4].second=120;
	d[4].third=479;
	d[4].fourth=300;
	d[4].fifth=290;
	d[4].sixth=930;
	d[4].seventh=250;
	d[4].eight=169;
	d[4].ninth=205;
	d[4].tenth=290;
	strcpy(b[5].hotel,"CAFE BAHAR");
	strcpy(b[5].first_food,"Special Tiffen Combo");
	strcpy(b[5].second_food,"poha");
	strcpy(b[5].third_food,"Rava dosa with chutney");
	strcpy(b[5].fourth_food,"Uttapam\t\t");
	strcpy(b[5].fifth_food," Ginger Tea");
	strcpy(b[5].sixth_food,"Stuffed Omelette");
	strcpy(b[5].seventh_food,"Puliogare");
	strcpy(b[5].eight_food,"Stuffed Bread Plate      ");
	strcpy(b[5].ninth_food,"Pesarattu      \t\t");
	strcpy(b[5].tenth_food,"Fruit Salad");
	b[5].first=150;
	b[5].second=100;
	b[5].third=80;
	b[5].fourth=110;
	b[5].fifth=50;
	b[5].sixth=190;
	b[5].seventh=90;
	b[5].eight=349;
	b[5].ninth=110;
	b[5].tenth=261;
	strcpy(l[5].hotel,"CAFE BAHAR");
	strcpy(l[5].first_food,"Chicken Cantoneese Soup + Chicken Drum Sticks");
	strcpy(l[5].second_food,"Mutton Kheema Naan");
	strcpy(l[5].third_food,"Sweet Corn Soup + Paneer Majestic");
	strcpy(l[5].fourth_food,"Dragon Chicken Dry + Garlic Naan");
	strcpy(l[5].fifth_food,"Mushroom Biriyani Family Pack");
	strcpy(l[5].sixth_food,"Gongura Mutton Biriyani Family Pack");
	strcpy(l[5].seventh_food,"Veg Sheek Kabab");
	strcpy(l[5].eight_food," Kadai Paneer + Butter Naan ");
	strcpy(l[5].ninth_food,"Fry Piece Chicken Biriani ");
	strcpy(l[5].tenth_food,"Veg Burnt Garlic Fried Rice");
	l[5].first=370;
	l[5].second=150;
	l[5].third=350;
	l[5].fourth=539;
	l[5].fifth=469;
	l[5].sixth=650;
	l[5].seventh=259;
	l[5].eight=289;
	l[5].ninth=310;
	l[5].tenth=150;
	strcpy(d[5].hotel,"CAFE BAHAR");
	strcpy(d[5].first_food,"Russian Salad");
	strcpy(d[5].second_food,"Lung Fung Soup + Chettinad Chicken Pepper Dry");
	strcpy(d[5].third_food,"Andhra Chicken Currry + Rumal Roti");
	strcpy(d[5].fourth_food,"Baby Corn Majestic + Sweet Corn Soup");
	strcpy(d[5].fifth_food," Veg Hong Kong Fried Rice");
	strcpy(d[5].sixth_food,"Special Chicken Biriyani");
	strcpy(d[5].seventh_food,"Natukodi Biriyani");
	strcpy(d[5].eight_food,"Aloo Panner Dhum Biriyani");
	strcpy(d[5].ninth_food,"Apollo Fish + Dry prawns ");
	strcpy(d[5].tenth_food," Murg Tawa Frontier");
	d[5].first=110;
	d[5].second=420;
	d[5].third=379;
	d[5].fourth=300;
	d[5].fifth=240;
	d[5].sixth=310;
	d[5].seventh=350;
	d[5].eight=369;
	d[5].ninth=705;
	d[5].tenth=490;
	strcpy(b[6].hotel,"PISTA HOUSE");
	strcpy(b[6].first_food,"Hercules Breakfast");
	strcpy(b[6].second_food,"Idly + Vada + Sambhar");
	strcpy(b[6].third_food,"All Millets Dosa");
	strcpy(b[6].fourth_food,"Green Omelette");
	strcpy(b[6].fifth_food," Mint Tea");
	strcpy(b[6].sixth_food,"Chole Bhatura");
	strcpy(b[6].seventh_food,"Poha");
	strcpy(b[6].eight_food,"Paratha");
	strcpy(b[6].ninth_food,"Pesarattu + Upma");
	strcpy(b[6].tenth_food,"Filter Coffee");
	b[6].first=309;
	b[6].second=200;
	b[6].third=120;
	b[6].fourth=150;
	b[6].fifth=50;
	b[6].sixth=190;
	b[6].seventh=110;
	b[6].eight=79;
	b[6].ninth=130;
	b[6].tenth=75;
	strcpy(l[6].hotel,"PISTA HOUSE");
	strcpy(l[6].first_food,"Fresh Green Salad + Veg Manchow Soup");
	strcpy(l[6].second_food,"Chicken Salad + Chicken -65");
	strcpy(l[6].third_food,"Masala Kulcha + Malai Kofta");
	strcpy(l[6].fourth_food,"Telangana Mutton + Stuffed Paratha");
	strcpy(l[6].fifth_food,"Zafrani Mutton FAMILY PACK");
	strcpy(l[6].sixth_food,"Zafrani Chicken FAMILY PACK");
	strcpy(l[6].seventh_food,"Zafrani Kaju Biriyani");
	strcpy(l[6].eight_food," American Chopsey Non veg ");
	strcpy(l[6].ninth_food,"Veg Chilli Garlic Noodles ");
	strcpy(l[6].tenth_food,"Pista House Special Tikka Pizza");
	l[6].first=370;
	l[6].second=550;
	l[6].third=450;
	l[6].fourth=549;
	l[6].fifth=769;
	l[6].sixth=660;
	l[6].seventh=259;
	l[6].eight=289;
	l[6].ninth=290;
	l[6].tenth=250;
	strcpy(d[6].hotel,"PISTA HOUSE");
	strcpy(d[6].first_food,"Veg Hot & Sour Soup + Mushroom Bell Pepper");
	strcpy(d[6].second_food,"Chicken Lemon Coriander Soup + Loose Prawns");
	strcpy(d[6].third_food,"Keema Naan + Murgh Lababdar");
	strcpy(d[6].fourth_food,"Masala Kulcha + Baby Corn Masala");
	strcpy(d[6].fifth_food," Schezwan Prawn Fried Rice");
	strcpy(d[6].sixth_food,"Boneless Chicken Biriyani");
	strcpy(d[6].seventh_food,"Ulavacharu Biriyani");
	strcpy(d[6].eight_food,"Zafrani Mushroom Biriyani");
	strcpy(d[6].ninth_food,"Mutton Dhum Biriyani ");
	strcpy(d[6].tenth_food," Murg Tawa Frontier");
	d[6].first=330;
	d[6].second=520;
	d[6].third=379;
	d[6].fourth=300;
	d[6].fifth=440;
	d[6].sixth=410;
	d[6].seventh=350;
	d[6].eight=369;
	d[6].ninth=705;
	d[6].tenth=690;
}
int  location()
{
	strcpy(area[1].location1,"SECUNDERABAD");
	strcpy(area[2].location2,"JUBLIEE HILLS");
	strcpy(area[3].location3,"KUKATPALLY");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	printf("SELECT THE AREA\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
	printf("\t\t1) %s\n\n\t\t2) %s\n\n\t\t 3) %s\n\n",area[1].location1,area[2].location2,area[3].location3);
	scanf("%d",&j);
	return j;
}
int search_hotel()
{
	int x=0,k=0,m=0;
	hotel_intial();
	switch(loc)
	{
		case 1:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("HERE ARE THE LIST OF HOTELS\n");
		printf("\t\t\t1) SWAGATH \n\n\t\t\t2) MEHFIL \n\n ");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&x);
		break;
		case 2:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("HERE ARE THE LIST OF HOTELS\n");
		printf("\t\t\t1) PARADISE \n\n\t\t\t2) SPICY RESTAURANT\n\n");
		printf("ENTER THE CHOICE\n");
		scanf("%d",&k);
		break;
		case 3:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("HERE ARE THE LIST OF HOTELS\n");
		printf("\t\t\t1) CAFE BAHAR \n\n\t\t\t2) PISTA HOUSE \n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("\tENTER THE CHOICE\n");
		scanf("%d",&m);
		break;
	}
	if(x==1|| x==2 || k==1 || k==2 || m==1 || m==2)
   {
		if(k==1)
		{
			x=3;
		}
		if(k==2)
		{
			x=4;
		}
	    if(m==1)
		{
			x=5;
		}
	     if(m==2)
		{
			x=6;
		}
		if(x==1)
	   {
	   	x=1;
	   }
	   if(x==2)
	   {
	   	x=2;
	   }
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("\t\t\tENTER THE CHOICE\n");
		printf("\t\t\t\t\t\t[1].BREAKFAST\n\n\t\t\t\t\t\t[2].LUNCH\n\n\t\t\t\t\t\t[3].DINNER\n\n\t\t\t\t\t\t[4].EXIT\n\n");
		scanf("%d",&choice);
		switch(choice)
	   {
		case 1:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		printf("\t\t\t\t\t\t\t !!!!HERE IS THE MENU !!!\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
		printf("\n\t\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<%s>>>>>>>>>>>>>>>>>>>>\n\n",b[x].hotel);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("\n\t\t______________________________________________________________________________________________________");
	    printf("\n\t\t"); 
	    printf("|  Food No.  |   \t\tprice  \t\t\t|  \t\tfood name  \t\t      |");
	    printf("\n\t\t"); 
	    printf("------------------------------------------------------------------------------------------------------");
	    printf("\n\t\t");		
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		printf("\n\t\t\t1)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].first,b[x].first_food);
        printf("\n\t\t\t2)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].second,b[x].second_food);
        printf("\n\t\t\t3)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].third,b[x].third_food);
        printf("\n\t\t\t4)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].fourth,b[x].fourth_food);
        printf("\n\t\t\t5)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].fifth,b[x].fifth_food);
        printf("\n\t\t\t6)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].sixth,b[x].sixth_food);
        printf("\n\t\t\t7)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].seventh,b[x].seventh_food);
        printf("\n\t\t\t8)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].eight,b[x].eight_food);
        printf("\n\t\t\t9)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].ninth,b[x].ninth_food);
        printf("\n\t\t\t10)\t\t\tRS:%d\t\t\t\t\t %s\n",b[x].tenth,b[x].tenth_food);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("\t\t______________________________________________________________________________________________________\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	    printf("enter the option\n");
	    scanf("%d",&option);
	    printf("Enter the quantity\n");
	    scanf("%d",&n);
	    if(option==1)
	    {
	    	g++;
	    total=total+(n*b[x].first);
	    P=n*b[x].first;
	    cart(b,x,option,g,n,P);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    fflush(stdin);
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	else
	    	bill();
	    }
	
	    if(option==2)
	   {
	   	g++;
	   	 total=total+(n*b[x].second);
	   	 P=n*b[x].second;
	   	 cart(b,x,option,g,n,P);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	 else
	         bill();
	   }
	    if(option==3)
	   {
	   	g++;
	   	 total=total+(n*b[x].third);
	   	 P=n*b[x].third;
	   	 cart(b,x,option,g,n,P);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	 else
	          bill();
	   }
	    if(option==4)
	    {
	    	g++;
	    	total=total+(n*b[x].fourth);
	    	P=n*b[x].fourth;
	     cart(b,x,option,g,n,P);
	     printf("DO YOU WANT TO ADD MORE ITEMS\n");
	     printf("1:YES\n2:NO\n");
	     fflush(stdin);
	     scanf("%d",&cl);
	      if(cl==1)
	    	search_hotel();
	    	else
	       bill();
		}
	    if(option==5)
	    {
	    	g++;
	    	total=total+(n*b[x].fifth);
	    	P=n*b[x].fifth;
	    	cart(b,x,option,g,n,P);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	else
	          bill();
		}
	    if(option==6)
	    {
	    	g++;
	    	total=total+(n*b[x].sixth);
	    	P=n*b[x].sixth;
	    cart(b,x,option,g,n,P);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	 else
	         bill(); 
		}
	    if(option==7)
	    {
	    	g++;
	    	total=total+(n*b[x].seventh);
	    	P=n*b[x].seventh;
	    	cart(b,x,option,g,n,P);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	 else
	        bill();
		}
		if(option==8)
	    {
	    	g++;
	    	total=total+(n*b[x].eight);
	    	P=n*b[x].eight;
	    	cart(b,x,option,g,n,P);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	 else
	        bill();
		}
		if(option==9)
	   {
	   	g++;
	   	 total=total+(n*b[x].ninth);
	   	 P=n*b[x].ninth;
	   	 cart(b,x,option,g,n,P);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	 else
	          bill();
	   }
		if(option==10)
	   {
	   	g++;
	   	 total=total+(n*b[x].tenth);
	   	 P=n*b[x].tenth;
	   	 cart(b,x,option,g,n,P);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&cl);
	    if(cl==1)
	    	search_hotel();
	    	 else
	         bill();
	    }
	    break;
		case 2:				
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);			
		printf("\t\t\t\t\t\t\t!!! HERE IS THE MENU !!!\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
		printf("\t\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<%s>>>>>>>>>>>>>>>>>>>>\n\n",l[x].hotel);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
		printf("\n\t\t______________________________________________________________________________________________________");
	    printf("\n\t\t"); 
	    printf("|  Food No.  |   \t\tprice   \t\t\t|  \t\tfood name  \t\t      |");
	    printf("\n\t\t"); 
	    printf("------------------------------------------------------------------------------------------------------");
	    printf("\n");	
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	    printf("\n\t\t\t1)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].first,l[x].first_food);
        printf("\n\t\t\t2)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].second,l[x].second_food);
        printf("\n\t\t\t3)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].third,l[x].third_food);
        printf("\n\t\t\t4)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].fourth,l[x].fourth_food);
        printf("\n\t\t\t5)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].fifth,l[x].fifth_food);
        printf("\n\t\t\t6)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].sixth,l[x].sixth_food);
        printf("\n\t\t\t7)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].seventh,l[x].seventh_food);
        printf("\n\t\t\t8)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].eight,l[x].eight_food);
        printf("\n\t\t\t9)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].ninth,l[x].ninth_food);
        printf("\n\t\t\t10)\t\t\tRS:%d\t\t\t\t\t %s\n",l[x].tenth,l[x].tenth_food);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
		printf("\t\t______________________________________________________________________________________________________");
	    printf("\n");
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("enter the option\n");
	    scanf("%d",&option);
	    printf("Enter the quantity\n");
	    scanf("%d",&n);
		if(option==1)
	    {
	    	L++;
	    	total=total+(n*l[x].first);
	    	P1=n*l[x].first;
	    	cart1(l,x,option,L,n,P1);
	  printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    else
	    	bill();
		}
	    if(option==2)
	    {
	    	L++;
	    	total=total+(n*l[x].second);
	    	P1=n*l[x].second;
	    	cart1(l,x,option,L,n,P1);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
		}
	    if(option==3)
	    {
	    	L++;
	    	total=total+(n*l[x].third);
	    	P1=n*l[x].third;
	    	cart1(l,x,option,L,n,P1);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
		}
	    if(option==4)
	    {
	    	L++;
	    	total=total+(n*l[x].fourth);
	    	P1=n*l[x].fourth;
	    	cart1(l,x,option,L,n,P1);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
		}
	    if(option==5)
	   {
	   	  L++;
	   	 total=total+(n*l[x].fifth);
	   	 P1=n*l[x].fifth;
	   	 cart1(l,x,option,L,n,P1);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
	   }
	    if(option==6)
	   {
	   	L++;
	   	 total=total+(n*l[x].sixth);
	   	 P1=n*l[x].sixth;
	   	 cart1(l,x,option,L,n,P1);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
	   }
	    if(option==7)
	   {
	   	  L++;
	   	 total=total+(n*l[x].seventh);
	   	 P1=n*l[x].seventh;
	   	 cart1(l,x,option,L,n,P1);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
	   }
		if(option==8)
	   {
	   	  L++;
	   	 total=total+(n*l[x].eight);
	   	 P1=n*l[x].eight;
	   	 cart1(l,x,option,L,n,P1);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
	   }
		if(option==9)
	    {
	    	L++;
	    	total=total+(n*l[x].ninth);
	    	P1=n*l[x].ninth;
	        cart1(l,x,option,L,n,P1);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
		}
		if(option==10)
	   {
	   	  L++;
	   	 total=total+(n*l[x].tenth);
	   	 P1=n*l[x].tenth;
	     cart1(l,x,option,L,n,P1);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&c);
	    if(c==1)
	    	search_hotel();
	    	else
	    	bill();
	   }
	    break;
		case 3:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE);
		printf("\t\t\t\t\t\t\t!!! HERE IS THE MENU !!!\t\t\t\t\t\t\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
		printf("\t\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<%s>>>>>>>>>>>>>>>>>>>>\n\n",d[x].hotel);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		printf("\n\t\t_________________________________________________________________________________________________________");
	    printf("\n\t\t"); 
	    printf("|  Food No.  |   \t\tprice  \t\t\t|  \t\tfood name  \t\t        |");
	    printf("\n\t\t"); 
	    printf("---------------------------------------------------------------------------------------------------------");
	    printf("\n");	
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
	    printf("\n\t\t\t1)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].first,d[x].first_food);
        printf("\n\t\t\t2)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].second,d[x].second_food);
        printf("\n\t\t\t3)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].third,d[x].third_food);
        printf("\n\t\t\t4)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].fourth,d[x].fourth_food);
        printf("\n\t\t\t5)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].fifth,d[x].fifth_food);
        printf("\n\t\t\t6)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].sixth,d[x].sixth_food);
        printf("\n\t\t\t7)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].seventh,d[x].seventh_food);
        printf("\n\t\t\t8)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].eight,d[x].eight_food);
        printf("\n\t\t\t9)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].ninth,d[x].ninth_food);
        printf("\n\t\t\t10)\t\t\tRS:%d\t\t\t\t\t %s\n",d[x].tenth,d[x].tenth_food);
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		printf("\t\t_________________________________________________________________________________________________________");
	    printf("\n");
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		printf("enter the option\n");
	    scanf("%d",&option);
	    printf("Enter the quantity\n");
	    scanf("%d",&n);
	    if(option==1)
	    {
	    	H++;
	    	total=total+(n*d[x].first);
	    	P2=n*d[x].first;
	        cart2(d,x,option,H,n,P2);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    	if(ch==2)
	    	bill();
		}
	    if(option==2)
	   {
	   	H++;
	   	total=total+(n*d[x].second);
	   	P2=n*d[x].second;
	     cart2(d,x,option,H,n,P2);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    		else
	    	bill();
	   }
	    if(option==3)
	   {
	   	H++;
	   	 total=total+(n*d[x].third);
	   	 P2=n*d[x].third;
	    cart2(d,x,option,H,n,P2);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    		else
	    	bill();
	   }
	    if(option==4)
	    {
	    	H++;
	    	total=total+(n*d[x].fourth);
	    	P2=n*d[x].fourth;
	       cart2(d,x,option,H,n,P2);
	     printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    		else
	    	bill();
		}
	    if(option==5)
	   {
	   	H++;
	   	 total=total+(n*d[x].fifth);
	   	 P2=n*d[x].fifth;
	     cart2(d,x,option,H,n,P2);
	     printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    		else
	    	bill();
	   }
	    if(option==6)
	    { 
	    H++;
	    	total=total+(n*d[x].sixth);
	    	P2=n*d[x].sixth;
	    cart2(d,x,option,H,n,P2);
	     printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    		else
	    	bill();
		}
	    if(option==7)
	    {
	    	H++;
	    	total=total+(n*d[x].seventh);
	    	P2=n*d[x].seventh;
	    cart2(d,x,option,H,n,P2);
	     printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    		else
	    	bill();
		}
		if(option==8)
	    {
	    	H++;
	    	total=total+(n*d[x].eight);
	    	P2=n*d[x].eight;
	   cart2(d,x,option,H,n,P2);
	   printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    		else
	    	bill();
		}
		if(option==9)
	   {
	   	H++;
	   	 total=total+(n*d[x].ninth);
	   	 P2=n*d[x].ninth;
	     cart2(d,x,option,H,n,P2);
	     printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    	search_hotel();
	    		else
	    	bill();
	   }
		if(option==10)
	    {
	    	H++;
	    	total=total+(n*d[x].tenth);
	    	P2=n*d[x].tenth;
	      cart2(d,x,option,H,n,P2);
	    printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    search_hotel();
	    	else
	    	bill();
		}
	    break;
	    case 4:
	    	exit(1);
	    	break;
	 }
	}
	else
	printf("no");
}
int food()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
	printf("\t\t\tENTER YOUR CHOICE\n");
	printf("\t\t\t\t\t\t[1].BREAKFAST\n\n\t\t\t\t\t\t[2].LUNCH\n\n\t\t\t\t\t\t[3].DINNER\n\n\t\t\t\t\t\t[4].EXIT\n\n");
	scanf("%d",&y);
	hotel_intial();
		switch(y)
		{
			case 1:
		x=1;
		i=1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
		printf("\t\t\t\t\t$$$$$$$$$$$$$$$$  BREAKFAST MENU   $$$$$$$$$$$$$$$$\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
		printf("\n\t\t______________________________________________________________________________________________________");
	    printf("\n\t\t"); 
	    printf("|  Food No.  |   \t\tprice   \t\t\t|  \t\tfood name  \t\t      |");
	    printf("\n\t\t"); 
	    printf("------------------------------------------------------------------------------------------------------");		
		while(x<6)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].first,b[x].first_food);
	        //printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].second,b[x].second_food);
            //printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].third,b[x].third_food);
            //printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].fourth,b[x].fourth_food);
            //printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].fifth,b[x].fifth_food);
            //printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].sixth,b[x].sixth_food);
            //printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].seventh,b[x].seventh_food);
           // printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].eight,b[x].eight_food);
           // printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].ninth,b[x].ninth_food);
            //printf("\t\t----------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,b[x].tenth,b[x].tenth_food);
            printf("\n");
           // printf("\t\t----------------------------------------------------------------------------------------------------------");
		//printf("\t\t______________________________________________________________________________________________________\n");
	    x=x+4;
     	} 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
     	printf("\t\t______________________________________________________________________________________________________\n");
     	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
     	printf("\nENTER YOUR ITEM NUMBER\n");
     	scanf("%d",&food_choice);
     	printf("Enter the quantity\n");
     	scanf("%d",&v);
     	    if(food_choice == 1 || food_choice == 11 )
     	    {
     	    	if(food_choice==1)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].first);
     	    		V=v*b[x].first;
     	    		T++;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==11)
				 {
				     	x=5;
				 		total=total+(v*b[x].first);
	                     V=v*b[x].first;
	                     T++;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	            printf("DO YOU WANT TO ADD MORE ITEMS\n");
	            printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
	       }
     	     if(food_choice == 2 || food_choice == 12 )
     	    {
	        if(food_choice==2)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].second);
	                 T++;
	                 V=v*b[x].second;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==12)
				 {
				     	x=5;
				 		total=total+(v*b[x].second);
	                     T++;
	                     V=v*b[x].second;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 3 || food_choice == 13 )
     	    {
	         if(food_choice==3)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].third);
	                T++;
	                V=v*b[x].third;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==13)
				 {
				     	x=5;
				 		total=total+(v*b[x].third);
	                     T++;
	                     V=v*b[x].third;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	         printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
			 if(food_choice == 4 || food_choice == 14 )
     	    {
	        if(food_choice==4)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].fourth);
	                T++;
	                V=v*b[x].fourth;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==14)
				 {
				     	x=5;
				 		total=total+(v*b[x].fourth);
	                     T++;
	                     V=v*b[x].fourth;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 5 || food_choice == 15 )
     	    {
	         if(food_choice==5)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].fifth);
	                T++;
	                V=v*b[x].fifth;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==15)
				 {
				     	x=5;
				 		total=total+(v*b[x].fifth);
	                    T++;
	                    V=v*b[x].fifth;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	    if(food_choice == 6 || food_choice == 16 )
     	    {
	        if(food_choice==6)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].sixth);
	                T++;
	                V=v*b[x].sixth;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==16)
				 {
				     	x=5;
				 		total=total+(v*b[x].sixth);
	                    T++;
	                    V=v*b[x].sixth;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	         printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
		    if(food_choice == 7 || food_choice == 17 )
     	    {
	        if(food_choice==7)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].seventh);
	                 T++;
	                 V=v*b[x].seventh;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==17)
				 {
				     	x=5;
				 		total=total+(v*b[x].seventh);
	                    T++;
	                    V=v*b[x].seventh;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	    if(food_choice == 8 || food_choice == 18 )
     	    {
	         if(food_choice==8)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].eight);
	                T++;
	                V=v*b[x].eight;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==18)
				 {
				     	x=5;
				 		total=total+(v*b[x].eight);
	                    T++;
	                    V=v*b[x].eight;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	    if(food_choice == 9 || food_choice == 19 )
     	    {
	         if(food_choice==9)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].ninth);
	                T++;
	                V=v*b[x].ninth;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==19)
				 {
				     	x=5;
				 		total=total+(v*b[x].ninth);
	                     T++;
	                     V=v*b[x].ninth;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	    if(food_choice == 10 || food_choice == 20 )
     	    {
	        if(food_choice==10)
     	    	{
     	    		x=1;
     	    		total=total+(v*b[x].tenth);
	                T++;
	                V=v*b[x].tenth;
	                 cart3(b,x,food_choice,T,v,V);
				 }
				 if(food_choice==20)
				 {
				     	x=5;
				 		total=total+(v*b[x].tenth);
	                    T++;
	                    V=v*b[x].tenth;
	                     cart3(b,x,food_choice,T,v,V);
				 }
	         printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	    break;
     	case 2:
     		x=3;
     		i=1;
     		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
     		printf("\t\t\t\t\t$$$$$$$$$$$$$$$   LUNCH MENU   $$$$$$$$$$$$$$\n");
     	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		printf("\n\t\t______________________________________________________________________________________________________");
	    printf("\n\t\t"); 
	    printf("|  Food No.  |   \t\tprice   \t\t\t|  \t\tfood name  \t\t      |");
	    printf("\n\t\t"); 
	    printf("------------------------------------------------------------------------------------------------------");
		while(x<=4)
		{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
	    printf("\n");	
	    printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].first,l[x].first_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].second,l[x].second_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].third,l[x].third_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].fourth,l[x].fourth_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].fifth,l[x].fifth_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].sixth,l[x].sixth_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].seventh,l[x].seventh_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].eight,l[x].eight_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].ninth,l[x].ninth_food);
        printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,l[x].tenth,l[x].tenth_food);
	    //printf("\t\t______________________________________________________________________________________________________");
	    printf("\n");
	    x=x+1;
	    } 
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	    printf("\t\t______________________________________________________________________________________________________");
	    printf("\n");
	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	    printf("ENTER YOUR ITEM NUMBER\n");
     	scanf("%d",&food_choice);
     	printf("Enter the quantity\n");
     	scanf("%d",&v);
     	   if(food_choice == 1 || food_choice == 11 )
     	    {
	         if(food_choice==1)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].first);
     	    		A++;
	                 Z=v*l[x].first;
	                cart4(l,x,food_choice,A,v,Z);;
				 }
				 if(food_choice==11)
				 {
				     	x=4;
				     	A++;
				 		total=total+(v*l[x].first);
				 		Z=v*l[x].first;
				 		 cart4(l,x,food_choice,A,v,Z);
	                    
				 }
	           printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 2 || food_choice == 12 )
     	    {
	         if(food_choice==2)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].second);
	                 Z=v*l[x].second;
	                 A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==12)
				 {
				     	x=4;
				 		total=total+(v*l[x].second);
	                     Z=v*l[x].second;
	                     A++;
	                      cart4(l,x,food_choice,A,v,Z);
				 }
	           printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 3 || food_choice == 13 )
     	    {
	        if(food_choice==3)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].third);
	                 Z=v*l[x].third;
	                 A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==13)
				 {
				     	x=4;
				 		total=total+(v*l[x].third);
	                    Z=v*l[x].third;
	                    A++;
	                     cart4(l,x,food_choice,A,v,Z);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 4 || food_choice == 14 )
     	    {
	        if(food_choice==4)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].fourth);
	                 Z=v*l[x].fourth;
	                 A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==14)
				 {
				     	x=4;
				 		total=total+(v*l[x].fourth);
	                     Z=v*l[x].fourth;
	                     A++;
	                      cart4(l,x,food_choice,A,v,Z);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 5 || food_choice == 15 )
     	    {
	         if(food_choice==5)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].fifth);
	                Z=v*l[x].fifth;
	                A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==15)
				 {
				     	x=4;
				 		total=total+(v*l[x].fifth);
	                     Z=v*l[x].fifth;
	                     A++;
	                      cart4(l,x,food_choice,A,v,Z);
				 }
	           printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 6 || food_choice == 16 )
     	    {
	         if(food_choice==6)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].sixth);
	                 Z=v*l[x].sixth;
	                 A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==16)
				 {
				     	x=4;
				 		total=total+(v*l[x].sixth);
	                     Z=v*l[x].sixth;
	                     A++;
	                      cart4(l,x,food_choice,A,v,Z);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
			  if(food_choice == 7 || food_choice == 17 )
     	    {
	         if(food_choice==7)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].seventh);
	                 Z=v*l[x].seventh;
	                 A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==17)
				 {
				     	x=4;
				 		total=total+(v*l[x].seventh);
	                     Z=v*l[x].seventh;
	                     A++;
	                      cart4(l,x,food_choice,A,v,Z);
				 }
	           printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 8 || food_choice == 18 )
     	    {
	         if(food_choice==8)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].eight);
	                 Z=v*l[x].eight;
	                 A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==18)
				 {
				     	x=4;
				 		total=total+(v*l[x].eight);
	                     Z=v*l[x].eight;
	                     A++;
	                      cart4(l,x,food_choice,A,v,Z);
				 }
	           printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 9 || food_choice == 19 )
     	    {
	         if(food_choice==9)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].ninth);
	                 Z=v*l[x].ninth;
	                 A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==19)
				 {
				     	x=4;
				 		total=total+(v*l[x].ninth);
	                     Z=v*l[x].ninth;
	                     A++;
	                      cart4(l,x,food_choice,A,v,Z);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 10 || food_choice == 20 )
     	    {
	         if(food_choice==10)
     	    	{
     	    		x=3;
     	    		total=total+(v*l[x].tenth);
	                 Z=v*l[x].tenth;
	                 A++;
	                  cart4(l,x,food_choice,A,v,Z);
				 }
				 if(food_choice==20)
				 {
				     	x=4;
				 		total=total+(v*l[x].tenth);
	                     Z=v*l[x].tenth;
	                     A++;
	                      cart4(l,x,food_choice,A,v,Z);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&f);
	          if(f==1)
	          food();
	          else
	          bill2();
     	    }
     	    break;
	    case 3:
			x=2;
			i=1;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			printf("\t\t\t\t\t$$$$$$$$$$$$$$$  DINNER MENU  $$$$$$$$$$$$$$$\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
			printf("\n\t\t_________________________________________________________________________________________________________");
	    printf("\n\t\t"); 
	    printf("|  Food No.  |   \t\tprice   \t\t\t|  \t\tfood name  \t\t        |");
	    printf("\n\t\t"); 
	    printf("---------------------------------------------------------------------------------------------------------");
		while(x<=6)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	 printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].first,d[x].first_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].second,d[x].second_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].third,d[x].third_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].fourth,d[x].fourth_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].fifth,d[x].fifth_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].sixth,d[x].sixth_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].seventh,d[x].seventh_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].eight,d[x].eight_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].ninth,d[x].ninth_food);
     printf("\n\t\t\t%d)\t\t\tRS:%d\t\t\t\t\t %s\n",i++,d[x].tenth,d[x].tenth_food);
		//printf("\t\t_________________________________________________________________________________________________________");
	    printf("\n");
		x=x+4;
	   }
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
	   	printf("\t\t_________________________________________________________________________________________________________");
	   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	   	printf("\n");
	    printf("ENTER YOUR ITEM NUMBER\n");
     	scanf("%d",&food_choice);
     	printf("Enter the quantity\n");
     	scanf("%d",&v);
     	    if(food_choice == 1 || food_choice == 11 )
     	    {
	         if(food_choice==1)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].first);
	                 E++;
	                 O=v*d[x].first;
	                 cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==11)
				 {
				     	x=6;
				 		total=total+(v*d[x].first);
	                     E++;
	                     O=v*d[x].first;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 2 || food_choice == 12 )
     	    {
	         if(food_choice==2)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].second);
	                 E++;
	                 O=v*d[x].second;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==12)
				 {
				     	x=6;
				 		total=total+(v*d[x].second);
	                     E++;
	                     O=v*d[x].second;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 3 || food_choice == 13 )
     	    {
	         if(food_choice==3)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].third);
	                 E++;
	                 O=v*d[x].third;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==13)
				 {
				     	x=6;
				 		total=total+(v*d[x].third);
	                     E++;
	                     O=v*d[x].third;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 4 || food_choice == 14 )
     	    {
	         if(food_choice==4)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].fourth);
	                 E++;
	                 O=v*d[x].fourth;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==14)
				 {
				     	x=6;
				 		total=total+(v*d[x].fourth);
	                     E++;
	                     O=v*d[x].fourth;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	           printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 5 || food_choice == 15 )
     	    {
	        if(food_choice==5)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].fifth);
	                 E++;
	                 O=v*d[x].fifth;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==15)
				 {
				     	x=6;
				 		total=total+(v*d[x].fifth);
	                     E++;
	                     O=v*d[x].fifth;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	          bill2();
     	    }
     	     if(food_choice == 6 || food_choice == 16 )
     	    {
	         if(food_choice==6)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].sixth);
	                 E++;
	                 O=v*d[x].sixth;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==16)
				 {
				     	x=6;
				 		total=total+(v*d[x].sixth);
	                     E++;
	                     O=v*d[x].sixth;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	           printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	           else
			  bill2();
     	    }
			  if(food_choice == 7 || food_choice == 17 )
     	    {
	         if(food_choice==7)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].seventh);
	                 E++;
	                 O=v*d[x].seventh;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==17)
				 {
				     	x=6;
				 		total=total+(v*d[x].seventh);
	                     E++;
	                     O=v*d[x].seventh;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	           printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	           else
			  bill2();
     	    }
     	     if(food_choice == 8 || food_choice == 18 )
     	    {
	         if(food_choice==8)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].eight);
	                 E++;
	                 O=v*d[x].eight;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==18)
				 {
				     	x=6;
				 		total=total+(v*d[x].eight);
	                     E++;
	                     O=v*d[x].eight;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	           else
			  bill2();
     	    }
     	     if(food_choice == 9 || food_choice == 19 )
     	    {
	         if(food_choice==9)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].ninth);
	                 E++;
	                 O=v*d[x].ninth;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==19)
				 {
				     	x=6;
				 		total=total+(v*d[x].ninth);
	                     E++;
	                     O=v*d[x].ninth;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	          printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	           else
			  bill2();
     	    }
     	     if(food_choice == 10 || food_choice == 20 )
     	    {
	         if(food_choice==10)
     	    	{
     	    		x=2;
     	    		total=total+(v*d[x].tenth);
	                 E++;
	                 O=v*d[x].tenth;
	                  cart5(d,x,food_choice,E,v,O);
				 }
				 if(food_choice==20)
				 {
				     	x=6;
				 		total=total+(v*d[x].tenth);
	                     E++;
	                     O=v*d[x].tenth;
	                      cart5(d,x,food_choice,E,v,O);
				 }
	         printf("DO YOU WANT TO ADD MORE ITEMS\n");
	    printf("1:YES\n2:NO\n");
	          scanf("%d",&z);
	          if(z==1)
	          food();
	          else
	           bill2();
     	    }
     	    break;
     	    case 4:
     	    	bill();
     	    	break;
     }
 }
 int cart(struct hotels*ptr,int pr,int q,int G,int Q,int mon)
 {
 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
 		printf("TOTAL AMOUNT IN YOUR CART:%d\n\n",total);
 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
 	if(i<G)
 	{
 		if(pr==1||pr==2||pr==3||pr==4||pr==5||pr==6)
		 {
		 	if(q==1)
		 	{
		 		strcpy(ord.h[i].item,b[pr].first_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==2)
			{
				strcpy(ord.h[i].item,b[pr].second_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==3)
			{
				strcpy(ord.h[i].item,b[pr].third_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==4)
			{
				strcpy(ord.h[i].item,b[pr].fourth_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==5)
			{
					strcpy(ord.h[i].item,b[pr].fifth_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==6)
			{
				strcpy(ord.h[i].item,b[pr].sixth_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==7)
			{
				strcpy(ord.h[i].item,b[pr].seventh_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==8)
			{
				strcpy(ord.h[i].item,b[pr].eight_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==9)
			{
				strcpy(ord.h[i].item,b[pr].ninth_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
			if(q==10)
			{
				strcpy(ord.h[i].item,b[pr].tenth_food);
		 		ord.h[i].quantity=Q;
		 		ord.h[i].TOTAL=mon;
			}
		} 
		i++;
	}
	
}
 int cart1(struct hotels*ptr,int pr,int q,int G,int Q,int mon)
 {
 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
 	printf("TOTAL AMOUNT IN YOUR CART:%d\n\n",total);
 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
 	if(k<G)
	 {
 		if(pr==1||pr==2||pr==3||pr==4||pr==5||pr==6)
		 {
		 	if(q==1)
		 	{
		 		strcpy(ordd.h[K].item,l[pr].first_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==2)
			{
				strcpy(ordd.h[K].item,l[pr].second_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==3)
			{
				strcpy(ordd.h[K].item,l[pr].third_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==4)
			{
				strcpy(ordd.h[K].item,l[pr].fourth_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==5)
			{
					strcpy(ordd.h[K].item,l[pr].fifth_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==6)
			{
				strcpy(ordd.h[K].item,l[pr].sixth_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==7)
			{
				strcpy(ordd.h[K].item,l[pr].seventh_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==8)
			{
				strcpy(ordd.h[K].item,l[pr].eight_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==9)
			{
				strcpy(ordd.h[K].item,l[pr].ninth_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
			if(q==10)
			{
				strcpy(ordd.h[K].item,l[pr].tenth_food);
		 		ordd.h[K].quantity=Q;
		 		ordd.h[K].TOTAL=mon;
			}
		}
		K++;
	}
	}
int cart2(struct hotels*ptr,int pr,int q,int G,int Q,int mon)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	printf("TOTAL AMOUNT IN YOUR CART:%d\n\n",total);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	if(J<G)
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
 	{
 		if(pr==1||pr==2||pr==3||pr==4||pr==5||pr==6)
		 {
		 	if(q==1)
		 	{
		 		strcpy(orddd.h[J].item,d[pr].first_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==2)
			{
				strcpy(orddd.h[J].item,d[pr].second_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==3)
			{
				strcpy(orddd.h[J].item,d[pr].third_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==4)
			{
				strcpy(orddd.h[J].item,d[pr].fourth_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==5)
			{
					strcpy(orddd.h[J].item,d[pr].fifth_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==6)
			{
				strcpy(orddd.h[J].item,d[pr].sixth_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==7)
			{
				strcpy(orddd.h[J].item,d[pr].seventh_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==8)
			{
				strcpy(orddd.h[J].item,d[pr].eight_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==9)
			{
				strcpy(orddd.h[J].item,d[pr].ninth_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
			if(q==10)
			{
				strcpy(orddd.h[J].item,d[pr].tenth_food);
		 		orddd.h[J].quantity=Q;
		 		orddd.h[J].TOTAL=mon;
			}
		} 
		J++;
	}
}
void bill()
{
	//	printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		//printf("FOOD ITEM \t\t\t\\t QUANTITY \t\t\t\tAMOUNT");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
			printf("\t\t\t\t\t********** ITEMS IN YOUR CART **********\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
		printf("\tQUANTITY \t\t       AMOUNT \t\t\t       ITEM DESCRIPTION\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	for(I=0;I<i;I++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n",ord.h[I].quantity,ord.h[I].TOTAL,ord.h[I].item);
	}
		for(I=0;I<K;I++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n",ordd.h[I].quantity,ordd.h[I].TOTAL,ordd.h[I].item);
	}
		for(I=0;I<J;I++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n",orddd.h[I].quantity,orddd.h[I].TOTAL,orddd.h[I].item);
	}
		printf("\n\nTOTAL=\t%d",total);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			printf("\nENTER CHOICE\n");
		printf("\n{1}.PROCCED TO ORDER\n:{2}.EXIT\n");
		scanf("%d",&C);
		if(C==1)
		{
			ORDER1();
		}
		else
		exit(1);
		
}
int cart3(struct hotels*ptr,int pr,int q,int G,int Q,int mon)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		printf("TOTAL AMOUNT IN YOUR CART:%d\n\n",total);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_GREEN);
	if(M<G)
	{
	if(pr==1 || pr==5 )
	{
		if(q==1||q==11)
		{
			if(q==1)
			pr=1;
			strcpy(w.h[M].item,b[pr].first_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==11)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].first_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==2||q==12)
		{
			if(q==2)
			pr=1;
			strcpy(w.h[M].item,b[pr].second_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==12)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].second_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==3||q==13)
		{
			if(q==3)
			pr=1;
			strcpy(w.h[M].item,b[pr].third_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==13)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].third_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==4||q==14)
		{
			if(q==4)
			pr=1;
			strcpy(w.h[M].item,b[pr].fourth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==14)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].fourth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==5||q==15)
		{
			if(q==5)
			pr=1;
			strcpy(w.h[M].item,b[pr].fifth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==15)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].fifth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==6||q==16)
		{
			if(q==6)
			pr=1;
			strcpy(w.h[M].item,b[pr].sixth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==16)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].sixth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==7||q==17)
		{
			if(q==7)
			pr=1;
			strcpy(w.h[M].item,b[pr].seventh_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==17)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].seventh_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==8||q==18)
		{
			if(q==8)
			pr=1;
			strcpy(w.h[M].item,b[pr].eight_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==18)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].eight_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==9||q==19)
		{
			if(q==9)
			pr=1;
			strcpy(w.h[M].item,b[pr].ninth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==19)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].ninth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
		if(q==10||q==20)
		{
			if(q==10)
			pr=1;
			strcpy(w.h[M].item,b[pr].tenth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			if(q==20)
			{
			pr=5;
			strcpy(w.h[M].item,b[pr].tenth_food);
			w.h[M].quantity=Q;
			w.h[M].TOTAL=mon;
			}
		}
	}
	M++;
}
}
int cart4(struct hotels*ptr,int pr,int q,int G,int Q,int mon)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	printf("TOTAL AMOUNT IN YOUR CART:%d\n\n",total);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	if(N<G)
	{
	if(pr==3 || pr==4 )
	{
		if(q==1||q==11)
		{
			if(q==1)
			pr=3;
			strcpy(w1.h[N].item,l[pr].first_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==11)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].first_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==2||q==12)
		{
			if(q==2)
			pr=3;
			strcpy(w1.h[N].item,l[pr].second_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==12)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].second_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==3||q==13)
		{
			if(q==3)
			pr=3;
			strcpy(w1.h[N].item,l[pr].third_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==13)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].third_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==4||q==14)
		{
			if(q==4)
			pr=3;
			strcpy(w1.h[N].item,l[pr].fourth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==14)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].fourth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==5||q==15)
		{
			if(q==5)
			pr=3;
			strcpy(w1.h[N].item,l[pr].fifth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==15)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].fifth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==6||q==16)
		{
			if(q==6)
			pr=3;
			strcpy(w1.h[N].item,l[pr].sixth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==16)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].sixth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==7||q==17)
		{
			if(q==7)
			pr=3;
			strcpy(w1.h[N].item,l[pr].seventh_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==17)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].seventh_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==8||q==18)
		{
			if(q==8)
			pr=3;
			strcpy(w1.h[N].item,l[pr].eight_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==18)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].eight_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==9||q==19)
		{
			if(q==9)
			pr=3;
			strcpy(w1.h[N].item,l[pr].ninth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==19)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].ninth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
		if(q==10||q==20)
		{
			if(q==10)
			pr=3;
			strcpy(w1.h[N].item,l[pr].tenth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			if(q==20)
			{
			pr=4;
			strcpy(w1.h[N].item,l[pr].tenth_food);
			w1.h[N].quantity=Q;
			w1.h[N].TOTAL=mon;
			}
		}
	}
	N++;
}
}
int cart5(struct hotels*ptr,int pr,int q,int G,int Q,int mon)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	printf("TOTAL AMOUNT IN YOUR CART:%d\n\n",total);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	if(B<G)
	{
	if(pr==2 || pr==6 )
	{
		if(q==1||q==11)
		{
			if(q==1)
			pr=2;
			strcpy(w2.h[B].item,d[pr].first_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==11)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].first_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==2||q==12)
		{
			if(q==2)
			pr=2;
			strcpy(w2.h[B].item,d[pr].second_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==12)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].second_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==3||q==13)
		{
			if(q==3)
			pr=2;
			strcpy(w2.h[B].item,d[pr].third_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==13)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].third_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==4||q==14)
		{
			if(q==4)
			pr=2;
			strcpy(w2.h[B].item,d[pr].fourth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==14)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].fourth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==5||q==15)
		{
			if(q==5)
			pr=2;
			strcpy(w2.h[B].item,d[pr].fifth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==15)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].fifth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==6||q==16)
		{
			if(q==6)
			pr=2;
			strcpy(w2.h[B].item,d[pr].sixth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==16)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].sixth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==7||q==17)
		{
			if(q==7)
			pr=2;
			strcpy(w2.h[B].item,d[pr].seventh_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==17)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].seventh_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==8||q==18)
		{
			if(q==8)
			pr=2;
			strcpy(w2.h[B].item,d[pr].eight_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==18)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].eight_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==9||q==19)
		{
			if(q==9)
			pr=2;
			strcpy(w2.h[B].item,d[pr].ninth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==19)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].ninth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
		if(q==10||q==20)
		{
			if(q==10)
			pr=2;
			strcpy(w2.h[B].item,d[pr].tenth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			if(q==20)
			{
			pr=6;
			strcpy(w2.h[B].item,d[pr].tenth_food);
			w2.h[B].quantity=Q;
			w2.h[B].TOTAL=mon;
			}
		}
	}
	B++;
}
}
void bill2()
{
	//printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	printf("\t\t\t\t\t********** ITEMS IN YOUR CART **********\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE);
		printf("\tQUANTITY \t\t       AMOUNT \t\t\t       ITEM DESCRIPTION\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
	for(S=0;S<M;S++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",w.h[S].quantity,w.h[S].TOTAL,w.h[S].item);
	}
	for(S=0;S<N;S++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",w1.h[S].quantity,w1.h[S].TOTAL,w1.h[S].item);
	}
	for(S=0;S<B;S++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",w2.h[S].quantity,w2.h[S].TOTAL,w2.h[S].item);
	}
		//printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		printf("\nTOTAL\t=\t%d\t",total);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		printf("\nENTER CHOICE\n");
		printf("\n{1}.PROCCED TO ORDER\n:{2}.EXIT\n\n");
		scanf("%d",&W);
		if(W==1)
		{
			ORDER();
		}
		if(W==2)
		{
		exit(1);
	}
}
void ORDER()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
	printf("ENTER YOUR PIN CODE:\n");
	scanf("%s",hno);
	printf("ENTER YOUR MANDAL:\n");
	scanf("%s",man);
	printf("PLEASE ENTER YOUR AREA NAME:\n");
	scanf("%s",F);
	printf("ENTER YOUR PLOT NUMBER:\n");
	scanf("%s",plot);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	printf("**************YOUR BILL***********\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	printf("\tQUANTITY \t\t       AMOUNT \t\t\t       ITEM DESCRIPTION\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	for(S=0;S<M;S++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",w.h[S].quantity,w.h[S].TOTAL,w.h[S].item);
	}
	for(S=0;S<N;S++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",w1.h[S].quantity,w1.h[S].TOTAL,w1.h[S].item);
	}
	for(S=0;S<B;S++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",w2.h[S].quantity,w2.h[S].TOTAL,w2.h[S].item);
	}
	printf("\tCGST=%.2f",(total*0.15));
	printf("\tTOTAL=%.3f\n\n",total+(total*0.15));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN);
	printf("YOUR ORDER WILL BE DELIVERED TO %s,%s,%s,%s WITHIN MINITUES :-)\n\n",plot,F,man,hno);
	printf("\t\t\t\t\t//////// CASH ON DELIVERY OPTION IS PROVIDED////////\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	printf("\t\t\t\t\t !!!!!!!!! THANK YOU FOR ORDERING IN SWIGGY---The Flavours Of Your Wish !!!!!!!!\n\n");
	printf("\t\t\t\t\t$$$$$$$$$$$$$$$$ ENJOY YOUR MEAL $$$$$$$$$$$$$$$$$");
	exit(1);
}
void ORDER1()
{
	printf("ENTER YOUR PIN CODE:\n");
	scanf("%s",hno);
	printf("ENTER YOUR MANDAL:\n");
	scanf("%s",man);
	printf("PLEASE ENTER YOUR AREA NAME:\n");
	scanf("%s",F);
	printf("ENTER YOUR PLOT NUMBER:\n");
	scanf("%s",plot);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	printf("\n\n**************YOUR BILL***********\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	printf("\tQUANTITY \t\t       AMOUNT \t\t\t       ITEM DESCRIPTION\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		for(I=0;I<i;I++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",ord.h[I].quantity,ord.h[I].TOTAL,ord.h[I].item);
	}
		for(I=0;I<K;I++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",ordd.h[I].quantity,ordd.h[I].TOTAL,ordd.h[I].item);
	}
		for(I=0;I<J;I++)
	{
	printf("\t%d\t\t\t\t%d\t\t\t\t%s\n\n",orddd.h[I].quantity,orddd.h[I].TOTAL,orddd.h[I].item);
    }
	printf("\n\tCGST=%.2f",(total*0.15));
	printf("\n\tTOTAL=%.3f\n",total+(total*0.15));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	printf("YOUR ORDER WILL BE DELIVERED TO %s %s WITHIN MINITUES :-)\n\n",plot,man,F,hno);
	printf("\t\t\t\t\t//////// CASH ON DELIVERY OPTION IS PROVIDED////////\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	printf("\t\t\t\t\t !!!!!!!!! THANK YOU FOR ORDERING IN SWIGGY---The Flavours Of Your Wish !!!!!!!!\n\n");
	printf("\t\t\t\t\t$$$$$$$$$$$$$$$$ ENJOY YOUR MEAL $$$$$$$$$$$$$$$$$");
	exit(1);
}




