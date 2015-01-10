#include<iostream>
#include<fstream>
using namespace std;
class inventory{
public:
char product_id[20];
char product_name[20];
char product_amount[20];
char price[20];
char type_of_product[20];
char self_number[20];


void read_inventory(){
cout<<"product_id      : ";
cin>>product_id;
cout<<"product_name    : ";
cin>>product_name;
cout<<"product_amount  : ";
cin>>product_amount;
cout<<"price           : ";
cin>>price;
cout<<"type_of_product : ";
cin>>type_of_product;
cout<<"self_number     : ";
cin>>self_number;
}};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class file{
public:
void insert(){
inventory test;
inventory a;
a.read_inventory();
ifstream myfile;
myfile.open("project.txt");
int flag=0;
while(!myfile.eof()){
myfile.getline(test.product_id,20,'|');
myfile.getline(test.product_name,20,'|');
myfile.getline(test.product_amount,20,'|');
myfile.getline(test.price,20,'|');
myfile.getline(test.type_of_product,20,'|');
myfile.getline(test.self_number,20,'\n');

if(strcmp(a.product_id,test.product_id)==0){
flag=1;                                          
}}
cout<<"";
if(flag==1){
cout<<"   Cant,t insert it ya bashmohandsaa :) ";
}
else{
ofstream f;
f.open("project.txt",ios::app);
f<<a.product_id<<"|";
f<<a.product_name<<"|";
f<<a.product_amount<<"|";
f<<a.price<<"|";
f<<a.type_of_product<<"|";
f<<a.self_number<<endl;
}}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void view(){
      ifstream myfile;
 myfile.open("project.txt",ios::in);
inventory z;
 while(!myfile.eof())
 {
 myfile.getline(z.product_id,21,'|');
  myfile.getline(z.product_name,21,'|');
   myfile.getline(z.product_amount,21,'|');
    myfile.getline(z.price,21,'|');
    myfile.getline(z.type_of_product,21,'|');
    myfile.getline(z.self_number,21);
      cout<<"  "<<z.product_id<<"   "<<z.product_name<<"   "<<z.product_amount<<"   "<<z.price<<"   "<<z.type_of_product<<"   "<<z.type_of_product<<endl;
      }
      myfile.close();
      }
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void search(){
int mode;
cout<<"Enter mode you want to search by it\n";
cout<<"if you want to search by id press 1  \n";
cout<<"if you wnat to search by name press 2 \n";
cout<<"if you want to search by amount press 3 \n";
cout<<"if you want to search by price press 4 \n";
cout<<"if you want to search by type press 5 \n";
cout<<"if you want to search by self number press 6\n"<<endl;
cin>>mode;
cout<<"plz Enter search field  : "<<endl;
char name[20];
cin>>name;
inventory test;
ifstream read;
read.open("project.txt");
int flag=0;
while(!read.eof()){
read.getline(test.product_id,20,'|');
read.getline(test.product_name,20,'|');
read.getline(test.product_amount,20,'|');
read.getline(test.price,20,'|');
read.getline(test.type_of_product,20,'|');
read.getline(test.self_number,20);    
                                                          
if((strcmp(test.product_id,name)==0)&&(mode==1)){
cout<<test.product_id<<"\t"<<test.product_name<<"\t"<<test.product_amount<<"\t"<<test.price<<"\t"<<test.type_of_product<<"\t"<<test.self_number;
cout<<endl;
flag=1;
}
                                                        
if((strcmp(test.product_name,name)==0)&&(mode==2)){
cout<<test.product_id<<"\t"<<test.product_name<<"\t"<<test.product_amount<<"\t"<<test.price<<"\t"<<test.type_of_product<<"\t"<<test.self_number;
cout<<endl;
flag=1;
}
                                                        
if((strcmp(test.product_amount,name)==0)&&(mode==3)){
cout<<test.product_id<<"\t"<<test.product_name<<"\t"<<test.product_amount<<"\t"<<test.price<<"\t"<<test.type_of_product<<"\t"<<test.self_number;
cout<<endl;
flag=1;
}
                                                        
if((strcmp(test.price,name)==0)&&(mode==4)){
cout<<test.product_id<<"\t"<<test.product_name<<"\t"<<test.product_amount<<"\t"<<test.price<<"\t"<<test.type_of_product<<"\t"<<test.self_number;
cout<<endl;
flag=1;
}
                                                       
if((strcmp(test.type_of_product,name)==0)&&(mode==5)){
cout<<test.product_id<<"\t"<<test.product_name<<"\t"<<test.product_amount<<"\t"<<test.price<<"\t"<<test.type_of_product<<"\t"<<test.self_number;
cout<<endl;
flag=1;
}
            

if((strcmp(test.self_number,name)==0)&&(mode==6)){
cout<<test.product_id<<"\t"<<test.product_name<<"\t"<<test.product_amount<<"\t"<<test.price<<"\t"<<test.type_of_product<<"\t"<<test.self_number;
cout<<endl;
flag=1;
}
}
if(flag==0){
cout<<" \t Not Found \n"<<endl;
}}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////            
void dele(){
ofstream opj;
ifstream read;
opj.open("temp.txt",ios::app);
read.open("project.txt");
inventory test;
int mode;
cout<<"Enter mode you want to del by it\n";
cout<<"if you want to delete by id press 1 \n";
cout<<"if you wnat to delete by name press 2 \n";
cout<<"if you want to delete by amount press 3 \n";
cout<<"if you want to delete by price press 4 \n";
cout<<"if you want to delete by type press 5 \n";
cout<<"if you want to delete by self number press 6"<<endl;
cin>>mode;
cout<<"plz Enter search field : \n"<<endl;
char name[20];
cin>>name;
int flag=0;
while(!read.eof()){
flag=0;                                                     
read.getline(test.product_id,20,'|');
read.getline(test.product_name,20,'|');
read.getline(test.product_amount,20,'|');
read.getline(test.price,20,'|');
read.getline(test.type_of_product,20,'|');
read.getline(test.self_number,20); 
                                         
                                         
if((strcmp(test.product_id,name)==0)&&(mode==1)){
flag=1;
}
                                         
if((strcmp(test.product_name,name)==0)&&(mode==2)){
flag=1;
}
                                        
if((strcmp(test.product_amount,name)==0)&&(mode==3)){
flag=1;
}
                                        
if((strcmp(test.price,name)==0)&&(mode==4)){
flag=1;
}
                                                 
if((strcmp(test.type_of_product,name)==0)&&(mode==5)){
flag=1;
}
            
if((strcmp(test.self_number,name)==0)&&(mode==6)){
flag=1;
}
 
 if((flag==0)&&(!read.eof())){
opj<<test.product_id<<"|";
opj<<test.product_name<<"|";
opj<<test.product_amount<<"|";
opj<<test.price<<"|";
opj<<test.type_of_product<<"|";
opj<<test.self_number<<endl;
}}
opj.close();
read.close();
remove("project.txt");
rename("temp.txt","project.txt");
    
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void updat(){
ofstream opj;
ifstream read;
opj.open("temp.txt",ios::app);
read.open("project.txt");
inventory test;
int mode;
cout<<"Enter mode you want to update by it\n";
                                       
cout<<"if you want to update by id press 1 \n";
cout<<"if you wnat to update by name press 2 \n";
cout<<"if you want to update by amount press 3 \n";
cout<<"if you want to update by price press 4 \n";
cout<<"if you want to update by type press 5 \n";
cout<<"if you want to update by self number press 6"<<endl;
cin>>mode;
cout<<"plz Enter ser field  : "<<endl;
char name1[20];
cin>>name1;
cout<<"plz Enter new field  : "<<endl;
                                       
char name[20];
cin>>name;
int flag=0;
while(!read.eof()){
flag=0;                                                     
read.getline(test.product_id,20,'|');
read.getline(test.product_name,20,'|');
read.getline(test.product_amount,20,'|');
read.getline(test.price,20,'|');
read.getline(test.type_of_product,20,'|');
read.getline(test.self_number,20,'\n'); 
if((strcmp(name1,test.product_id)==0)&&(mode==1)){
opj<<name<<"|";
opj<<test.product_name<<"|";
opj<<test.product_amount<<"|";
opj<<test.price<<"|";
opj<<test.type_of_product<<"|";
opj<<test.self_number<<endl;
flag=1;
}
if((strcmp(name1,test.product_name)==0)&&(mode==2)){
opj<<test.product_id<<"|";
opj<<name<<"|";
opj<<test.product_amount<<"|";
opj<<test.price<<"|";
opj<<test.type_of_product<<"|";
opj<<test.self_number<<endl;
flag=1;
}
if((strcmp(name1,test.product_amount)==0)&&(mode==3)){
opj<<test.product_id<<"|";
opj<<test.product_name<<"|";
opj<<name<<"|";
opj<<test.price<<"|";
opj<<test.type_of_product<<"|";
opj<<test.self_number<<endl;
flag=1;
}

if((strcmp(name1,test.price)==0)&&(mode==4)){
opj<<test.product_id<<"|";
opj<<test.product_name<<"|";
opj<<test.product_amount<<"|";
opj<<name<<"|";
opj<<test.type_of_product<<"|";
opj<<test.self_number<<endl;
   
    
flag=1;
}
if((strcmp(name1,test.type_of_product)==0)&&(mode==5)){
opj<<test.product_id<<"|";
opj<<test.product_name<<"|";
opj<<test.product_amount<<"|";
opj<<test.price<<"|";
opj<<name<<"|";
opj<<test.self_number<<endl;
flag=1;
}
if((strcmp(name1,test.self_number)==0)&&(mode==6)){
opj<<test.product_id<<"|";
opj<<test.product_name<<"|";
opj<<test.product_amount<<"|";
opj<<test.price<<"|";
opj<<test.type_of_product<<"|";
opj<<name<<endl;
flag=1;
}

if((flag==0)&&(!read.eof())){
opj<<test.product_id<<"|";
opj<<test.product_name<<"|";
opj<<test.product_amount<<"|";
opj<<test.price<<"|";
opj<<test.type_of_product<<"|";
opj<<test.self_number<<endl;
}}

opj.close();
read.close();
remove("project.txt");
rename("temp.txt","project.txt");

}};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
int main(){
file mahfouz;
char e='1';
do{


int r;
system("color 24");
cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*";
cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n*";

cout<<"\n*\t\t\t============================\n";
cout <<"*\t\t\t= AHMED REDA AHMED MAHFOUZ =\n";
cout <<"*\t\t\t=                          =\n";
cout <<"*\t\t\t= THE  PROJECT  INVENTORY  =\n";
cout<<"*\t\t\t============================\n*\n*\n";
cout<<"*\t\t\t ====================== \n";
cout<<"*\t\t\t = press 1 to insert  =\n" ;
cout<<"*\t\t\t = press 2 to view    =\n" ;
cout<<"*\t\t\t = press 3 to search  =\n" ;
cout<<"*\t\t\t = press 4 to update  =\n" ;
cout<<"*\t\t\t = press 5 to delete  = \n" ;
cout<<"*\t\t\t ====================== \n*\n*\n";
cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*";
cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
cout <<" CCHOOSE  METHOD  ----:)---->  : ";
cin>>r;
cout<<"\n\n";
if(r==1){
mahfouz.insert();
system("color 14");
cout<<"\n \t\t\t\t============================\n";
cout<<"\n \t\t\t\t=   DONE :) :) :) :) !!!!! =\n";
cout<<"\n \t\t\t\t============================\n\n";
}
if(r==2){
mahfouz.view();
system("color 14");
cout<<"\n \t\t\t\t============================\n";
cout<<"\n \t\t\t\t=  THE VIEW DONE  :) !!!   =\n";
cout<<"\n \t\t\t\t============================\n\n";
}
if(r==3)
{
mahfouz.search();
system("color 14");
cout<<"\n \t\t\t\t============================\n";
cout<<"\n \t\t\t\t=  THE SEARCH DONE  :) !!! =\n";
cout<<"\n \t\t\t\t============================\n\n";
}
if(r==4)
{
mahfouz.updat();
system("color 34");
cout<<"\n \t\t\t\t============================\n";
cout<<"\n \t\t\t\t= THE UPDATE DONE  :) !!!  =\n";
cout<<"\n \t\t\t\t============================\n\n";

}
if(r==5)
{
mahfouz.dele();
system("color 02");
cout<<"\n \t\t\t\t============================\n";
cout<<"\n \t\t\t\t= THE DELETE DONE  :) !!!  =\n";
cout<<"\n \t\t\t\t============================\n\n";
}
cout<<"do you want to continur press 1 ---------> " ;
cin>>e;

}while(e=='1');
system("color 24");
cout<<"\n \t\t\t\t=======================================\n";
cout<<"\n \t\t\t\t= THANK YOU YA BASHMOHANDSAA  :) !!!  =\n";
cout<<"\n \t\t\t\t=======================================\n\n";

system("pause");
return 0;
    
}
