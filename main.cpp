#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

char u[15],ps[11],r1=201,r2=200,r3=188,r4=187,r5=205,r6=186,r7=220,r8=202,r9=204,r10=203,r11=206,r12=185;
void home(){
cout<<"\n\n\t\t\t\t\t\t\t" << r1;

for(int i = 0; i < 20; i++){
    cout << r5;
}
cout <<r4 <<endl;;
cout << "\t\t\t\t\t\t\t" <<r6 <<" HOME PAGE \t     "<< r6<<endl;
cout <<"\t\t\t\t\t\t\t"<<r2;
for(int i=0;i < 20;i++){
    cout<<r5;
}
cout<<r3<<endl;

}

void welcome(){

for (int i = 0; i < 120; i++)
{
    cout << r7;
}
cout << endl;

cout<<"\n\n\t" << r1;

for(int i = 0; i < 20; i++){
    cout << r5;
}
cout <<r4 <<endl;;
cout << "\t" <<r6 <<" Welcome page \t     "<< r6<<endl;
cout <<"\t"<<r2;
for(int i=0;i < 20;i++){
    cout<<r5;
}
cout<<r3<<endl;

cout << "\t\t\t\t "<<"       WELCOME TO THE UNIVERSITY MANAGEMENT SYSTEM \n\n"<<endl;
cout << "\t\t\t\t " <<   "  UNIVERSITY OF STRANGE IN THE  WORLD OF THE MATRIX CORE\n\n"<<endl;
cout << "\t\t\t\t" <<"         TECHNOLOGY AND SCIENCE AND ROBOTICS \n\n"<<endl;




for (int i = 0; i < 120; i++)
{
    cout << r7;
}
cout << endl;
home();

int choice;
cout << "\t\t\t make your choice\n\n"<<endl;
cout << "\t\t 1.)LOGIN INTO THE student SYSTEM"<<endl;
cout << "\t\t 2.)Registration"<<endl;
cout << "\t\t 3.)Administration"<<endl;
cout << "\t\t 4.)Finance"<<endl;
cout << "\t\t 5.)exit"<<endl;

cout <<"Enter your choice: ";
cin >> choice;


}
void studentSystem(){
   // ofstream student("student.txt");




}
void Admin(){

//ofstream AdminData("admin,txt");


}

void finance(){

//ofstream fin("finance.txt");




}




int main(){
char x = 221,y = 222;
cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t"<< x <<"WELCOME TO THE UNIVERSITY MANAGEMENT SYSTEM \a"<<y << "\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;

home();
welcome();
//getch();

char ch;
cout << "press any key to continue....."<<endl;
ch = getch();
cout <<endl;





cout << r1<<"  \n"<<endl;
cout << r2<<" \n "<<endl;
cout << r3<<"  \n"<<endl;
cout << r4<<" \n "<<endl;
cout << r5<<"  \n"<<endl;
cout << r6<<"  \n"<<endl;
cout << r7<<"  \n"<<endl;
cout << r8<<"  \n"<<endl;
cout << r9<<"  \n"<<endl;
cout << r10<<"  \n"<<endl;
cout << r11<<"  \n"<<endl;
cout << r12<<"  \n"<<endl;

return 0;
}
