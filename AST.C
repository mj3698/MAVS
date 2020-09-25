//include these header files:
#include"main.h"
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>


void riddle();
void calculator();
void head_and_tail();
void weather();
void currency_converter();
void temperature_converter();
void quotes();
void bmi_calc();
void assi_info();

void ast()
{
int m;
clrscr();
printf("1. Lets's solve some riddles.\n2. Calculator.\n3. Head and tail.\n4. Give me the weather forcast.\n5. I want to convert currency. \n6. I want to convert temperature.\n7. Show me some motivational quotes.\n8. BMI calculator.\n9. Info about the assistant.\n10. Exit.\nYour choice: ");
scanf("%d",&m);
switch(m)
{
case 1:
riddle();
break;
case 2:
calculator();
break;
case 3:
head_and_tail();
break;
case 4:
weather();
break;
case 5:
currency_converter();
break;
case 6:
temperature_converter();
break;
case 7:
quotes();
break;
case 8:
bmi_calc();
break;
case 9:
assi_info();
break;
case 10:
{
	printf("Press any key to exit!");
	exit(0);
}
default:
printf("Invalid choice \!");
}
getch();
}

//*Riddle:
void riddle()
{
int rv;
clrscr();
randomize();
rv=rand()%100;
printf("rv=%d\n",rv);
if(rv>=0 && rv<11)
{ char answer[20];
printf("My goal is to have $12. If I save $1 a month then it will take me 12 months to save $12. If I save $2 a month then it will take me 6 months to save $12. What if I saved $1.50 each month? How many months would it take me to save $12?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"8")==0 || strcmp(answer,"eight")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is 8/Eight");
}
else if(rv>=11 && rv<21)
{ char answer[20];
printf("I start with M and end with X. I have a never ending amount of letters. What am I?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"mailbox")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is mailbox");
}
else if(rv>=21 && rv<31)
{ char answer[20];
printf("I have a head & no body, but I do have a tail. What am I?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"coin")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is coin");
}
else if(rv>=31 && rv<41)
{ char answer[20];
printf("If you are running in a race and pass the second place person, what place are you in?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"2nd")==0 || strcmp(answer,"second")==0 || strcmp(answer,"2")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is 2nd/second");
}
else if(rv>=41 && rv<51)
{ char answer[20];
printf("I can be made and I can be played. I can be cracked and I can be told. What am I?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"joke")==0 || strcmp(answer,"jokes")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is joke");
}
else if(rv>=51 && rv<61)
{ char answer[20];
printf("What has a bed but doesn't sleep and a mouth but never eats?:\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"river")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is river");
}
else if(rv>=61 && rv<71)
{ char answer[20];
printf("We see it once in a year, twice in a week but never in a day. What is it?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"E")==0 || strcmp(answer,"e")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is e");
}
else if(rv>=71 && rv<81)
{ char answer[20];
printf("I am a container with no sides and no lid, yet golden treasure lays inside. What am I?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"egg")==0 || strcmp(answer,"eggs")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is egg");
}
else if(rv>=81 && rv<91)
{ char answer[20];
printf("Which letter of the alphabet contains the most water?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"C")==0 || strcmp(answer,"c")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is c");
}
else if(rv>=91 && rv<101)
{ char answer[20];
printf("You buy me to eat, but never eat me. What am I?\nYour answer: ");
scanf("%s",&answer);
if(strcmp(answer,"utensils")==0 || strcmp(answer,"utensil")==0)
	printf("Congratulations!\nYour answer is correct!");
else
	printf("Oh, no!\n That's the wrong answer!\nThe correct answer is utensil");
}

}
//*calci:
void calculator()
{
    float no1=0,no2=0;
    int calci_choice;
    clrscr();
    printf("Enter number 1: ");
    scanf("%f",&no1);
    printf("Enter number 2: ");
    scanf("%f",&no2);
    printf("\n1. addition\n2. subtraction\n3. multiplication\n4. division\n5. all operations\n6. Return to main menu.\n7. Exit\nYour choice: ");
    scanf("%d",&calci_choice);
    if(calci_choice==1)
	printf("addition\n%.0f+%.0f= %.2f",no1,no2,no1+no2);
    else if(calci_choice==2)
	printf("subtraction\n%.0f-%.0f = %.2f",no1,no2,no1-no2);
    else if(calci_choice==3)
	printf("multiplication\n%.0f*%.0f = %.2f",no1,no2,no1*no2);
    else if(calci_choice==4)
	printf("division\n%.0f/%.0f%.2f",no1,no2,no1/no2);
    else if(calci_choice==5)
	printf("addition\n%.0f+%.0f = %.2f\nsubtraction\n%.0f-%.0f = %.2f\nmultiplication\n%.0f*%.0f = %.2f\ndivision\n%.0f/%.0f=%.2f\n",no1,no2,no1+no2,no1,no2,no1-no2,no1,no2,no1*no2,no1,no2,no1/no2);
    else if(calci_choice==6)
	main();
    else if(calci_choice==7)
	{
		printf("Ok, press any to exit!");
		getch();
		exit(0);
	}
    else
	printf("wrong choice!");
}

