#include <iostream>
#include <format>

using namespace std;


void swapInts(int* a,int* b){
    cout<<"\nBefore the swap,number "<<*a<<" is stored at address "<< a << endl;
    cout<<"Before the swap,number "<<*b<<" is stored at address "<<b<<endl;
    
    
    //swaps variables
    int temp = *a;
    *a = *b;
    *b = temp;

    cout<<"\nAfter the swap,number "<<*a<<" is stored at "<< a;
    cout<<"\nAfter the swap,number "<<*b<<" is stored at "<< b<<endl;


}


int main(){
int num1;
int num2;

cout<<"\nPlease enter the first number: ";
//error checker
while (!(cin>>num1)){
    cout<<"Error! Please enter a  number: ";
    cin.clear();
    cin.ignore(1000,'\n');
}


cout<<"\nPlease enter the second number: ";
//error checker
while (!(cin>>num2)){
    cout<<"Error ! Please enter a  number: ";
    cin.clear();
    cin.ignore(1000,'\n');
}




swapInts(&num1,&num2);

return 0;
}

