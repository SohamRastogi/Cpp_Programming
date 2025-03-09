#include<iostream>
using namespace std ;
// void fun(int arr[]){
//     arr[0]=100;
//     return ;
// }
void fun(int arr[]){
    int a=1;
    int b = 4;
    while(a<b){
        if(arr[a]%2==1 && arr[b]==0){
            int temp;
            temp = arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
        }
        else if(arr[a]==0) a++;
        else if(arr[b]==1) b--;
    }
    return ;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"original array : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    fun(arr); // arrays pass by reference 
    cout<<endl;
    // int a=1;
    // int b = 4;
    // while(a<b){
    //     if(arr[a]%2==1 && arr[b]==0){
    //         int temp;
    //         temp = arr[a];
    //         arr[a]=arr[b];
    //         arr[b]=temp;
    //     }
    //     else if(arr[a]==0) a++;
    //     else if(arr[b]==1) b--;
    // }
    cout<<"sorted array : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;

//     cout<<"sorted array : "<<endl;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0 ;
// }
// void fun(int arr[]){
//     int a=1;
//     int b = 4;
//     while(a<b){
//         if(arr[a]%2==1 && arr[b]==0){
//             int temp;
//             temp = arr[a];
//             arr[a]=arr[b];
//             arr[b]=temp;
//         }
//         else if(arr[a]==0) a++;
//         else if(arr[b]==1) b--;
//     }
//     return ;
}
//  for reference =>
// {
//     int arr[5]={1,2,3,4,5};
//     fun(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0 ;
// }
