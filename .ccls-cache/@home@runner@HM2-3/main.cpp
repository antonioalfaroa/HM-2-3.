#include <iostream>

using namespace std;

class HeartRates{

private:
string firstname;
string lastname;
int day;
int month;
int year;

public:
HeartRates(string firstname, string lastname, int day, int month, int year){};
void setFirstname(string fir){
  firstname = fir;
}
void setLastname(string last){
  lastname = last;
}
void setday(int d){
  day = d;
}
void setmonth(int m){
  month = m;
}
void setyear(int y){
  year = y;
}
string getLastname(){
  return lastname;
}
string getFirstname(){
  return firstname;
}
int getday(){
  return day;
}
int getmonth(){
  return month;
}
int getyear(){
  return year;
}
int getAge(){
  int age;
  age = 2022 - year;
  return age;
}
int getMaxiumumHeartRate(){
int max;
  max = 220 - getAge();
  return max;
}
int getTargetHeartRate(){
int tar;
  tar = getMaxiumumHeartRate() * 0.85 ;
  return tar;
}
};

int main(){

  int day;
  int month;
  int year;
  string firstname;
  string lastname;

  cout<<"Please enter your date of birth "<<endl;
  cout<<"Day : ";
  cin>>day;
  cout<<"Month : ";
  cin>>month;
  cout<<"Year : ";
  cin>>year;
  cout<<"Please enter your first name :"<<endl;
  cin>>firstname;
  cout<<"Please enter your last name :"<<endl;
  cin>>lastname;

  HeartRates h(firstname,lastname,day,month,year);
  h.setFirstname(firstname);
  h.setLastname(lastname);
  h.setday(day);
  h.setmonth(month);
  h.setyear(year);

  cout<<"Your name is : "<<h.getFirstname()<<" "<<h.getLastname()<<endl;
  cout<<"Your birth date is : "<<h.getmonth()<<"/"<<h.getday()<<"/"<<h.getyear()<<endl;
  cout<<"Your age is : "<<h.getAge()<<" years old"<<endl;
  cout<<"Your maximum heart rate is : "<<h.getMaxiumumHeartRate()<<" BPM"<<endl;
  cout<<"Your targer heart rate is : "<<h.getTargetHeartRate()<<" BPM"<<endl;
  
}