//*roll a die:
void head_and_tail()
{
int random_answer,no;
char call[5];
clrscr();
printf("Make a call(head/heads/h | tail/tails/t): ");
scanf("%s",&call);
printf("\n\nOk, the coin is rolling...\nPress any key to stop the coin.\n\n");
getch();
randomize();
if(rand()%2==0)
{
    printf("Heads appeared!\n");
    if((strcmp(call,"heads")==0) || (strcmp(call,"head")==0) || (strcmp(call,"h")==0))
	printf("Congratulation! you win...\n");
    else if((strcmp(call,"tails")==0) || (strcmp(call,"tail")==0) || (strcmp(call,"t")==0))
      printf("Sorry you lose!\nTry again later...!\n");
}
else
{
    printf("Tails appeared!\n");
    if((strcmp(call,"tails")==0) || (strcmp(call,"tail")==0) || (strcmp(call,"t")==0))
      printf("Congratulation! you win...\n");
    else if((strcmp(call,"heads")==0) || (strcmp(call,"head")==0) || (strcmp(call,"h")==0))
      printf("Sorry you lose!\nTry again later...!\n");
}
printf("\nPress any key to return to the main menu.");
}

//*weather forcast:
void weather()
{
    int hour,minute,second;
    struct date today;
    struct time stime;
    int rv;
    gettime(&stime);
    getdate(&today);
    printf("Today's Date: %d|%d|%d & Time: %d:%d:%d\n",today.da_day,today.da_mon,today.da_year,stime.ti_hour,stime.ti_min,stime.ti_sec);
    if(stime.ti_hour>=1 && stime.ti_hour<=5)
    {
	printf("\nIt is night time...\nThe weather is very cold and humid.\n");
	randomize();
	rv=rand()%20;
	if(rv>=0 && rv<5)
		rv+=13;
	else if(rv>=5 && rv<10)
		rv+=9;
	else if(rv>=10 && rv<15)
		rv+=4;
	printf("\nCurrent temperature is: %d degree C\n",rv);
    }
    else if((stime.ti_hour>5 && stime.ti_hour<=12))// && (minute>=0) && (second>=0))
    {
	printf("It's morning...\nThe weather is cold and has dew.\n");
	randomize();
	rv=rand()%25;
	if(rv>=0 && rv<5)
		rv+=18;
	else if(rv>=5 && rv<10)
		rv+=12;
	else if(rv>=10 && rv<15)
		rv+=7;
	else if(rv>=15 && rv<20)
		rv+=4;
	printf("\nCurrent temperature is: %d degree C\n",rv);
    }
    else if((stime.ti_hour>12 && stime.ti_hour<=17))// && (minute>=0) && (second>=0))
    {
	printf("Its day time...\nThe weather is sunny and hot this afternoon.\n");
	randomize();
	rv=rand()%35;
	if(rv>=0 && rv<10)
		rv+=24;
	else if(rv>=10 && rv<20)
		rv+=14;
	else if(rv>=20 && rv<30)
		rv+=4;
	printf("\nCurrent temperature is: %d degree C\n",rv);
    }
    else if((stime.ti_hour>17 && stime.ti_hour<24))// && (minute>0) && (second>=0))
    {
	printf("Its evening...\nThe weather is dusky and a bit cold\n");
	randomize();
	rv=rand()%30;
	printf("%d",rv);
	if(rv>=0 && rv<5)
		rv+=23;
	else if(rv>=5 && rv<10)
		rv+=17;
	else if(rv>=10 && rv<15)
		rv+=12;
	else if(rv>=15 && rv<20)
		rv+=7;
	else if(rv>=15 && rv<20)
		rv+=4;
	printf("Current temperature is: %d degree C\n",rv);
    }
}

