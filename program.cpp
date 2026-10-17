#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin >> marks;
    
 if(marks>90){
    cout<<"Grade A";
 }
 else if(marks>70){
    cout<<"Grade B";   
 }
 else if(marks<60){
    cout<<"grade C";
 }
 return 0;
}