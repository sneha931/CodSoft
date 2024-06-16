#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num=(rand()%100)+1;
  cout<<" *** NUMBER GUESSING GAME ****"<<endl;
  do{
      cout<<"Enter a guess number :";
      cin>>guess;
      tries++;
      if(guess>num){
          cout<<"Too high\n";
      }
      else if(guess < num){
          cout<<"Too low\n";
      }
      else{
          cout<<"CORRECT! No.of tries: "<<tries<<endl;
      }
  }while(guess!=num);
  cout<<"*** GAME COMPLETED! ***";
    return 0;
}
