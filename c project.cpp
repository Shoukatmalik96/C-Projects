#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void compare();
void menu();
void header();
char username[6],s[6]={"malik"};
int password,pass=123;
int  op;
char option;
main(){
header();
 label1:
 compare();
 header();
 if(strcmp(username,s)==0 && password==pass)
 {
 system("cls");
 header();
 printf("\n\nLOGIN SUCCESSFULL");
 }
 else
 goto label1;
 Sleep(1000);
 printf("\n\n\n\n\t\tLoading the project ");
for(int j=0;j<2;j++)
{
 
 for(int i=0;i<8;i++)
 {
  //gotoxy(k,16);
  Sleep(400);
  printf(" . ");
  
 }
 system("cls");
 header();
 printf("\n\n\n\n\n\n\t\tLoading the project");
}

 system("cls");
 menu();
 getch();
}

void compare(void)
{
 printf("\nUser Name : ");
 scanf("%s",&username);
 printf("\nPassword  : ");
 scanf("%d",&password);
 if(strcmp(username,s)!=0)
 {
  printf("\n\nWRONG USERNAME");
  Sleep(1000);
  system("cls");
 }
 else if(password!=pass)
 {
  printf("\n\nWRONG PASSWORD");
  Sleep(1000);
  system("cls");
 }
}

void header()
{
     printf("\n\t\t\tC Language Final Project ");
     printf("\n-------------------------------------------------------------------------------");
}

