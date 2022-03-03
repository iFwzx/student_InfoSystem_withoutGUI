#include"hed.h"
student information[10] ; // Global variable 
int number_of_student=0; // Global variable 
int menu_num;
struct date birthday;
struct student ;      
void search_by_id(student information []  , int size , string key) ;
void sort_data_names(student information[]  , int size ) ;
void sort_data_gpa(student information [] , int size) ;
void update_information( student information [], int size , string update_id_key) ;
void display_data(student information[], int size);
void deleteing(student information[], int &size, string delete_id_key, int &number_ofstudent);
void adding(student information[], int &size, int &number_of_student );
void new_file(student Student_information[], string file_name, int size);
void import_file(student Student_inforrmation[], string file_name, int&number_of_student);
void Buck_up_file(student Student_information[] , int size );
