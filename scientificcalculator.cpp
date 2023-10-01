#include<iostream>
#include<math.h>
using namespace std;

void addition(){
    int num[10];
    int size;
    cout<<"Enter how many number you want to add: "<<endl;
    cin>>size;
    cout<<"Enter the number: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter the number "<<i+1<<" : "<<endl;
        cin>>num[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+num[i];
    }
    cout<<"Adiition is: "<<sum<<endl;
    return ;
}

void subtraction(){
    int num1,num2;
    cout<<"For substraction: "<<endl;
    cout<<"Enter the number 1: "<<endl;
    cin>>num1;
    cout<<"Enter the number 2: "<<endl;
    cin>>num2;
    cout<<"subtraction of two number: "<<num1-num2<<endl;
    return ;
}

void multiplication(){
    int num[10];
    int size;
    cout<<"Enter how many number you want to multiply: "<<endl;
    cin>>size;
    cout<<"Enter the number: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter the number "<<i+1<<" : "<<endl;
        cin>>num[i];
    }
    int mul=1;
    for(int i=0;i<size;i++){
        mul=mul*num[i];
    }
    cout<<"Multiplication is: "<<mul<<endl;
    return ;
}

void division(){
    float num1,num2;
    cout<<"For division: "<<endl;
    cout<<"Enter the number 1: "<<endl;
    cin>>num1;
    cout<<"Enter the number 2: "<<endl;
    cin>>num2;
    if(num2==0){
        cout<<"Invalid Input"<<endl;
        return;
    }
    cout<<"division of two number: "<<num1/num2<<endl;
    return ;
}

void power(){
    int a,b;
    cout<<"Enter the number to calculate its power: "<<endl;
    cin>>a;
    cout<<"Enter the power of that number: "<<endl;
    cin>>b;
    int power=pow(a,b);
    cout<<"Power is: "<<power<<endl;
    return ;
}

void square(){
    int num;
    cout<<"Enter the number to be square: "<<endl;
    cin>>num;
    cout<<"Square is: "<<num*num<<endl;
    return ;
}

void squareroot(){
    int num;
    cout<<"Enter the number to find the square root: "<<endl;
    cin>>num;
    float s=sqrt(num);
    cout<<"Square root is: "<<s<<endl;
    return ;
}

void cubic(){
    int num;
    cout<<"Enter the number on which cubic performed "<<endl;
    cin>>num;
    cout<<"Cubic is: "<<num*num*num<<endl;
    return ;
}

void cubicroot(){
    int num;
    cout<<"Enter the number to find the cubic root: "<<endl;
    cin>>num;
    double c=cbrt(num);
    cout<<"Cubic root is: "<<c<<endl;
    return ;
}

void sin(){
    int num;
    cout<<"Enter the number to find the Sin: "<<endl;
    cin>>num;
    double s=sin(num);
    cout<<"Sine is: "<<s<<endl;
    return ;
}

void cos(){
    int num;
    cout<<"Enter the number to find the Cos: "<<endl;
    cin>>num;
    double c=cos(num);
    cout<<"Cos is: "<<c<<endl;
    return ;
}

void tan(){
    int num;
    cout<<"Enter the number to find the Tan: "<<endl;
    cin>>num;
    double t=tan(num);
    cout<<"tan is: "<<t<<endl;
    return ;
}

int main(){
   int num;
   do{
    cout<<endl;
    cout<<"                   SCIENTIFIC CALCULATOR                               "<<endl;
    cout<<"Enter the opeartion do you want to perform "<<endl;
    cout<<"Enter 1 for addition "<<endl;
    cout<<"Enter 2 for subtraction "<<endl;
    cout<<"Enter 3 for multiplication "<<endl;
    cout<<"Enter 4 for division "<<endl;
    cout<<"Enter 5 for power "<<endl;
    cout<<"Enter 6 for square "<<endl;
    cout<<"Enter 7 for square root "<<endl;
    cout<<"Enter 8 for cubic "<<endl;
    cout<<"Enter 9 for cubic root "<<endl;
    cout<<"Enter 10 for Sin "<<endl;
    cout<<"Enter 11 for Cos "<<endl;
    cout<<"Enter 12 for tan "<<endl;
    cout<<"Enter 13 for exit "<<endl;
    cout<<"Enter the number : ";
    cout<<endl;
    cin>>num;

    if(num==13){
        cout<<"           THANK YOU                 "<<endl<<endl;
        break;
    }

    switch(num){
        case 1:addition();
            break;
        case 2:subtraction();
            break;
        case 3:multiplication();
            break;
        case 4:division();
            break;
        case 5:power();
            break;    
        case 6:square();
            break;
        case 7:squareroot();
            break;
        case 8:cubic();
            break; 
        case 9:cubicroot();
            break; 
        case 10:sin();
            break;
        case 11:cos();
            break; 
        case 12:tan();
            break;                        
        case 13: break;
    }

    int cont;
    cout<<endl;
    cout<<"Do yow want to continue operation "<<endl;
    cout<<"Enter 1 for YES "<<endl;
    cout<<"Enter 2 for NO "<<endl;
    cout<<"Enter the number "<<endl;
    cin>>cont;

    if(cont==2){
        cout<<"           THANK YOU                 "<<endl<<endl;
        break;
    }
    
   }while(1);

}