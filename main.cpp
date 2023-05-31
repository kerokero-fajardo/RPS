#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string name;
  string choice = "none";
  string comp_choice;
  int comp;
  char continue_ = 'y';

  //Greeting
  cout << "Welcome to Rock Paper Scissors" << endl << endl;
  cout << "What's your name?" << endl;

  //Ask for name
  getline(cin, name);
  cout << "Hello, " << name << "!" << endl;

  //For continue loop
while(continue_ == 'y'){  
  
  while(choice!="rock" && choice!="paper" && choice!="scissors"){ //Ensures only valid input
  //Player chooses rock/paper/scissors
  cout << "Choose rock, paper, or scissors" << endl;
  cin.ignore();
  getline(cin, choice);
  tolower(choice);
    if(choice!="rock" && choice!="paper" && choice!="scissors"){
    cout << "Invalid input, try again." << endl;
    }
  }

  //Computer chooses rock/paper/scissors
  srand(time(NULL));
  comp = rand()%3;
  
  switch(comp){
    case 0: //Outputs Rock
      comp_choice = "rock";
      break;

    case 1: //Outputs Paper
      comp_choice = "paper";
      break;

    case 2: //Outputs Scissors
      comp_choice = "scissors";
      break; 
  }

  //Figuring out who wins
  if(choice == "rock"){ //If player chooses rock
    cout << name << " chose Rock and ";
    
    switch(comp_choice){
    case "rock":
      cout << "Computer chose Rock." << endl;
      cout << "It's a TIE!" << endl;
      break;

    case "paper":
      cout << "Computer chose Paper." << endl;
      cout << "Computer wins!" << endl;
      break;

    case "scissors":
      cout << "Computer chose Scissors." << endl;
      cout << name << " wins!" << endl;
      break; 
        
     default:
       cout << "Error.";
       return 0;
  }
    
  }
  else if(choice == "paper"){ //Player chose paper
    cout << name << " chose Paper and ";
    switch(comp_choice){
    case "rock":
      cout << "Computer chose Rock." << endl;
      cout << name << " wins!" << endl;
      break;

    case "paper":
      cout << "Computer chose Paper." << endl;
      cout << "Computer wins!" << endl;
      break;

    case "scissors":
      cout << "Computer chose Scissors." << endl;
      cout << "Computer wins!" << endl;
      break; 
                
    default:
      cout << "Error.";
      return 0;
  }
    
  }
  else if(choice == "scissors"){ //Player chose scissors   
    cout << name << " chose Scissors and ";
    switch(comp_choice){
    case "rock":
      cout << "Computer chose Rock." << endl;
      cout << "Computer wins!" << endl;
      break;

    case "paper":
      cout << "Computer chose Paper." << endl;
      cout << name << " wins!" << endl;
      break;

    case "scissors":
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
  
  cout << "Would you like to continue? (Y/N)" << endl;
  cin >> continue_;
  tolower(continue_);
  
  while(continue_!='y'&&continue_!='n'){
    cout << "Invalid input, try again." << endl;
    cout << "Would you like to continue? (Y/N)" << endl;
    cin >> continue_;
    tolower(continue_);
  }
  
}
  return 0;
}
