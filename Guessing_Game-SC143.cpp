#include <iostream>

using namespace std;
//START OF FUNCTION
void instruction(){  //Instruction Function
cout<<"          " ;cout<<"THE INSTRUCTION FOR THE GAME"<<endl;
cout<<"          " ;cout<<"-------------!!--------------"<<endl;
cout<<"                                                ";cout<<" 1 -> " <<"There Will Be 2 Game ."<<endl;
cout<<"                                                ";cout<<" 2 -> " <<"You Can Choice Any Game ." << endl;
cout<<"                                                ";cout<<" 3 -> " <<"It Is Related On Mind Game ."<<endl;
cout<<"                                                ";cout<<" 1 -> " <<"It Increases Your Memory Power  ."<<endl;


}

//END OF FUNCTIONS

                                                   //CLASS FOR GUESSING NUMBER
class Guessing_Number{
public :

    int num = 143;           //THE GIVEN NUMBER
    int Guess ; //USER HAS TO GUESS
    void welcom (){
cout<< "                                                 "; cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;
cout<<endl;
cout<< "                                                 "; cout<<" THANKYOU FOR SELECTING GUESSING NUMBER GAME "<<endl;
cout<<endl;
cout<< "                                                 "; cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;
 cout<<endl;
 cout<<endl;
 cout<<endl;
cout<<"              " ;cout<<"THE INSTRUCTION FOR THE GAME"<<endl;
cout<<"              " ;cout<<"-------------!!--------------"<<endl;
cout<<"                                                ";cout<<" 1 -> " <<" There Will Be 3 Chance For You ."<<endl;
cout<<"                                                ";cout<<" 2 -> " <<" You Have To Guess The Correct Number  ."<<endl;
cout<<"                                                ";cout<<" 3 -> " <<" If You Fail To Guess The Number You Lose The Game ."<<endl;
cout<<"                                                ";cout<<" 4 -> " <<" if You Guess Then  You Will Be Getting Some Rewards ."<<endl;

 }
                                                  //END OF WELCOME MEMBER FUNCTION

void accept_values() {
 //ACCEPTING THE VALUE FROM USER
 cout<<endl;
 cout<<endl;
 cout<<endl;
 cout<<"           "; cout<<" @@ " ;      cout<<" Enter Your Guess "<<endl;
 cout<<endl;
 cout<<endl;

         //INPUTING THE GUESS
     for(int i = 0 ;i<3 ;i++){
 cout<<"               "; cout<<" ** " ;       cin>>Guess;
 cout<<endl;
       if(Guess == num){
 cout<<"                ";          cout<<" !!!!!!!!! Congratulations You Won The Match. !!!!!!!!! "<<endl;
 cout<<"                ";          cout<<endl;
 cout<<"                ";          cout<<" $$$$$$$$$ The Reward Will Be Sent To Your Home. $$$$$$$$$ "<<endl;
         exit(0);
       } else {
 cout<<"                ";         cout<<"Try Again You Can Do It"<<endl;
       }
       if(i ==2 && Guess!= num){
  cout<<"                ";         cout<<"You Lose The Match Better Try Next Time "<<endl;
       }

     }

 }


};
      //END OF GUESSING NUMBER CLASS

                                      //START OF GUESSIN COLOR

  class Guessing_Color{                               //CLASS FOR GUESSING NUMBER
public :

  string Color = "Blue";          //THE GIVEN COLOR
  string Guess_Color ; //USER HAS TO GUESS
    void inauguration(){
cout<< "                                                 "; cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;
cout<<endl;
cout<< "                                                 "; cout<<" THANKYOU FOR SELECTING GUESSING COLOR GAME "<<endl;
cout<<endl;
cout<< "                                                 "; cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;
 cout<<endl;
 cout<<endl;
 cout<<endl;
cout<<"              " ;cout<<"THE INSTRUCTION FOR THE GAME"<<endl;
cout<<"              " ;cout<<"-------------!!--------------"<<endl;
cout<<"                                                ";cout<<" 1 -> " <<" There Will Be 3 Chance For You ."<<endl;
cout<<"                                                ";cout<<" 2 -> " <<" You Have To Guess The Correct Color ."<<endl;
cout<<"                                                ";cout<<" 3 -> " <<" Even The Upper and Lower Case Matters ."<<endl;
cout<<"                                                ";cout<<" 4 -> " <<" If You Fail To Guess The Color You Lose The Game ."<<endl;
cout<<"                                                ";cout<<" 5 -> " <<" if You Guess Then  You Will Be Getting Some Rewards ."<<endl;

 }

                                                        //END OF WELCOME MEMBER FUNCTION

void input_values() {
 //ACCEPTING THE VALUE FROM USER
 cout<<endl;
 cout<<endl;
 cout<<endl;
 cout<<"           "; cout<<" @@ " ;      cout<<" Enter Your Guess "<<endl;
 cout<<endl;
 cout<<endl;

         //INPUTING THE GUESS
     for(int i = 0 ;i<3 ;i++){
 cout<<"               "; cout<<" ** " ;       cin>>Guess_Color;
 cout<<endl;
       if(Guess_Color == Color){
 cout<<"                ";          cout<<" !!!!!!!!! Congratulations You Won The Match. !!!!!!!!! "<<endl;
 cout<<"                ";          cout<<endl;
 cout<<"                ";          cout<<" $$$$$$$$$ The Reward Will Be Sent To Your Home. $$$$$$$$$ "<<endl;
         exit(0);
       } else {
 cout<<"                ";         cout<<"Try Again You Can Do It"<<endl;
       }
       if(i ==2 && Guess_Color!= Color){
  cout<<"                ";         cout<<"You Lose The Match Better Try Next Time "<<endl;
       }
     }

 }



};

