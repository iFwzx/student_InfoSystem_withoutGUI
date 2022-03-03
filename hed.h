#ifndef HED_H
#define HED_H
#include<limits>
#include<iostream>
#include<string>
#include<fstream>
using namespace std ;
struct date{
      string year;
      string month;
       string day;
       };
struct student{
 string name ;
  string id ;
    string gpa ;
     string major ;
      string level ;
       date birthday; 
	    } ;
student import[5] ;
student information[10] ; // Global variable 
int number_of_student=0; // Global variable 
int menu_num;
void deleteing(student information[], int &size, string delete_id_key, int &number_ofstudent);
void search_by_id(student information []  , int size , string search_key)
{
	for(int i=0 ; i<size ; i++)
	{
		if(information[i].id==search_key)
		{
			cout<<"His name is :"<<information[i].name <<endl;
			cout<<"His ID is :"<<information[i].id<<endl;
			cout<<"His GPA is :"<<information[i].gpa<<endl;
			cout<<"His major is :"<<information[i].major<<endl;
			cout<<"His level is :"<<information[i].level<<endl;
			cout<<"His Birthday is :"<<information[i].birthday.year<<"/"<<information[i].birthday.month<<"/"<<information[i].birthday.day<<endl;
		}
		
		
	}
}
void sort_data_names(student information[]  , int size )
{
	bool ordered = false ;
	string temp ;
	for ( int i=0 ; i<size-1 && ordered==false ; i++) // we take size-1
	{
		ordered = true ;
		for(int j=0 ; j<size-1 ; j++)
		{
			if((information[j].name).compare(information[j+1].name)>0)
           {
             ordered=false;
              temp = information[j].name;
              information[j].name = information[j+1].name;
               information[j+1].name = temp;
 }
}
  
		}
		cout<<"Names in Alphabetical order : "<<endl;
		for(int i=0 ; i<size ; i++)
		cout<<information[i].name<<endl;
	 }
void sort_data_gpa(student information [] , int size)
{
	
	bool key_1=true ;
	string key;
	int i = 0 ;
	cout<<"Enter 1 to sort in descending order , 2 to sort in ascending order"<<endl;
	while(key_1==false)
	{
		key_1=false ;
	cin>>key ;
	if (key[i] >=65 && key[i] <=122)
     {
     cout<<"Invalid input , Enter a number "<<endl;
     cout<<"Enter 1 to sort in descending order , 2 to sort in ascending order"<<endl;
	 i++ ;
	 }
	 else
	 key_1=true ;
     
	
}
	
	
	
	
	
	
	bool ordered = false ;
	string temp ;
	for ( int i=0 ; i<size-1 && ordered==false ; i++) // we take size-1
	{
		if(key=="1")
		{
		ordered = true ;
		for(int j=0 ; j<size-1 ; j++)
		{
			if(information[j].gpa < information[j+1].gpa)
           {
             ordered=false;
              temp = information[j].gpa;
              information[j].gpa = information[j+1].gpa;
               information[j+1].gpa = temp;
 }
}
}
     else
     {
     	ordered = true ;
		for(int j=0 ; j<size-1 ; j++)
		{
			if(information[j].gpa > information[j+1].gpa)
           {
             ordered=false;
              temp = information[j].gpa;
              information[j].gpa = information[j+1].gpa;
               information[j+1].gpa = temp;
	 }

		}
	}
}

		cout<<"GPA after order : "<<endl;
		for(int i=0 ; i<size ; i++)
		cout<<information[i].name<<": "<<information[i].gpa<<endl;
		

}


