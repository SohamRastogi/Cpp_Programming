#include<iostream>
using namespace std;
int main()
{
   char alphabet ;
   cout<<"enter a alphabet (lower case) : ";
   cin>>alphabet;
     // to tell entered alphabet a vowel of consonant !!
     switch(alphabet){
        case 'a' :
          cout<<"vowel";
          break;
        case 'e' :
          cout<<"vowel";
          break;
        case 'i' :
          cout<<"vowel";
          break;
        case 'o' :
          cout<<"vowel";
          break;
        case 'u' :
          cout<<"vowel";
          break;
        default : 
          cout<<"consonant";

     }
     return 0 ;
}