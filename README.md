# Employee-Data-validation
## 1. Introduction
## 2. Algorithms
>* Main Program
>* Get Emp Personal Details
>* Get Emp Salary Details
>* Validate Emp Personal Details
>>* Validate Name
>* Validate Date of Birth and Date of Joining
>* Validate Emp Salary Details



# Introduction
This document Explains you about the Data Validation on Employee Details using structures. 
And also briefs you about the usage of Structures within structures and Pointers of structure variables. 

# Algorithms
### Main-Program
* Created structure for personal details in this we have members for First name, Last name and Date of Birth.
* Created another structure for Salary details in this we have members for Initial salary, Percentage Increment and Date of Joining.
* In this Main Function we can Call the functions to Create and Print the empolyee details.
* In _Create_ function we create the structure varaibles to take salary and employee details from user.
* _Create_ function calls Two more function Get Personal details and Get Salary details to take these details from user.
* Get Personal details function gets personal details from user. 
* Get Salary details function  gets salary details from user.
### Get-Emp-Personal-Details
* In this function we take input from user for personal details - _Frist name_, _Last name_ and _Date of Birth_.
* After finish taking inputs from the user, this function starts Validate Personal details operation.
### Validate-Emp-Personal-Details
* In this section we use two more function to validate the personal details.
* Validate Name and Validate Date funtions are two function used to validate personal details of a person.
#### Validate-Name
* In this function the user given _first name_ and _last name_ are taken as inputs in this function.
* The name is taken in the form of string.
* Now the string is Cheked Character by Character to check the respective character is in the range of alphabets ASCII values.
* While checking if one character is out of Alphabetic ASCII range it return -1, produce error message to intimate the user and asks user to "Enter the Name correctely ".
* If the full string is in Alphabetic ASCII range then it exit from the function with return 0
### Validate-Emp-Salary-Details
* In this section we use three more functions to Validate salary details.
*__Validate salary__, Validate percentage and Validate date are the functions to validate salary details.
* In Validate salary we create another character array variable to take the salaray as string and check each character in the string, if the character is in AlphaNumeric ASCII range are not, if it is not in the specifed range then it returns -1 and produce error message and asks user to enter the salary again and again till the user gave the correct salary as INPUT.
* In Validate Percentage we create here also another character array variable to store the percentage in the string form, after finishin up taking input from user, It checks the string size is two bytes or not and after that checks each character is in AlphaNumeric ASCII Range or not, If the it is not in Specifed Ranges then it returns -1 , produces error message and asks user to enter the percrntage correctly.
* After finishing the salary and percentage Validations it calls Validate Date function.
### Validate-Date of Birth and Date of joining
* In this function we take date as three strings to check the every character in the date, month and year are in coorect size.
* After checking date, month and year It checks individually the each and ever byte in date format are in the range of AlphaNumeric ASCII rang
* And also checks the date, month and Year formats like date is in between (1 to 31), month (1 to 12) and year>999
* If all the conditions are satisified then it return -1 and produces error message and asks user to enter the date correctly again and again till the user will
enter the correct date, month and Year 
****
After finishig all the data validation the Main Function will print the entered Details
