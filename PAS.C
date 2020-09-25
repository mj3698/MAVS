#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<dos.h>

char new_id[20],new_pass[20];
int password_count=3;

void pas()
{
    int gdriver = DETECT, gmode, errorcode;
    int midx,midy;
    char user_id[20],password[20],user_id1[20]={"s"},user_id2[20]={"mehul"},user_id3[]={"zahir"},user_id4[]={"vasanthi"},password1[]={"s"},password2[]={"m123"},password3[]={"z123"},password4[]={"v123"};
    int hour,minute,second;
    struct date today;
    struct time stime;
    gettime(&stime);
    getdate(&today);
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    rectangle(midx-319,midy-239,midx+319,midy+239);//o1
    rectangle(midx-317,midy-237,midx+317,midy+237);//o2
    rectangle(midx-310,midy-230,midx+310,(midy+20)-175);//o3
    rectangle(midx-305,midy-225,midx+165,(midy+20)-180);//i1
    rectangle(midx+170,midy-225,midx+305,(midy+20)-180);//i2
    gotoxy(27,4);
    printf("LOGIN PAGE");
    gotoxy(63,3);
    printf("Date: %d/%d/%d",today.da_day,today.da_mon,today.da_year);
    gotoxy(63,4);
    printf("Time: %d:%d:%d",stime.ti_hour,stime.ti_min,stime.ti_sec);
    rectangle(midx-310,midy-150,midx+310,midy-105);//i3
    gotoxy(4,7);
    printf("Enter Your Id: ");
    scanf("%s",&user_id);
    gotoxy(4,8);
    printf("Enter Password: ");
    scanf("%s",&password);
    if((strcmp(user_id1,user_id)==0 && strcmp(password1,password)==0) || (strcmp(user_id2,user_id)==0 &&strcmp(password2,password)==0) || (strcmp(user_id3,user_id)==0 &&strcmp(password3,password)==0) || (strcmp(user_id4,user_id)==0 &&strcmp(password4,password)==0) || (strcmp(new_id,user_id)==0 &&strcmp(new_pass,password)==0))
    {

	printf("Welcome");
	getch();
    }
    else
    {
	while(password_count>=0)
	{
		int choice;
		printf("\nInvalid user id and/or password!\nDo you wish to continue or create a guest account?\n1. continue.\n2. Create new.\n3. Exit.\nYour choice: ");
		scanf("%d",&choice);
		if(choice==1)
			{
				printf("\nYou have %d attempts midx!\nPress any key to continue...",password_count--);
				getch();
				if(password_count==0)
					{
					printf("\nYou've no attempts midx!\nTap any key to exit!");
					getch();
					exit(0);
					}
				main();
				break;
			}
		else if(choice==2)
			{
				printf("Enter a new guest id: ");
				scanf("%s",&new_id);
				printf("Enter a new guest password: ");
				scanf("%s",&new_pass);
				printf("Id and password created for the guest!\nTap any key to return to the main menu.\n");
				getch();
				main();
				break;
			}
		else if(choice==3)
			exit(0);
		else
			printf("wrong choice entered!");
	}
    }
    //getch();
    exit(0);
    closegraph();
}

