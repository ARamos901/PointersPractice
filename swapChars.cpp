#include <iostream>
using namespace std;



void swapChars(string stringg){

int len=stringg.length();

char* left=&stringg[0];
char* right=&stringg[len-1];

while(left<=right){
    char temp;

    temp=*left;
    *left=*right;
    *right=temp;

    left++;
    right--;

}

cout<<stringg<<endl;
}

int main(){

    swapChars("Sixers");

}
