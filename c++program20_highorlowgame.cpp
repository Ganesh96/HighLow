#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

const int totchan=7;
int main(){
int number;
int guess;
int chances=0,score=0,chanscor;
char ans;
do{
  clrscr();
  chances=score=0;
  cout<<"\n\t\t\tWelcome to my gaming environment. ";
  cout<<"\n\t\t\tWelcome to High/Low game. ";
  cout<<"\n\t\t\tI will pick a random number from 0 to 100. ";
  cout<<"\n\t\t\tYou must try to guess that number. ";
  randomize();
  number=(int)(rand()%100);
  chanscor=100/totchan;
  
       do{
	      cout<<"\n\tWhat is your guess?(range 0 to 100)";
		  cin>>guess;
		  
		  if((guess<0)||(guess >100)){
		          cout<<"Sorry ,but your guess"<<guess<<"must be from 0 to 100";
			  }
		 else if(guess>number){
		          cout<<guess<<"\ais low.Try a higher number\a";
				   }
	     else if(guess<number){
		          cout<<guess<<"\ais high.Try a lower number\a";
				  }
	       else{
		       cout<<guess<<"is correct.\a\a\aCongratulation!\a\a\a";
			   score=chansor*(totchan-chances);
			   cout<<"\n\tYour score is"<<score<<endl;
			   break;
			   }
			   
			   chances++;
			   if(guess!=number)
			       cout<<"\n\nNow you have"<<totchan-chances<<"chances left."<<endl;
			   if(chances==totchan)
			   {
			   cout<<"\n\nOnly"<<totchan<<"chances are allowed.Better luck next time";
			   cout<<"\n The actual number was"<<number<<endl;
			   break;
			   }
			   
		  } while(guess!=number);
		  cout<<"\n\nThank you for playing High/Low!";
		  cout<<"Want to play it again?(Y/N)....";
		  cin>>ans;
  }          while(ans=="Y" || ans=="y");
            
 
}
/* 
#include <iostream>
using namespace std;

const int MAX_VALUE = 100;
const int MIN_VALUE = 1;

int guess;
int high = MAX_VALUE;
int low = MIN_VALUE;

char choice;

int main(){


cout<<"Think about a number between "<<MIN_VALUE<<" and "<<MAX_VALUE<<". \n\n";
guess = ( high-low ) / 2;

while((high-low)!=1){
    cout<<"Is your number less than or equal to "<<guess<<"? \nEnter y or n. \n\n";
    cin>>choice;

    if(choice=='y' || choice=='Y') {
        high = guess;
        guess -= ( high - low ) / 2;
    }
    else if(choice=='n' || choice=='N') {
        low = guess;
        guess += (high - low ) /2;
    }
    else cout<<"Incorrect choice."<<endl;


}
cout<<"Your number is: "<<high<<".\n";

system("pause");
return 0;
} */


