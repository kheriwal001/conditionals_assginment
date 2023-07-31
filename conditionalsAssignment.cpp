/*#include<bits/stdc++.h>
using namespace std;
Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not.

int main(){
    int a , b;
    cout<<"enter length and breadth"<<endl;
    cin>>a>>b;
    if(a==b){
        cout<<"it is a square"<<endl;
    }
    else{
        cout<<"it is a rectangle"<<endl;
    }
    return 0;
}


Q2 - Write a program to print absolute value of a number entered by the user.

int main(){
    int a;
    cout<<"enter a"<<endl;
    cin>>a;
    if(a < 0){
       a = a*(-1);
    }
    cout<<"absolute value of a is "<<a<<endl;
    return 0;
}


Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.

int main(){
    int cp , sp;
    cout<<"enter cost price"<<endl;
    cin>>cp;
    cout<<"enter selling price"<<endl;
    cin>>sp;
    if(cp > sp){
        cout<<"loss "<<cp - sp<<endl;
    }
    else if(cp < sp){
        cout<<"profit "<<sp - cp<<endl;
    }
    else{
        cout<<"no profit no loss"<<sp - cp<<endl;
    }
    
    return 0;
}


Q4- Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped.

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0)
    cout << "You entered a positive integer: " << number << endl;
    else
    cout << "The number is negative and skipped ";
    return 0;
}


Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.

int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    char c;
    cout<<"enter operation"<<endl;
    cin>>c;
    switch(c){
        case '+':
            cout<<"sum"<<a+b<<endl;
            break;
        case '-':
            cout<<"subtract"<<a-b<<endl;
            break;
        case '*':
            cout<<"multiply"<<a*b<<endl;
            break;
        case '/':
            cout<<"division"<<a/b;
            break;
        default:
            cout<<"can't inertpret"<<endl; 
            break;  
    }
    return 0;
}



Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :

int main(){
    int n;
    cout<<"ENTER YOUR MARKS(+ve num)"<<endl;
    cin>>n;
    if(n>=90 && n<=100){
        cout<<"your grade is A+"<<endl;
    }
    else if(n>=80 && n<90){
        cout<<"your grade is A"<<endl;
    }
    else if(n>=70 && n<80){
        cout<<"your grade is B+"<<endl;
    }
    else if(n>=60 && n<70){
        cout<<"your grade is B"<<endl;
    }
    else if(n>=50 && n<60){
        cout<<"your grade is C"<<endl;
    }
    else if(n>=40 && n<50){
        cout<<"your grade is D"<<endl;
    }
    else if(n>=30 && n<40){
        cout<<"your grade is E"<<endl;
    }
    else{
        cout<<"your grade is F"<<endl;
    }
}
*/