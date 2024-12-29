// /*
// Local Variables
// Variables defined within a function or block are said to be local to those functions.  

// Anything between ‘{‘ and ‘}’ is said to inside a block.
// Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block.
// Declaring local variables: Local variables are declared inside a block.
// */
// // CPP program to illustrate 
// // usage of local variables 
// #include<iostream> 
// using namespace std; 

// void func() 
// { 
// 	// this variable is local to the 
// 	// function func() and cannot be 
// 	// accessed outside this function 
// 	int age=18;	 
// } 

// int main() 
// { 
// 	cout<<"Age is: "<<age; 
	
// 	return 0; 
// } 
// /*
// The above program displays an error saying “age was not declared in this scope”. The variable age was declared within the function func() so it is local to that function and not visible to portion of program outside this function. 

// Rectified Program : To correct the above error we have to display the value of variable age from the function func() only. This is shown in the below program: 
// */
// // CPP program to illustrate 
// // usage of local variables 
// #include<iostream> 
// using namespace std; 

// void func() 
// { 
// 	// this variable is local to the 
// 	// function func() and cannot be 
// 	// accessed outside this function 
// 	int age=18; 
// 	cout<<age; 
// } 

// int main() 
// { 
// 	cout<<"Age is: "; 
// 	func(); 
	
// 	return 0; 
// } 
// Global Variables
// As the name suggests, Global Variables can be accessed from any part of the program.

// They are available through out the life time of a program.
// They are declared at the top of the program outside all of the functions or blocks.
// Declaring global variables: Global variables are usually declared outside of all of the functions and blocks, at the top of the program. They can be accessed from any portion of the program.
// // CPP program to illustrate 
// // usage of global variables 
// #include<iostream> 
// using namespace std; 

// // global variable 
// int global = 5; 

// // global variable accessed from 
// // within a function 
// void display() 
// { 
// 	cout<<global<<endl; 
// } 

// // main function 
// int main() 
// { 
// 	display(); 
	
// 	// changing value of global 
// 	// variable from main function 
// 	global = 10; 
// 	display(); 
// } 