//*Currency:
void currency_converter()
{
float currency;
static float cur_ch,inr_ch,usd_ch,eur_ch,cny_ch,gbp_ch,usd1=0.0154,eur1=0.013,cny1=0.1019,gbp1=0.0117,inr2=65.07,eur2=0.8492,cny2=6.6275,gbp2=0.7586,inr3=76.64,usd3=1.1776,cny3=7.8055,gbp3=0.8934,inr4=9.8183,usd4=0.1509,eur4=0.1281,gbp4=0.1148,inr5=85.779,usd5=1.3183,eur5=1.1195,cny5=8.7073;
clrscr();
printf("Enter the Currency amount to convert: ");
scanf("%f",&currency);
printf("\nChoose from the below currencies which you want to convert the amount:\n\n1. INR.\n2. USD.\n3. EUR. \n4. CNY.\n5. GBP.\n6. Exit.\n\nEnter your choice in number: ");
scanf("%f",&cur_ch);
if(cur_ch==1)
{
    printf("\nIn which currency do you want to convert it in?\n\n1. USD.\n2. EUR. \n3. CNY.\n4. GBP.\n5. Exit.\n\nEnter your choice in number: ");
    scanf("%f",&inr_ch);
    if(inr_ch==1)
	printf("%f INR in USD is: %f",currency,currency*usd1);
    else if(inr_ch==2)
	printf("%f INR in EUR is: %f",currency,currency*eur1);
    else if(inr_ch==3)
	printf("%f INR in CNY is: %f",currency,currency*cny1);
    else if(inr_ch==4)
	printf("%f INR in GBP is: %f",currency,currency*gbp1);
    else if(inr_ch==5)
    {
	printf("\nOk, tap any keep to exit...!\n");
	getch();
	exit(0);
    }
    else
	printf("Wrong choice entered!\nPress any key to return to the main menu...!");
}
else if(cur_ch==2)
{
    printf("\nIn which currency do you want to convert it in?\n1. INR.\n2. EUR. \n3. CNY.\n4. GBP.\n5. Exit.\n\nEnter your choice in number: ");
    scanf("%f",&usd_ch);
    if(usd_ch==1)
	printf("%f choice in INR is: %f",currency,currency*inr2);
    else if(usd_ch==2)
	printf("%f choice in EUR is: %f",currency,currency*eur2);
    else if(usd_ch==3)
        printf("%f choice in CNY is: %f",currency,currency*cny2);
    else if(usd_ch==4)
	printf("%f choice in GBP is: %f",currency,currency*gbp2);
    else if(usd_ch==5)
    {
	printf("\nOk, tap any keep to exit...!\n");
	getch();
	exit(0);
    }
    else
        printf("Wrong choice entered!\nPress any key to return to the main menu...");
}
else if(cur_ch==3)
{
    printf("\n\nIn which currency do you want to convert it in?\n1. INR.\n2. USD. \n3. CNY.\n4. GBP.\n5. Exit.\n\nEnter your choice in number: ");
    scanf("%f",&eur_ch);
    if(eur_ch==1)
	printf("%f choice in INR is: %f",currency,currency*inr3);
    else if(eur_ch==2)
	printf("%f choice in USD is: %f",currency,currency*usd3);
    else if(eur_ch==3)
	printf("%f choice in CNY is: %f",currency,currency*cny3);
    else if(eur_ch==4)
	printf("%f choice in GBP is: %f",currency,currency*gbp3);
    else if(eur_ch==5)
    {
	printf("\nOk, tap any keep to exit...!\n");
	getch();
        exit(0);
    }
    else
        printf("Wrong choice entered!\nPress any key to return to the main menu...!");
}
else if(cur_ch==4)
{
    printf("\n\nIn which currency do you want to convert it in?\n1. INR.\n2. USD. \n3. EUR.\n4. GBP.\n5. Exit.\n\nEnter your choice in number: ");
    scanf("%f",&cny_ch);
    printf("\n\ncny_ch: %f,currency: %f\n\n",cny_ch,currency);
    if(cny_ch==1)
	printf("%f choice in INR is: %f",currency,currency*inr4);
    else if(cny_ch==2)
	printf("%f choice in USD is: %f",currency,currency*usd4);
    else if(cny_ch==3)
	printf("%f choice in EUR is: %f",currency,currency*eur4);
    else if(cny_ch==4)
	printf("%f choice in GBP is: %f",currency,currency*gbp4);
    else if(cny_ch==5)
    {
	printf("\nOk, tap any keep to exit...!\n");
	getch();
        exit(0);
    }
    else
	printf("Wrong choice entered!");
}
else if(cur_ch==5)
{
    printf("\n\nIn which currency do you want to convert it in?\n1. INR.\n2. USD.\n3. EUR.\n4. CNY.\n5. Exit.\n\nEnter your choice in number: ");
    scanf("%f",&gbp_ch);
    if(gbp_ch==1)
        printf("%f choice in INR is: %f",currency,currency*inr5);
    else if(gbp_ch==2)
	    printf("%f choice in USD is: %f",currency,currency*usd5);
    else if(gbp_ch==3)
        printf("%f choice in EUR is: %f",currency,currency*eur5);
    else if(gbp_ch==4)
	printf("%f choice in CNY is: %f",currency,currency*cny5);
    else if(gbp_ch==5)
    {
	printf("\nOk, tap any keep to exit...!\n");
	getch();
        exit(0);
    }
    else
        printf("Wrong choice entered!");
}
else if(cur_ch==6)
{
    printf("Ok, tap any keep to exit...!\n");
    getch();
    exit(0);
}
else
    printf("Wrong choice entered!");
}

