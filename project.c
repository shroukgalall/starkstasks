#include <stdio.h>

 struct minu{
int price;
char name ;
};


 
 
 
void Admin(void){
	int id = 12345;
int password = 1234;
printf("enter your id ");
int user;
scanf("%d",&user);
printf("enter your password ");
int pass;
scanf("%d",&pass);
if (pass !=password || user != id)
printf("your password or id is not correct ");
else if (pass ==password && user == id){
printf("the minu is :juice=40,Molto=10,Biscuit=10,Cofe=20 , Tea=7,Mint=7, Hot_chocolate=40");
printf("write your order\n");
struct minu order ;
scanf("%c",&order);
printf("if you want to add any flavour like mint choose 1 or strapary choose 2 , or nothing choose 0\n");
char flavour=0 ;
scanf("%d",&flavour) ;
if (flavour==1||flavour ==2)
	flavour =5;
else 
	flavour =0;

int total =flavour +order.price ;
printf("you order is %d LE", total);

printf("if you want to pay cash choose 1 ,or choose 2 for visa ");
int  payment;
scanf("%d",&payment);
  
  }
	}

void guest(void){
	printf ("you have 50 pounds in your card \n");

	printf("the minu is :\njuice=40\nMolto=10\nBiscuit=10\nCofe=20\nTea=7\nMint=7\nHot_chocolate=40\n");
printf("write your order\n");
struct minu order ;
scanf("%c",&order);
printf("if you want to add any flavour like mint choose 1 or strapary choose 2 , or nothing choose 0\n");
char flavour=0 ;
scanf("%d",&flavour) ;
if (flavour==1||flavour ==2)
	flavour =5;
else 
	flavour =0;
int total =flavour +order.price ;
printf("you order is %d LE", total);


printf("you could only pay cash");

}

int main (){


printf ("welcome\n");
printf ("if you are admin chose 1, or 2 if you are a guest\n");
int s ;
scanf("%d",&s);
if (s==1)
Admin ();
else if (s==2)
guest ();
else 
printf("only 1 or 2");
struct minu orange_juice={.price = 40};
 struct minu molto={.price =10};
 struct minu biscuit={.price=10};
 struct minu cofe={.price=20};
 struct minu tea={.price=7};
struct minu mint={.price=7};
 struct minu hot_chocolate={.price=40};
 struct minu strapary={.price =5};
 struct minu papermint={.price =5};
}