void menu()
{
 system("cls");
 header();
 printf("\nList of item ");
 printf("\n\n\t1) MARKSHEET");
 printf("\n\t2)  CALCULATOR");
 printf("\n\t3)  PAY SLIY");
 printf("\n\t4)  FACTORIAL ");
 printf("\n\t5)  GROSRT BILL");
 printf("\n\t6)  MATRIX");
 printf("\n\t7)  TABLE ");
 printf("\n\nIF YOU WANT TO EXIT PRESS '0'");
 printf("\n\nEnter your choice : ");
 scanf("%d",&op);
 system("cls");
 	
switch(op)
 {
               case 1:
                    {
                    	system("cls");
                    	int math, phys,chem, eng,urdu, Islam,obt;
float percentage;
char Grade, fname[10],lname[10];
printf("\n Enter your First Name :");
gets(fname);
printf("\n Enter your Last Name :");
gets(lname);
strcat(strcat(fname,  "") ,lname);	
	
	printf("\n\t\tMARKS SHEET");
    printf("\n-------------------------------------------------------------------------------");
    
	printf("\n\n Enter Math Marks :");
	scanf("%d",&math);
	printf("\n Enter Physics Marks :");
	scanf("%d",&phys);
	printf("\n Enter Chemistry Marks :");
	scanf("%d",&chem);
	printf("\n Enter English Marks :");
	scanf("%d",&eng);
	printf("\n Enter Urdu Marks :");
	scanf("%d",&urdu);
	printf("\n Enter Islamiat Marks :");
	scanf("%d",&Islam);
	
	// Calculating Total Marks
	obt=math+phys+chem+eng+urdu+Islam;
	// Calculating Percentage
	percentage=(float)obt/6;
	system("cls");
	printf("\n\t\t\tMARKS SHEET");
	strcat(strcat(fname,""),lname);
	printf("\n----------------------------------------------------------------------");
	printf("\n\tBORD OF INTERMIDIATE & SECONDRY EDUCATION KARACHI");
	printf("\n----------------------------------------------------------------------");
printf("\nSUBJECTS                        OBTAIN_MARKS                      STATUS");
	if(phys>=35){
		
	printf("\nPhysics                             %d                             Pass",phys);
	 	
	}
    else{
    printf("\nPhysics                             %d                             Fail",phys);
	}
	if(math>=35){
		
	printf("\nMath                                %d                             Pass",math);
	 	
	}
    else{
    printf("\nMath                                %d                             Fail",math);
	}	
	if(chem>=35){
		
	printf("\nChemistry                           %d                             Pass",chem);
	 	
	}
    else{
    printf("\nChemistry                           %d                             Fail",chem);
	}	
	if(eng>=35){
		
	printf("\nEnglish                             %d                             Pass",eng);
	 	
	}
    else{
    printf("\nEnglish                             %d                             Fail",eng);
	}
	if(urdu>=35){
		
	printf("\nUrdu                                %d                             Pass",urdu);
	 	 
	}
    else{
    printf("\n Urdu                               %d                             Fail",urdu);
	}
	if(Islam>=35){
		
	printf("\nIslamiat                            %d                             Pass",Islam);
	 	
	}
    else{
    printf("\nIslamiat                            %d                             Fail",Islam);
    	
	}
	printf("\n------------------------------------------------------------------------");
	printf("\n TotalMarks                               500");
	printf("\n Obtain Marks                             %d",                            obt);
	printf("\n-------------------------------------------------------------------------");
	
	
    //printing Grade and Percentage
	if(phys>=35 && chem>=35 && math>=35 && eng>=35 && urdu>=35 && Islam>=35 )
  	{
		
	printf("\n Percentage                           %f.2",percentage);}
	// Calculating Grde of The Student
	if(percentage>80){
	printf("\n A One  Grade");
	}
	if(percentage>70 && percentage<=80){
	printf("\n A Grade");
    }
    if(percentage>60 && percentage<=70){
	printf("\n B Grade");
    }
    if(percentage>50 && percentage<=60){
	printf("\n C Grade");
    }
    if(percentage>40 && percentage<=50){
	printf("\n Fail");
 
    }
  printf("\n Do you want to do it again(y/n) : ");
  scanf(" %c",&option);
  if(option == 'y')
  menu();
                    }
                    break;
               case 2:
                   {
                   	int add ,sub, mul, div,num1,num2,op,result;	

printf("\n\t\t\tSIMPLE CALCULATOR");
 printf("\n-------------------------------------------------------------------------------");
printf("\n Enter First Number : ",num1);
scanf("\n %d",&num1);
printf("\n Enter Second Number: ",num1);
scanf("\n %d",&num2);
printf("\n------------------------------------------------");
printf("\n WHAT DO  YOU  WANT ? ");
printf("\n");	
printf("\n PRESS 1 FOR  ADDITION\n");	
printf("\n PRESS 2 FOR  SUBTRACTION\n");	
printf("\n PRESS 3 FOR  MULTIPLICATION\n");	
printf("\n PRESS 4 FOR  DIVISION\n");
printf("\n------------------------------------------------");
printf("\n ENTER YOUR CHOICE : ");
scanf("%d",&op);
system("cls");
switch(op){
 
 case 1:
 {
 result=num1+num2;	
 printf("\n The sum of %d and %d is %d",num1,num2,result);
 break;
 }
case 2:
 {
 result=num1-num2;	
 printf("\n The subtraction of %d and %d is %d",num1,num2,result);
 break;
 }
case 3:
 {
 result=num1*num2;	
 printf("\n The multiplication of %d and %d is %d",num1,num2,result);
 break;
}
case 4:
 {
 result=num1/num2;	
 printf("\n The division of %d and %d is %d",num1,num2,result);
 }
 break;
 default :
	
	 printf("\n Invalid Operator");	
	}
 printf("\n Do you want to do it again(y/n) : ");
  scanf(" %c",&option);
  if(option == 'y')
  menu();
                   }
                   
                   break;
               case 3:
                    {
                    	int basic, sal ,med ,mob,fuel, lunch ,itax ,gross , net,employee_leave;
printf("\n Enter your Salary :");
scanf("%d",&sal);
printf("\n Enter the number of leaves : ");
scanf("%d",&employee_leave);

//The no of leave which is allow for every employee in the organization are

{

 med=sal*3/100;
 lunch=sal*1/100;
 fuel=sal*2/100;
}
if(sal>=15000)
{

 med=sal*5/100;
 lunch=sal*2/100;
 fuel=sal*4/100;
 mob=sal*1/100;
}
if(sal>=20000)
{

 med=sal*7/100;
 lunch=sal*3/100;
 fuel=sal*5/100;
 mob=sal*2/100;
}
if(sal>=25000)
{

 med=sal*8/100;
 lunch=sal*4/100;
 fuel=sal*7/100;
 mob=sal*4/100;
}


gross=sal+med+lunch+mob+fuel;
itax=gross*2/100;
net= gross-itax;
system("cls");
printf("\n\n------------------------------------------------------------------------");
printf("\n\t\t| ROSHAN PACAGES PAKISTAN PVT Ltd |");
printf("\n\n------------------------------------------------------------------------");
printf("\nSALARY                            |                          %d", sal);
printf("\nMEDICAL                           |                          %d", med);
printf("\nLUNCH                             |                          %d", lunch);
printf("\nFUEL                              |                          %d", fuel);
printf("\nMOBILE CARD                                                  %d",  mob);
printf("\n--------------------------------------------------------------------------");
printf("\nGROSS SALARY                      |    %d", gross);
printf("\nINCOME TAX                        |    %d", itax);
 
if(employee_leave > 2)
{
 int a=employee_leave -2;
 int b=sal/30*a;
 int newnet=b;
 //printf("\n\n");
 printf("\nNO OF LEAVES IN THIS MONTH        |    %d", a );
 printf("\nTOTAL DETACTION OF %d DAYS         |    %d", a,b);
 
}
printf("\n--------------------------------------------------------------------------");
printf("\nNet SALARY                        |                       %d", net);
printf("\n\n------------------------------------------------------------------------");

 printf("\n Do you want to do it again(y/n) : ");
  scanf(" %c",&option);
  if(option == 'y')
  menu();
                    }
                    break;
               case 4:
                    {
                    int fact,i,n;
    fact = 1;
	printf("\n---------------------------------------------------------");
	printf("\n\tEnter the number to find its Factorial :");
	scanf("%d" , &n);
   for(int k= 1; k <= n; k++)
   {
       fact = fact*k;		
   }
   printf("\n\n");
   printf("\n\t\tFACTORIAL OF %d is %d", n , fact);
   printf("\n---------------------------------------------------------");	
    printf("\n Do you want to do it again(y/n) : ");
  scanf(" %c",&option);
  if(option == 'y')
  menu();	
                    }
                    break;
               case 5:
                   
                   {
                   	int cd ,dvd,vcd,amt,price,stax ,ic,qty,tamt;
dvd=60;
vcd=20;
cd=30;

printf("\n SELECT ITEM :");
printf("\n 1. FOR DVD ");
printf("\n 2. FOR VCD ");
printf("\n 3. FOR CD  ");
printf("\nEnter Item Code :");
scanf("%d",&ic);

printf("\n\n Enter quantity : ");
scanf("%d",&qty);
system("cls");
printf("\n\t\t\tABC TRADERS \n------------------------------------------------------------");
printf("\nPRICE LIST OF ITEMS");
printf("\n1.DVD         %d",dvd);
printf("\n2.VCD         %d",dvd);
printf("\n3.CD          %d",cd);
printf("\n------------------------------------------------------------");
printf("\n QUANTITY       PARTICULAR         U.PRICE          AMOUNT");
printf("\n------------------------------------------------------------");

if (ic == 1){
amt = dvd*qty ;
printf("\n %d \t         DVD\t\t   %d \t\t    %d ",qty,dvd,amt);

}else if(ic == 2)
{
	amt = vcd*qty ;
	printf("\n %d \t         VCD\t\t   %d \t\t    %d ",qty,vcd,amt);

}
else if(ic == 3)
{
	amt = cd*qty ;
	printf("\n %d \t          CD\t\t   %d \t\t    %d ",qty, cd,amt);

}
stax =  amt *  17  /   100 ;
tamt =  amt + stax ;
printf("\n\n\n Sales  Tax                    %d ",stax);
printf("\n\n\n Amount Tax                    %d ",tamt);

 printf("\n Do you want to do it again(y/n) : ");
  scanf(" %c",&option);
  if(option == 'y')
  menu();
                   } break;
               case 6:
                    {
                    int a[10][10],b[10][10],i,j,c[10][10],choice;
printf("\n\tENTER VALUES OF FOR FIRST MATRIX \n\n\n");
  for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("\n Enter Value of a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
        }
   }
   printf("\n");   
  printf("\n\tENTER VALUES OF FOR SECOND MATRIX \n\n\n");
  for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        	printf("\n Enter Value of b[%d][%d]: ",i,j);
        scanf("%d",&b[i][j]);
        }
   }
   printf("\n\n");
  printf("\n\tGIVEN MATRIX A\n");
  printf("\n--------------------------------");
  for(i=0;i<2;i++){
        printf("\n\n");
        for(j=0;j<2;j++){
        printf("%d\t",a[i][j]);
        }
  }
   printf("\n\n");
   printf("\n\tGIVEN MATRIX B\n");
   printf("\n---------------------------------");
  for(i=0;i<2;i++){
        printf("\n\n");
        for(j=0;j<2;j++){
        printf("%d\t",b[i][j]);
        }
   }
   printf("\n\n\n");
   /*
   The addition of matrix A & B is 
   */
   
