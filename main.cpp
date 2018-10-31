#include <iostream>
#include <string>

using namespace std;
bool user(string name);
bool pass(string password);

int main(){

string name;
string password;
bool pass_check=false;
bool name_check=false;
int live=3;

  std::cout << "Please enter your username and password to login" << '\n';
  std::cout << "Username: ";
  cin>>name;
  user(name);
  std::cout << "Password: ";
  cin>>password;
  pass(password);
  while(pass_check==false||name_check==false||live!=0){
    live--;
    std::cout << "You have "<<live<<" attempts remaining before this system self destructs" << '\n';
    std::cout << "Please try again" << '\n';
    std::cout << "Username: ";
    cin>>name;
    user(name);
    std::cout << "Password: ";
    cin>>password;
    pass(password);
  }

  return 0;
}
bool user(string name){
  if(name=="Student"){
    return true;
  }
  else
  { return false;}
}
bool pass(string password){
  if(password=="trickortreat"){
    return true;
  }
  else
  { return false;}
}
