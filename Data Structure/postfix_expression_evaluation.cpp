#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int main()
{
    stack<int> num;
    string expression ="3555/*-22^-";
    int i;
    for(i=0;i<expression.length();i++)
    {
        if(isdigit(expression[i]))
            num.push(expression[i]-'0');

    else
    {
        int b=num.top();
        num.pop();
        int a=num.top();
        num.pop();
        switch(expression[i])
        {
        case '+':
            num.push(a+b);
            break;
        case '-':
            num.push(a-b);
            break;
        case '*':
            num.push(a*b);
            break;
        case '/':
            num.push(a/b);
            break;
        case '^':
            num.push(pow(a,b));
            break;
        default:
            cout<<"Not Support";
        }
    }
}
cout<<num.top();
}

