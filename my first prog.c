#include<stdio.h>
int main()
{
	int i,Ans=0;
printf("KAUN BANEGA CROREPATI\nYOU WILL GET 15 QUESTIONS TO SOLVE\nYOU HAVE 4 LIFELINES\nPHONE OF FRIEND,AUDIENCE SPORT,50-50,EXPERT ADVICE\nLET US START THE GAME");
	for(i=1;i<=15;i++)
{
	Ans=0;
	switch(i)
{
case 1:
printf("What is name of prime miniser of india in 2018\n1. Narendra modi\n2. rahul gandhi\n3. kiran kher\n4. manmohan singh");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==1)
printf("your answer is correct. you have won Rs.5000");
	else
{
printf("your answer is wrong. You are disqualified");
i=16;}
break;
case 2:
printf("Q2. The international literacy day is observed on\n1. Sep 8\n2. Nov 28\n3. May 2\n4. Sep 22");
printf("enter the answer");
scanf("%d",&Ans);
	if(Ans==1)
printf("your answer is correct\n You have won Rs. 10000");
	else
{
printf("sorry, your answer is wrong");
i=16;}
break;
case 3:
printf("Q3. The language of lakshwadeep is\n1. Tamil\n2. Hindi\n3. malayam\n4. telugu");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==3)
printf("you answer is correct\nYou have won Rs. 20000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 4:
printf("Q4.What is the capital of india\n1. Delhi\n2. kolkata\n3. tamil nadu\n4. karnaataka");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==1)
printf("you answer is correct\nYou have won Rs. 30000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 5:
printf("Q5.What is answer after adding 2+3\n1. 5\n2. 6\n3. 7\n4. 8");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==1)
printf("you answer is correct\nYou have won Rs. 50000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 6:
printf("Q6. What are actually the pyramids of giza\n1. tombs\n2. granaries\n3. palaces\n4. lighthouses");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==1)
printf("you answer is correct\nYou have won Rs. 70000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 7:
printf("Q7. What is the main ingredient of hyderabdi dish'haleem'\n1. kekda\n2. fish\n3. lobster\n4. mutton");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==4)
printf("you answer is correct\nYou have won Rs. 100000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 8:
printf("Q8. When is teachers day celebrated in india\n1. 4 sep\n2. 5 sep\n3. 8 oct\n4. 7 oct");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==2)
printf("you answer is correct\nYou have won Rs. 300000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 9:
printf("Q9. Id is celebrated by which religion\n1. Hindu\n2. Muslim\n3. Buddhism\n4. sikh");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==2)
printf("you answer is correct\nYou have won Rs. 500000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 10:
printf("Q10. Which language is spoken in kerala\n1. malayam\n2. hindi\n3. punjabi\n4. urdu");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==1)
printf("you answer is correct\nYou have won Rs. 1000000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 11:
printf("Q11. Writers buildings are headquaters of\n1. the times of india\n2. press trust of india\n3. west bengal government\n4. all india writers association");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==2)
printf("you answer is correct\nYou have won Rs. 2500000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 12:
printf("Q12. meenakshi temple is in\n1. kerala\n2. mizoram\n3. madurai\n4. karnataka");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==3)
printf("you answer is correct\nYou have won Rs. 5000000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 13:
printf("Q13.what is calculated 6*4\n1. 24\n2. 43\n3. 76\n4. 98");
printf("tell the answer");
scanf("%d",&Ans);
	if(Ans==1)
printf("you answer is correct\nYou have won Rs. 10000000");
	else
printf("your answer is wrong\n you are disqualified");
break;
case 14:
printf("Q14.What was the name of president of india in 2018\n1. manmohan singh\n2. jawahar lal nehru\n3. kiran kher\n4. kovind");
printf("enter the answer");
scanf("%d",&Ans);
	if(Ans==4)
printf("your answer is correct\n You have won Rs. 50000000");
	else
printf("sorry, your answer is wrong");
break;
case 15:
printf("Q15. Which of the following is not a mobile company\n1. samsung\n2. microsoft\n3. nokia\n4. redmi");
printf("enter the answer");
scanf("%d",&Ans);
	if(Ans==2)
printf("Congartulations,You have won this game and Rs. 70000000 and a audi car");
	else
printf("sorry,you have gien wrong answer so you will only take Rs. 2500000 from here.all the best");
i=16;
break;
default:
break;
}
}
}
