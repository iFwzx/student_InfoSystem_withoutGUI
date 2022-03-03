// made by Dakheel Almogbil , 
// faisal Alfawaz , 
//Emad althukair , 
// Hassan Alamri , 
/// Fawaz Ayashi  , this is me 
//Sectiom : 4m5  , Project Group : 1
// instructior : Saad Alharthi 
#include <iostream>
#include<string>
#include<cmath>
#include<cstring>
#include<limits> // to use a pre defined functions 
#include<fstream>//to use file functions 
#include"hed.h"
using namespace std;
int main(int argc, char** argv)
{
	
	int size,imported_size , num_add ;
	string file_name;
 string search_key , sort_name_key , sort_gpa_key , update_key  ,update_id_key,delete_id_key;
 
 	cout<<"\t \t \t \t  Welcome to Student Management System "<<endl;
	cout<<endl;
	do
	{
		
	cout<<endl;
	cout<<endl;
	
		cout<<"Select which Service You Want : "<<endl;
	
	cout<<"\n\t------------------------System Menu---------------------";
	cout<<"\n\t|            Enter(1)adding a new student details        |";
	cout<<"\n\t|            Enter(2) Search for a student details       |";
	cout<<"\n\t|            Enter(3) Update student details             |";
	cout<<"\n\t|            Enter(4) delete student details             |";
	cout<<"\n\t|            Enter(5) Display the whole students details |";
	cout<<"\n\t|            Enter(6) Sort records                       |";
	cout<<"\n\t|            Enter(7) To Save a new file                 |";
	cout<<"\n\t|            Enter(8) To Import a file                   |";
    cout<<"\n\t|            Enter(9) For backup file                    |";
	cout<<"\n\t|            Enter(0) or enter any key To exit           |";
	
	
	cout<<endl<<endl;
	////	End of Main Menu
	
	cin>>menu_num;
	
	if (menu_num>9 || menu_num<0)
	{
	
	cout<<"Sorry,Wrong input,Please Enter a number between 0 to 6. :"<<endl;
	
	
	cin>>menu_num;
	}
	
	
	 if(menu_num==0)
	{
		Buck_up_file(information, size );
	cout<<"Thank you for using our system. GoodBye"<<endl;
	return 0;
	}
	
	
	
	//// Add New Student Starts
	 if (menu_num==1)
		{
			
			
			
			
			 adding( information,  size,  number_of_student );

		}
	
		//// Add New Student End.
		
		
		//// Search for specific student Starts
		if(menu_num==2)
		{
			cout<<"Enter the id of the perrson you are searching for "<<endl;
			while(!(cin>>search_key))
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Please Enter a Valid ID: ";
		}
			
			 search_by_id(information   ,  size ,  search_key);
		}
		//// Search for specific student ends.
		
		
		//// Update Existing records Starts.
		if(menu_num==3)
		{
			cout<<"Enter the id for the person you want to update "<<endl;
			while(!(cin>>update_id_key))
			{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input.  Please Enter a Valid ID: ";
			}
			
		
			
			update_information(information  ,  size , update_id_key);
		}
	
	//// Update Existing records Ends.
	
	if(menu_num==4) //// for deleting 
	{
		
		
		 deleteing(information,  size,  delete_id_key,  number_of_student); 
		 
		 
	}
	
	if(menu_num==5)
	{
		display_data(information,  size);
	}
		//// Sort Records Starts.
	if(menu_num==6)
	{
		cout<<"\t \t Sort Records"<<endl<<endl<<endl;
		
		
		cout<<"1- Sort Records By Names Alphabetically."<<endl;
		cout<<"2- Sort Records By GPA."<<endl;
		cout<<"Choose 1 or 2"<<endl;
		string sort_choice;
		cin>>sort_choice;
	

		if(sort_choice=="1")
		{
			sort_data_names(information  , size );
		}
		
		if(sort_choice=="2")
		{
			
		sort_data_gpa(information  ,  size);
		
		
			
		}
		
		
		
		
	
	}
	
		if(menu_num==7)
	{
		cout<<"Enter a name for your file : "<<endl;
		cin>>file_name;
		new_file(information,file_name,size);
		
		}	
		if(menu_num==8)
		{
		 cout<<"Enter the file name : "<<endl;
		 cin>>file_name;
		import_file(import,information,file_name,number_of_student);
		}
		
		if(menu_num==9)
		{
			cout<<"Enter the file name : "<<endl;
			cin>>file_name;
		Buck_up_file(information , size );
		}
		
		
		
	
}
while (menu_num!=0);

}

