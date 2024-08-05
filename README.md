# EXPERIMENT- 5
## AIM- To study and implement C++ decision making statements
## THEORY-
Decision-making in C++ helps to write decision-driven statements and execute a particular set of code based on certain conditions.
C++ has different types of decision-making statements like:
if
else if
else
switch
default
### If Statement
The if statement is the simplest decision-making statement. It is used to decide whether a certain statement or block of statements will be executed based on a condition.
#### Syntax:
if (condition) {
    // Code to be executed if the condition is true
}
### Else If Statement
The else if statement allows for multiple conditions to be checked in sequence. If the first condition is false, the next else if condition is checked, and so on. If none of the conditions are true, the else block is executed.
#### Syntax:
if (condition_a) {
    // Code to be executed if condition_a is true
} else if (condition_b) {
    // Code to be executed if condition_a is false and condition_b is true
} else {
    // Code to be executed if both condition_a and condition_b are false
}
### Switch and Default Statements
The switch statement is an optimized version of multiple else if statements. It provides better readability, can be typed faster, is easier to debug, and is less prone to errors compared to multiple else if statements. The default statement acts like an else statement, executing code if none of the case values match.
#### Syntax:
switch (expression) {
    case value_1:
        // Statement for value_1
        break;
    case value_2:
        // Statement for value_2
        break;
    // More cases as needed
    default:
        // Default statement if no case matches
        break;
}
## CODES-
~~~
#include <iostream>
using namespace std;

int main() {
    int num;

    
    cout << "Enter a number: ";
    cin >> num;

    
    if (num < 0) {
        cout << "The number is negative." << endl;
    } else if (num == 0) {
        cout << "The number is zero." << endl;
    } else if (num > 0 && num <= 10) {
        cout << "The number is between 1 and 10." << endl;
    } else {
        cout << "The number is greater than 10." << endl;
    }

    // Using switch statement
    switch (num) {
        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        case 3:
            cout << "You entered three." << endl;
            break;
        case 4:
            cout << "You entered four." << endl;
            break;
        case 5:
            cout << "You entered five." << endl;
            break;
        default:
            cout << "You entered a number outside the range of 1-5." << endl;
            break;
    }

    return 0;
}
~~~
## CONCLUSION-
We learnt how to use decision making statements like if, else if, switch, default in C++ programming language.

# EXPERIMENT-6
## AIM- To study and implement C++ decision making statements Loops
## THEORY- 
Decision-making loops in C++ are used to execute a block of code repeatedly based on a condition. The primary loops are:
### 1. For Loop
The for loop is used when you know in advance how many times you want the code to execute. It consists of three parts: initialization, condition, and iteration.
#### Syntax:
for (initialization; condition; iteration) {
    // Code to be executed repeatedly
}
### 2. While Loop
The while loop is used when you want to execute a block of code as long as a condition remains true. It checks the condition before executing the loop body.
#### Syntax:
while (condition) {
    // Code to be executed repeatedly
}
### 3. Do-While Loop
The do-while loop is similar to the while loop, but it ensures that the code block is executed at least once before checking the condition. It checks the condition after executing the loop body.
#### Syntax:
do {
    // Code to be executed at least once and then repeatedly
} while (condition);
These loops are essential for performing repetitive tasks in programming. The choice of loop depends on the requirements of your task and whether the number of iterations is predetermined or not.
## CODES-
~~~
//SUNIDHI CHOUBEY 23070123137
#include <iostream>
using namespace std;

int main() {
    int s[100][100];
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            s[i][j] = i * 100 + j;
        }
    }

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }


    int x = 0;
    cout << "While loop" << endl;
    while (x < 10) {
        cout << x << endl;
        x++;
    }

    int y = 0;
    cout << "Do-while loop" << endl;
    do {
        y++;
        cout << y << endl;
    } while (y < 4);


    int a = 0, b = 0;
    cout << "Nested for loop" << endl;
    for (int i = 0; i < 4; i++) {
        a++;
        for (int j = 0; j < 4; j++) {
            b++;
            cout << s[a][b] << " ";
        }
        cout << endl;
    }

    int k=0,l=0;
    while(k<5)
    {
        while(l<5)
        {
            k++;
            l++;
            cout<<k<<endl;
            cout<<l<<endl;
        }
    }

    //pattern

    for(int i = 0;i<=5;i++)
    {
        for(int j = 1;j<= 5-i;j++)
        {
            cout<<" ";
        }
        for(int k = 1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

        // for inside while

    int q = 0;

    while(q<5)
        {
            for(int i = 0;i<5;i++)
                {
                    cout<<"Hello World"<<endl; 
                }
                q++;
        }
        
    for(int i =0;i<10;i++)
    {
        while(i<5)
        {
            cout<<"World hello"<<endl;
            i++;  
        }
    }    
    return 0;
}
~~~
## CONCLUSION-
We learnt how to implement different typez of decision making statement loops like for, while and do while in C++ programming language.
