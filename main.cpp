#include <iostream>
#include <string>
using namespace std;

int main(){
  char repeat = 'y';
  do{

  double balance = 1000.00, withdraw, deposit ;
  char bankChoice;
  int transactions; 
  cout << "Welcome to chabot banking, how many transactions will you be making today? \n";
  cin >> transactions; 


 for (int i = 0 ; i < transactions; i++) {
  cout << " Would you like to withdraw or deposite? \n";
 cin >> bankChoice; 
   if(bankChoice == 'w') { //withdraw
    cout << "How much would you like to withdraw? \n";
    cin >> withdraw;
    if (withdraw > balance ){
      cout << "Error! Not enough funds: \n";
    }
    else { balance = balance - withdraw;
    cout << "Your balance is now: \n" << balance;
         }
    }
  
  
  else if(bankChoice == 'd') { // deposit
   cout << "How much would you like to deposit?: \n";
    cin >> deposit;
    balance = balance + deposit;
    cout << "Your balance is now: \n" << balance;
  }
  
    
  

 }
  cout << "Would you like to make another transaction? (y/n): \n" << endl;
  cin >> repeat;
}  while (repeat == 'y' || repeat == 'Y'); 
  
cout << "Thank you for using are service!\n";
return 0;
}
