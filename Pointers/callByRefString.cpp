#include<iostream>
using namespace std;
void findFirst_Last(string s ,char ch, int* first, int* last){
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            *first = i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='a'){
            *last = i;
            break;
        }
    }
    return ;
}
int main()
{
    string s = "aaabac";
    char ch = 'a';
    int first = -1;
    int last = -1;
    findFirst_Last(s,ch,&first,&last);
    cout<<first<<endl<<last;
    return 0 ;
}