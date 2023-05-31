#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;


int main() {
  string name;
  char choice;
  char comp_choice;
  int comp;
  char continue_ = 'y';

  //Greeting
  cout << "------------------------------" << endl;
  cout << "Welcome to Rock Paper Scissors" << endl;
  cout << "------------------------------" << endl << endl;
  cout << "What's your name?" << endl;

  //Ask for name
  getline(cin, name);
  cout << endl << "Hello, " << name << "!" << endl;

  //For continue loop
while(continue_ == 'y'){  
  choice = 'x';

  while(choice!='r' && choice!='p' && choice!='s'){ //Ensures only valid input
  //Player chooses rock/paper/scissors
  cout << "Choose rock (R), paper (P), or scissors (S)" << endl;
  cin >> choice;
  choice = tolower(choice);
    
    if(choice!='r' && choice!='p' && choice!='s'){
    cout << "Invalid input, try again." << endl;
    }
  }

  //Computer chooses rock/paper/scissors
  srand(time(NULL));
  comp = rand()%3;
  
  switch(comp){
    case 0: //Outputs Rock
      comp_choice = 'R';
      break;

    case 1: //Outputs Paper
      comp_choice = 'P';
      break;

    case 2: //Outputs Scissors
      comp_choice = 'S';
      break; 
  }

  cout << endl;
  //Figuring out who wins
  if(choice == 'r'){ //If player chooses rock
    cout << name << " chose Rock and ";
    
    switch(comp_choice){
    case 'R':
      cout << "Computer chose Rock." << endl;
      cout << "It's a TIE!" << endl;
      break;

    case 'P':
      cout << "Computer chose Paper." << endl;
      cout << "Computer wins!" << endl;
      break;

    case 'S':
      cout << "Computer chose Scissors." << endl;
      cout << name << " wins!" << endl;
      break; 
        
     default:
       cout << "Error.";
       return 0;
  }
    
  }
  else if(choice == 'p'){ //Player chose paper
    cout << name << " chose Paper and ";
    switch(comp_choice){
    case 'R':
      cout << "Computer chose Rock." << endl;
      cout << name << " wins!" << endl;
      break;

    case 'P':
      cout << "Computer chose Paper." << endl;
      cout << "Computer wins!" << endl;
      break;

    case 'S':
      cout << "Computer chose Scissors." << endl;
      cout << "Computer wins!" << endl;
      break; 
                
    default:
      cout << "Error.";
      return 0;
  }
    
  }
  else if(choice == 's'){ //Player chose scissors   
    cout << name << " chose Scissors and ";
    switch(comp_choice){
    case 'R':
      cout << "Computer chose Rock." << endl;
      cout << "Computer wins!" << endl;
      break;

    case 'P':
      cout << "Computer chose Paper." << endl;
      cout << name << " wins!" << endl;
      break;

    case 'S':
      cout << "Computer chose Scissors." << endl;
      cout << "It's a TIE!" << endl;
      break; 
         
    default:
      cout << "Error.";
      return 0;
  }
    
}
  else{
      cout << "Error.";
    return 0;
  }
  
  cout << endl << "Would you like to continue? (Y/N)" << endl;
  cin >> continue_;
  tolower(continue_);
  
  while(continue_!='y'&&continue_!='n'){
    cout << "Invalid input, try again." << endl;
    cout << "Would you like to continue? (Y/N)" << endl;
    cin >> continue_;
    tolower(continue_);
  }
  cout << endl;
}
  return 0;
}