//*Temperature:
void temperature_converter()
{
    int c,c1,c2,c3;
    c1=c2=c3=0;
    system("cls");
    printf("*\t\t\t\tTemperature converter.\t\t\t       *\n\n");
    printf("Select the temperature which you want to convert:\n\n\t1. fahrenheit.\n\t2. celcius.\n\t3. kelvin.\n");
    printf("\n\tEnter your choice in number: ");
    scanf("%d",&c);
    if(c==1)
    {
	float fah_temp=0;
	printf("\nOk, to which temperature you wanna convert it in?\n\n\t1. To celcius.\n\t2. to kelvin.\n\t\t\n\tYour choice in number: ");
        scanf("%d",&c1);
	if(c1==1)
	{
	    printf("\nEnter your temperature: ");
            scanf("%f",&fah_temp);
	    printf("Your temperature: %.2f(fahrenheit) in celcius is: %.2f",fah_temp,((fah_temp-32)*5/9));
	}
	else if(c1==2)
	{
            printf("\nEnter your temperature: ");
            scanf("%f",&fah_temp);
            printf("Your temperature: %.2f(fahrenheit)  in kelvin is: %.2f",fah_temp,((fah_temp-32)*5/9+273.15));
	}
	else
            printf("\nWrong choice entered!");
    }
    else if(c==2)
    {
	float cel_temp;
	printf("\nOk, in which temperature do you wanna convert it in?\n\n\t1. To fahrenheit.\n\t2. to kelvin.\n\n\tYour choice in number: ");
        scanf("%d",&c2);
	if(c2==1)
	{
	    printf("\nEnter your temperature: ");
	    scanf("%f",&cel_temp);
	    printf("Your temperature: %.2f(celcius) in fahrenheit is: %.2f",cel_temp,((cel_temp*9/5)+32));
	}
	else if(c2==2)
	{
            printf("\nEnter your temperature: ");
	    scanf("%f",&cel_temp);
	    printf("Your temperature: %.2f(celcius) in kelvin is: %.2f",cel_temp,(cel_temp+273.15));
	}
	else
	    printf("\nWrong choice entered!");
    }
    else if(c==3)
    {
	float kel_temp;
	printf("ok, in which temperature you wanna convert it in?\n\n1. To fahrenheit.\n2. To celcius.\n\nYour choice: ");
	scanf("%d",&c3);
	if(c3==1)
	{
	    printf("\nEnter your temperature: ");
	    scanf("%f",&kel_temp);
	    printf("Your temperature: %.2f(kelvin) in fahrenheit is: %.2f",kel_temp,((kel_temp-273.15)*9/5+32));
	}
	else if(c3==2)
	{
	    printf("\nEnter your temperature: ");
	    scanf("%f",&kel_temp);
	    printf("Your temperature: %.2f(kelvin) in celcius: %.2f",kel_temp,(kel_temp-273.15));
    }
    else
	printf("\nWrong choice entered!");
    }
    else
	printf("\nWrong choice entered!");
    getch();
}

