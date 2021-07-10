// I am deferent, I am Scorpio-BS


/*
	*_* Assignment *_*
	Complete the below Code declare & define the functions and variables
	Complete the cout statemnets
*/

# include <iostream>
using namespace std;

void default_function()
{
	cout << "\nProgram will be closed ASAP!" << endl;
}

bool check_login()
{
	string user_name, user_password, n_user_name, n_user_password;
	
	cout << "\t\t@_@ Sign Up Form @_@" << endl;
	cout << "\nEnter Your Name: ";
	cin >> n_user_name;
	
	cout << "Enter Your Password: ";
	cin >> n_user_password;
	
	cout << "\nProfile Created Successfully!" << endl;
	
	cout << "\nUser Name: ";
	cin >> user_name;
	if(user_name == n_user_name)
	{
		cout << "Password: ";
		cin >> user_password;
		if(user_password != n_user_password)
		{
			cout << "Password Not Matched! Create New User" << endl;
		}
		else
		{
			cout << "\nLogin Successfully" << endl;
			return true;
		}
	}
	else
	{
		cout << "\nUser Name Not Found! Create New User" << endl;
	}
	return false;
}


int main()
{
	/*declare variable1 for while loop*/
	if(check_login())
	{
		int run = 1;
		while(run)
		{
			cout << "1. Add" /*Put statement in quotes*/ << endl;
			cout << "2. " /*Put statement in quotes*/ << endl;
			cout << "a. " /*Put statement in quotes*/ << endl;
			cout << "b. " /*Put statement in quotes*/ << endl;
			cout << "Enter Your Choice: ";
			
			// declare variable for this cin
			char op;
			cin >> op;
			
			// declare a variable for switch statement
			switch(op)
			{
				case '1':
					// delete this and call a relitve function 1 here : function calling = functionName();
					cout << "\nAdd";
					break;
				case '2':
					// delete this and call a relitve function 2 here : function calling = functionName();
					
					break;
				case 'a':
					// delete this and call a relitve function 3 here : function calling = functionName();
					
					break;
				case 'b':
					// delete this and call a relitve function 4 here : function calling = functionName();
				
					break;
				default:
					// example of function call and this function is declare and define at top
					default_function();
					break;
			}
					
			if(op == 'x')
			{
				break;
			}
		}	
	}
	else
	{
		check_login();	
	}	
	return 0;
}
