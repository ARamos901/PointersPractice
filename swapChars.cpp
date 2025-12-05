#include <iostream>
using namespace std;

string swapChars(string& stringg){
//finds how long the string is to get the last char of the string
int len=stringg.length();

char* left=&stringg[0];
char* right=&stringg[len-1];

while(left<=right){
    char temp;

    //swaps chars
    temp=*left;
    *left=*right;
    *right=temp;
    //displays the addresses being swapped
    cout<<(void*)right<<endl;
    cout<<(void*)left<<endl;
    // increments up and down one (left and right)
    left++;
    right--;

}

return stringg;
}

int main(){

    string word="Fries";
    cout<<"Word before reverse: "<<word<<endl;

    cout<<"reversing and showing the memeory being swapped..."<<endl;
    string res=swapChars(word);
    cout<<"\nPost reversal: "<<res<<endl;

}