void update_information( student information [] , int size , string update_id_key)
{
	int finder[1] ;
	for(int i=0 ; i<size ; i++)
	{
		
		if(information[i].id==update_id_key)
		{
			cout<<"Enter a new name for  :"<<information[i].name<<endl;
			cin>>information[i].name;
			cout<<"Enter a new ID  :"<<endl;
			
			while(!(cin>>information[i].id))
			{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Please Enter a Valid ID: ";
			}
			
			cout<<"Enter a new GPA  :"<<endl;
				while(!(cin>>information[i].gpa))
			{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Please Enter a number for GPA: ";
			}
			
			cout<<"Enter a new major  :"<<endl;
			cin>>information[i].major;
			cout<<"Enter a new level :"<<endl;
				while(!(cin>>information[i].level))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input.  Please Enter a number for level: ";
			}
			
			cout<<"Enter a new Birthday date :"<<endl;
			cout<<"#Year : "<<endl;
				while(!(cin>>information[i].birthday.year))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input.  Please Enter a number for year: ";
			}
			
            
            cout<<"#Month :"<<endl;
            while(!(cin>>information[i].birthday.month))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input.  Please Enter a number for month: ";
			}
            
            cout<<"#Day : "<<endl;
            while(!(cin>>information[i].birthday.day))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input.  Please Enter a number for day: ";
			}
            
            cout<<endl<<endl<<endl;
            cout<<"The person who is ID before was :"<<update_id_key<<" "<<" after updating , his informartion is :"<<endl;
            cout<<"His name is :"<<information[i].name <<endl;
			cout<<"His ID is :"<<information[i].id<<endl;
			cout<<"His GPA is :"<<information[i].gpa<<endl;
			cout<<"His major is :"<<information[i].major<<endl;
			cout<<"His level is :"<<information[i].level<<endl;
			cout<<"His Birthday is :"<<information[i].birthday.year<<"/"<<information[i].birthday.month<<"/"<<information[i].birthday.day<<endl;
            
		}
		
		
	}

}
void display_data(student information[], int size)
{
	if(size==0)
	{
	
	cout<<"There is nothing to display,add at least one student."<<endl;
	return;
	}
	else
	{
	
	for(int i=0 ; i<number_of_student ; i++)
{
cout<<"the student #"<<(i+1)<<" name : "<< information[i].name << endl;
cout<<"the student #"<<(i+1)<<" ID : " << information[i].id<< endl;
cout<<"the student #"<<i+1<<" GPA : "<< information[i].gpa<< endl;
cout<<"the student #"<<i+1<<" major : "<< information[i].major<< endl;
cout<<"the student #"<<i+1<<" level : "<< information[i].level<< endl;
cout<<"the student #"<<i+1<<" birthday : "<<endl<< endl;
cout<<"Birthday is :"<<information[i].birthday.year<<"/"<<information[i].birthday.month<<"/"<<information[i].birthday.day<<endl;
cout<<endl<<endl;
}
}
}
void adding(student information[], int &size, int &number_of_student )
{
	int num_add ;
	cout<<"How many student you want to add?"<<endl;
	cin>>num_add ;
	int new_total = num_add + number_of_student ;
	string delete_key_1 , delete_key_2 ;
	if (new_total<10)
{
	cout << "Enter the informaion of the new students" <<endl;
	for(int i=0 ; i<num_add ; i++)
{
	cout<<"Enter the student #"<<(i+1)<<" name :"<<endl;
	cin>>information[number_of_student].name;
	cout << "Enter the student #"<<(i+1)<<" ID: "<<endl;
    cin>>information[number_of_student].id ;
int id_length = information[number_of_student].id.length() ;
	for(int j=0 ; j<id_length ; j++)
	{
	  if (information[i].id[j] >=65 && information[i].id[j] <=122)
     {
     cout<<"Invalid input , Enter a number "<<endl;
     cout<<"Enter the student #"<<(i+1)<<" ID :"<<endl;
     cin>>information[number_of_student].id ;
 }
}
		
	cout<<"Enter the student #"<<i+1<<" GPA :"<<endl;
    cin>>information[number_of_student].gpa;
int gpa_length = information[number_of_student].gpa.length() ;
	for(int j=0 ; j<gpa_length ; j++)
	{
	  if (information[i].gpa[j] >=65 && information[i].gpa[j] <=122)
     {
     cout<<"Invalid input , Enter a number "<<endl;
     cout<<"Enter the student #"<<(i+1)<<" GPA :"<<endl; 
     cin>>information[number_of_student].gpa ;}
 } 
	
	cout<<"Enter the student #"<<i+1<<" major :"<<endl;
	cin>>information[i].major;
	cout<<"Enter the student #"<<i+1<<" level :"<<endl;
	cin>>information[number_of_student].level;
    int level_length = information[number_of_student].level.length() ;
	for(int j=0 ; j<level_length ; j++)
	{
	  if (information[i].level[j] >=65 && information[i].level[j] <=122)
     {
     cout<<"Invalid input , Enter a number "<<endl;
     cout<<"Enter the student #"<<(i+1)<<" Level :"<<endl; 
     cin>>information[number_of_student].level ;}
}
	
	
	cout<<"Enter the student #"<<i+1<<" birthday :"<<endl;
cout<<"#Year : "<<endl;
cin>>information[number_of_student].birthday.year; 
int year_length = information[number_of_student].birthday.year.length() ;
	for(int j=0 ; j<year_length ; j++)
	{
	  if (information[i].birthday.year[j] >=65 && information[i].birthday.year[j] <=122)
     {
     cout<<"Invalid input , Enter a number "<<endl;
     cout<<"Enter the student #"<<(i+1)<<" year of birth :"<<endl; 
     cin>>information[number_of_student].birthday.year ;}
}

cout<<"#Month :"<<endl;
cin>>information[number_of_student].birthday.month ;
int month_length = information[number_of_student].birthday.month.length() ;
	for(int j=0 ; j<month_length ; j++)
	{
	  if (information[i].birthday.month[j] >=65 && information[i].birthday.month[j] <=122)
     {
     cout<<"Invalid input , Enter a number "<<endl;
     cout<<"Enter the student #"<<(i+1)<<" month of birth :"<<endl; 
     cin>>information[number_of_student].birthday.month ;}
}


cout<<"#Day : "<<endl;
cin>>information[number_of_student].birthday.month ;
int day_length = information[number_of_student].birthday.day.length() ;
	for(int j=0 ; j<day_length ; j++)
	{
	  if (information[i].birthday.day[j] >=65 && information[i].birthday.day[j] <=122)
     {
     cout<<"Invalid input , Enter a number "<<endl;
     cout<<"Enter the student #"<<(i+1)<<" Day of birth :"<<endl; 
     cin>>information[number_of_student].birthday.day ;}
}

cout<<endl<<endl;

	number_of_student++;
     size ++ ;
}
cout<<"Students was added succesfully"<<endl;
return;

}


else
{
	cout << "there is no space in class , please delete one student to be able to add new one" <<endl;
	cout<<"Do you want to delete a student ? (Enter 1 for yes , 0 for no)"<<endl;
	cin>>delete_key_2 ;
	if(delete_key_2=="1")
	{
	cout<<"Enter the ID for the person you want to delete "<<endl;
	cin>>delete_key_1;
	deleteing(information, size, delete_key_1 , number_of_student);}
	else if (delete_key_2=="0")
	return ;
	else
	cout<<"invalid number" ;
}
}
//delete one of the data
void deleteing(student information[], int &size, string delete_id_key, int &number_of_student )
{
	int add_key_1 ;
	cout << "Enter ID of the student that you want to delete" <<endl;
	cin>>delete_id_key ;
     int delete_id_key_length = delete_id_key.length() ;
     if(number_of_student>0)
	 {for(int j=0 ; j<delete_id_key_length ; j++)
	{
	  if (delete_id_key[j] >=65 && delete_id_key[j] <=122)
     {
     cout<<"Invalid input , Enter a number "<<endl;
     cout<<"Enter the student #"<<" ID :"<<endl;
     cin>>delete_id_key ;
 }
}
	
	for (int i=0;i<number_of_student;i++)
	{
	if (information[i].id==delete_id_key)
	{
		
		for (int j=i; j< (number_of_student-1); j++) // we take size-1 
		{
			information[j]=information[j+1];
		}
		break ;
	}
	
}
if(number_of_student==0 )
{
	cout<<"Item was not found.";
}
else
{
	cout<<"student was deleted succesfully " << endl;
	size--;
	
}


cout<<"Do you want to add a new student ? (1 for yes , 0 for no)"<<endl;

cin>>add_key_1 ;

while(add_key_1>2 || add_key_1<0)
{


cout<<"Invalid Entry, please enter 1 or 0: "<<endl;
cin>>add_key_1;
} 

if(add_key_1==1)
{
size++;
adding(information, size, number_of_student); 
}
else
{
	
	return ;
}


}
}
void new_file(student Student_information[] , string file_name, int size)
{
    ofstream Student_file;
    Student_file.open(file_name.c_str(), ios::out);
        if (Student_file.is_open())
        {
            cout << "Your file is opend secsusfully and ready for writing ... " << endl;
            for (int i = 0;i < size;i++)
            {
                Student_file << Student_information[i].name << endl;
                Student_file << Student_information[i].id << endl;
                Student_file << Student_information[i].gpa << endl;
                Student_file << Student_information[i].major << endl;
                Student_file << Student_information[i].level << endl;
                Student_file << Student_information[i].birthday.year << endl;
                Student_file << Student_information[i].birthday.month << endl;
                Student_file << Student_information[i].birthday.day << endl;

            }
            cout << "File is created and filled secsusfully and you can access by using the name : " << file_name.c_str() << endl;
            Student_file.close();
        }
        else
        {
            cout << "The file is not opend for writing try agien ! " << endl;
        }
        
    
}
void import_file(student import[],student information[] , string file_name, int &number_of_student)
{
    ifstream Student_file;
    Student_file.open(file_name.c_str(), ios::in);
    if (Student_file.is_open())
    {
        cout << "File is opend for reading ... " << endl;
        int array_index = number_of_student ;
        while (!Student_file.eof())
        {
            getline(Student_file, import[array_index].name);
            information[number_of_student].name = import[array_index].name ;
            getline(Student_file, import[array_index].id);
            information[number_of_student].id = import[array_index].id;
            getline(Student_file, import[array_index].gpa);
            information[number_of_student].gpa = import[array_index].gpa;
            getline(Student_file, import[array_index].major);
            information[number_of_student].major = import[array_index].major;
            getline(Student_file, import[array_index].level);
            information[number_of_student].level = import[array_index].level ;
            getline(Student_file, import[array_index].birthday.year);
            information[number_of_student].birthday.year = import[array_index].birthday.year ;
            getline(Student_file, import[array_index].birthday.month);
            information[number_of_student].birthday.month = import[array_index].birthday.month ;
            getline(Student_file, import[array_index].birthday.day);
            information[number_of_student].birthday.day = import[array_index].birthday.day   ;
            array_index++;
            number_of_student ++ ;


        }
        cout << "File is done of reading secsusfully " << endl;
        Student_file.close();
        number_of_student = number_of_student -1 ;
        return;
    }
    else
    {
        cout << "File is not opend for reading try agein please ! " << endl;
        return;
    }
}
void Buck_up_file(student Student_information[] , int size )
{
	// Auto Buck up (NOT VIELD FOR READING IN THE PROGRAME IT'S A TXT FILE TO PRINT OR READABLE EASY BY A HUMAN
	ofstream BUCK_UP_FILE;
	BUCK_UP_FILE.open("BUCK_UP.txt",ios::out);
	if(BUCK_UP_FILE.is_open())
	{
		cout<<"File is BUCKING UP ..."<<endl;
		for (int i = 0;i < size;i++)
            {
            	BUCK_UP_FILE<<"STUDENT_DATA # "<<i+1<<endl;
                BUCK_UP_FILE << "Name : "<< Student_information[i].name << endl;
                BUCK_UP_FILE <<"Id : "<< Student_information[i].id << endl;
                BUCK_UP_FILE <<"Gpa : "<< Student_information[i].gpa << endl;
                BUCK_UP_FILE <<"Major : "<< Student_information[i].major << endl;
                BUCK_UP_FILE << "Level : "<<Student_information[i].level << endl;
                BUCK_UP_FILE <<"Birthday_Date : "<<Student_information[i].birthday.year<<" \ "<<Student_information[i].birthday.month << " \ "<<Student_information[i].birthday.day<<endl;
            
            }
            cout<<"BUCK UP FILE SAVED SECSUSFULLY IN YOUR PROGRAME LOCATION WITH NAME (BUCK_UP.txt "<<endl;
            cout<<"NOTE : please don't use this file to import in this program it's not vild (just for printing a hard copy or a human read "<<endl;
            BUCK_UP_FILE.close();
            return ;
            
            
		
	}
	else
            {
            	cout<<"BUCK UP FILE IS NOT SAVED ! TRY AGEIN "<<endl;
            	return;
			}
	
	
}
       
       
#endif