printf("\n SELECT YOUR CHOICE\n");
printf("\n-------------------------------------");
printf("\n ***|ENTER 1 FOR ADDITION|*** \n");
printf("----------------------------------------");
printf("\n ***|ENTER 2 FOR SUBTRACTION|*** \n");
printf("----------------------------------------");
printf("\n |ENTER YOUR CHOICE  : ");
scanf("%d",&choice);
system("cls");

switch(choice){

  
 case 1:
 {
   
   printf("\n");
   printf("\n------------------------------------------------");
   printf("\n***||THE ADDTION OF MATRIX A & MATRIX B IS||***");
   printf("\n------------------------------------------------");
   for(i=0;i<2;i++){
       printf("\n\n");
       for(j=0;j<2;j++){
       	c[i][j]=a[i][j] + b[i][j];
        printf("%d\t",c[i][j]);
       }
   }
}
break;

   /*
   The subtraction of matrix A & B is 
   */
case 2:
{
   
    
   printf("\n");
   printf("\n------------------------------------------------------");
   printf("\n***||THE SUBTRACTION OF MATRIX A & MATRIX B IS ||***");
   printf("\n------------------------------------------------------");
   for(i=0;i<2;i++){
       printf("\n\n");
       for(j=0;j<2;j++){
       	c[i][j]=a[i][j] - b[i][j];
        printf("%d\t",c[i][j]);
       }
   
   }
}
break;
default :
	printf("\n Invalid Operation ");
   }/*end of Inner switch */
 printf("\n Do you want to do it again(y/n) : ");
  scanf(" %c",&option);
  if(option == 'y')
  menu();	
                    }
					break;
               case 7:
                   {
                   	int n1, n2, select,start, end ,num ,k , number;
printf("\n ENTER NUMBER WANT TO PRINT ITS TABLE :");
scanf("%d",&num);
printf("\n FROM WHERE YOU WANT TO START THE TABEL  : ");
scanf(" %d",&start);
printf("\n ENTER A RANGE TO END THE TABLE  : ");
scanf(" %d",&end);
system("cls");	
  for (k =start;k<=end;k++){
  	int result;
  	result =num* k;
  printf("\n %d  X  %d  =  %d \n",num, k, result);	
	
  }	
   printf("\n Do you want to do it again(y/n) : ");
  scanf(" %c",&option);
  if(option == 'y')
  menu();
                   }
               break;
               
               case 0:
                    {
                    system("cls");
                    printf("\n\n\n\tThank you for working on my project . GOOD BYE");
					}
                    break;
               default:
                       {
                       
                printf("\n\nINVALID CHOICE");
                       Sleep(1000);
                       menu();
				}
 } 
}	