//START OF MAIN FUNCTION

int main()
{
cout<<"                                        ";    cout<<" #*#*#*#*#*#*#*#*#*#*#*#*#* " <<endl;
cout<<"                                        ";     cout<<endl;
cout<<"                                        ";     cout<<" WELCOME TO DARK GAMMING " <<endl;
cout<<"                                        ";     cout<<endl;
cout<<"                                        ";     cout<<" #*#*#*#*#*#*#*#*#*#*#*#*#* " <<endl;
cout<<endl;
cout<<endl;
cout<<endl;

/* CALLING THR INSTRUCTION FUNCTION */       instruction() ;      //FUNCTION FOR INSTRCTION

cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                   ";cout<<"%%%%%%%%%%%%%%%%%%%%"<<endl;
cout<<endl;
cout<<"                   "; cout<<"THERE ARE TWO GAME "<<endl;
cout<<endl;
cout<<"                   ";cout<<"%%%%%%%%%%%%%%%%%%%%"<<endl;
cout<<endl;
cout<<endl;
 cout<< " 1 ->" <<"Guessing The Number "<<endl;
 cout<<endl;
 cout<< " 2 ->" <<"Guessing The Color "<<endl;
 cout<<endl;
 cout<<endl;
 int Choice ;            //THE VARIABLE FOR USER CHOICE OF GAME
cout<<" Enter  Your Choice " <<endl;
cin>>Choice ;
switch(Choice){
case 1 : {


Guessing_Number object_for_Guessing_Number;       //OBJECT FOR GUSSING NUMBER
 object_for_Guessing_Number.welcom();
 object_for_Guessing_Number.accept_values();    //THE TWO MEMBER OF THE CLASS ARE CALLED BY USING OBJECTS


}
 break;


 case 2 :{
Guessing_Color  object_for_Guessing_Color;       //OBJECT FOR GUSSING  COLOR
object_for_Guessing_Color.inauguration();
 object_for_Guessing_Color.input_values();    //THE TWO MEMBER OF THE CLASS ARE CALLED BY USING OBJECTS

 }
break;

default : cout<<"WRONG CHOICE PLEASE SELECT WITH IN THE GIVEN OPTION "<<endl;   //DEFAULT IF THE INPUT IS WRONG

}



return 0;
}