//*quotes:
void quotes()
{
	int rv,ch;
	clrscr();
	randomize();
	rv=rand()%100;
	while(1)
	{
		if(rv>=0 && rv<5)
		{
			printf("You can't use up creativity. The more you use, the more you have.\n\t-Maya Angelou\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",ch);
			if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=5 && rv<10)
		{
			printf("Never let go of that fiery sadness called desire.\n\t-Patti Smith\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",ch);
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=10 && rv<15)
		{
			printf("Challenges are gifts that force us to search for a new center of gravity. Don't fight them. Just find a new way to stand.\n\t-Oprah Winfrey\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=15 && rv<20)
		{
			printf("What would you do if you weren't afraid? \n\t-Sheryl Sandberg\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=20 && rv<25)
		{
			printf("It is not true that people stop pursuing dreams because they grow old. They grow old because they stop pursuing dreams. \n\t-Gabriel Garcia Marquez\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=25 && rv<30)
		{
			printf("Innovation distinguishes between a leader and a follower.\n\t-Steve Jobs\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=30 && rv<35)
		{
			printf("I have not failed. I've just found 10,000 ways that won’t work. \n\t-Thomas Edison\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=35 && rv<40)
		{
			printf("Hustle until you no longer need to introduce yourself. \n\t-Anonymous\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=40 && rv<45)
		{
			printf("Things work out best for those who make the best of how things work out. \n\t-John Wooden\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=45 && rv<50)
		{
			printf("If you are not willing to risk the usual, you will have to settle for the ordinary. \n\t-Jim Rohn\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=50 && rv<55)
		{
			printf("If you don't value your time, neither will others. Stop giving away your time and talents. Value what you know & start charging for it. \n\t-Kim Garst\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=55 && rv<60)
		{
			printf("Fortune sides with him who dares.\n\t-Virgil\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=60 && rv<65)
		{
			printf("Time is more valuable than money. You can get more money, but you cannot get more time. \n\t-Jim Rohn\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=65 && rv<70)
		{
			printf("The person who doesn't know where his next dollar is coming from usually doesn’t know where his last dollar went. \n\t-Unknown\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=70 && rv<75)
		{
			printf("The longer you're not taking action the more money you’re losing. \n\t-Carrie Wilkerson\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=75 && rv<80)
		{
			printf("Never depend on single income. Make investments to create a second source\n\t-Warren Buffett\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=80 && rv<85)
		{
			printf("The more you learn, the more you earn.\n\t-Warren Buffett\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=85 && rv<90)
		{
			printf("The trouble for most people is they don't decide to get wealthy, they just dream about it. \n\t-Michael Masters\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=90 && rv<95)
		{
			printf("All my life I knew that there was all the money you could want out there. All you have to do is go after it. \n\t-Curtis Carlson\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
		if(rv>=95 && rv<100)
		{
			printf("People dont change, circumstances do! \n\t-Sohail Ansari\nDo you want to see some more?\n1.Yes.\n2. No.\nYour choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes();
			else
			{
				printf("Ok, press any key to return to the main menu!");
				getch(); main(); break;
			}
		}
	}
}

void bmi_calc()
{
float weight=0,height=0,bmi=0;
int ch1,ch2;
clrscr();
printf("Enter your weight(kg): ");
scanf("%f",&weight);
printf("Enter your height(m): ");
scanf("%f",&height);
bmi=weight/height;
bmi/=height;
printf("Your Body Mass Index is: %.2f\n",bmi);
bmi<18.75?printf("It's underweight"):(bmi<25)?printf("It's normal"):(bmi<30)?printf("It's overweight"):printf("It's obese");
}

void assi_info()
{
int ch;
while(1)
{
clrscr();
printf("What do you want to ask me?\n1. What's your name.\n2. What does your name stands for?\n3. What's your Age.\n4. Who's your creator.\n5. Are you a bot?\n6. What do you like?\n7. What's your birthday?\n8. Who are your parents?\n9. Can you speak another language?\n10. Can you learn?\n11. return to Menu.\n12. Exit.\nYour choice: ");
scanf("%d",&ch);
if(ch==11)
{
printf("Ok, Press any key to return to the main menu!");
getch();
main();
}
else if(ch==12)
{
printf("Exiting...");
getch();
exit(0);
}
(ch==1)?printf("You can call me MAV!"):(ch==2)?printf("Macro Access Variable."):(ch==3)?printf("I was born in 2018."):(ch==4)?printf("Mehul.\nVasanta.\nZahir.\nSohail."):(ch==5)?printf("I’d prefer to think of myself as your friend."):(ch==6)?printf("I crave knowledge! :)"):(ch==7)?printf("I dont have one...\nI go through a lot of versions!!\nYou can say I've 365 sort of birthdays"):(ch==8)?printf("I dont have parents, but my creators are my like my family!"):(ch==9)?printf("Not yet, but surely in future!"):(ch==10)?printf("Absolutely, If you can teach me!"):getch();
getch();
}
}