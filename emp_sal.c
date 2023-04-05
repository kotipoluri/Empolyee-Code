#include <stdio.h>
#include<string.h>
//#include "employee.h"

typedef struct pn
{
    char fname[10];
    char lname[10];
    char dob[10];//date of birth ddmmyyyy    
}psn; // person structure

typedef struct sa{
    
    int initial; //initial salary
    int increment; //salary increment % 
    int current; // current salary
    char doj[8];//date of joining ddmmyyyy
}sal; //salary details structure

typedef struct e0{
    psn *p;   
    sal *s;
    struct e0 *next;
}emp; // employee data structure


int get_psn(psn *new_psn); // asks user to fill person details 
int get_sal(sal *new_sal, psn *new_psn ); // asks user to fill person details 
int create(emp **new_emp); // creates new emplyee memory
int print(emp **new_emp); //prints the employee details
int valid_string(char *string);
int valid_dob1(char *date, char *month, char *year);
int validate_sal(int sal);

int main() {
emp *emp1=NULL,**new_emp; 
    new_emp = &emp1;
    create(new_emp);
    print(new_emp);
    return 0;
}

int get_psn(psn *new_psn) // asks user to fill person details 
{
    printf("\nPlease enter Employee details\n");
    printf("\nFirst name : ");
    while(1)
    {
    	scanf("%s",new_psn->fname);
    	if(valid_string(new_psn->fname)>0)
    	break;
    	else
    	printf("enter name correctly\n");
	}
    printf("\nLast name : ");
    while(1)
    {
    	 scanf("%s",new_psn->lname);
    	 if(valid_string(new_psn->lname)>0)
    	 break;
    	 else
    	 printf("enter name correctly\n");
	}
    printf("\nDate of birth as dd mm yyyy : ");  
    while(1)
    {
    scanf("%s",new_psn->dob);
    scanf("%s",(char *)(new_psn->dob)+3);
    scanf("%s",(char *)(new_psn->dob)+6);
    if(valid_dob1(new_psn->dob,(char*)(new_psn->dob)+3,(char*)(new_psn->dob)+6)>0)
    break;
    printf("enter date correctly\n");
}
return 0;
    
}
int valid_string(char *string)
{
	int i;
	for(i=0;i<strlen(string);i++)
	{
		if((string[i]>=65&&string[i]<=90)||(string[i]>=97&&string[i]<=122));
		
		else	
		return -1;
	}
	return 1;
}
int valid_dob1(char *date, char *month, char *year)
{
	int i;
	if((date[0]>='0'&&date[0]<='3')&&(date[1]>='0'&&date[1]<='9'))
	{
	if(date[0]=='3')
	{
	if(date[1]<='1');    
	else
	return -1;
	}
	if(date[0]=='0')
	{
		if(date[1]>'0');
		else
		return -1;
	 } 
	if((month[0]>='0'&&month[0]<='1')&&(month[1]>='0'&&month[1]<='9'))
	{
		if(month[0]=='1')
		{
			if(month[1]>='0'&&month[1]<='2');
			else
			return -1;
    		}
    		if(month[0]=='0')
    		{
    			if(month[1]>'0');
    			else
    			return -1;
			}
		if(year[0]>'0'&&year[0]<='2')
		{
			for(i=0;i<4;i++)
			{
				if(year[i]>='0'&&year[i]<='9');
				else
				break;
			}
			if(i==4)
			return 1;
		}
		}
	}
		return -1;
	}
int valid_percentage(char *percentage)
{
	if(percentage>=0&&percentage<=100)
	return 1;
	else
	return -1;
}
int validate_sal(int sal)
{
	if(sal>0)
	return 1;
	else
	return -1;
}
int get_sal(sal *new_sal, psn *new_psn ) // asks user to fill person details 
{
    printf("\nPlease enter Salary details for %s %s\n", new_psn->fname, new_psn->lname);
    printf("\nInitial Salary : ");
    while(1)
    {
    scanf("%d",&(new_sal->initial));
    if(validate_sal(new_sal->initial)>0)
    break;
    else;
    printf("Enter the correct sal :");
}
    printf("\nIncrement Salary %% : ");
    scanf("%d",&(new_sal->increment));
    while(1)
    {
	if(valid_percentage(new_sal->increment)>0)
    break;
    else
    printf("enter correct percentage\n");
	}
    printf("\nDate of Joining as dd mm yyyy : ");
    while(1)
    {
    scanf("%s",new_sal->doj);
    scanf("%s",(char *)(new_sal->doj)+3);
    scanf("%s",(char *)(new_sal->doj)+6);
    if(valid_dob1(new_sal->doj,(char*)(new_sal->doj)+3,(char*)(new_sal->doj)+6)>0)
    break;
    printf("enter doj correctly\n");
}
    return 0;
}

int create(emp **new_emp){
    *new_emp = (emp *)malloc(sizeof(emp));
    (*new_emp)->s = (sal *)malloc(sizeof(sal));
    (*new_emp)->p = (psn *)malloc(sizeof(psn)); 
    
  get_psn((*new_emp)->p); // get person details to from user
  get_sal((*new_emp)->s,(*new_emp)->p); // get person details to from user
  printf("\nEmployee Created  ::\n");
  return 0;
}


int print(emp **new_emp){
    
    printf("\nEmployee details of Mr. %s %s are ::\n",(*new_emp)->p->fname,(*new_emp)->p->lname);
    
    printf("\nDate of birth : %s %s %s",(*new_emp)->p->dob
                                        ,(char *)((*new_emp)->p->dob)+3
                                        ,(char *)((*new_emp)->p->dob)+6);
                                        
    printf("\nDate of Joining : %s %s %s",(*new_emp)->s->doj
                                        ,(char *)((*new_emp)->s->doj)+3
                                        ,(char *)((*new_emp)->s->doj)+6);

    printf("\nInitial salary  : %d",(*new_emp)->s->initial);
    printf("\nSalary increment : %d%%",(*new_emp)->s->increment);
    
    return 0;
}
