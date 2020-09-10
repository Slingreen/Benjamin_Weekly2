/**********************************************************************************************************
 *      Weekly assignment 2
 *
 *      Some tasks about loops and switches
 *
 *
 *  @file    Benjamin_Weekly2.CPP
 *  @author  Benjamin A.E. Darici
 */

#include <iostream>

 // Different functions used throughout the code
void Task1();
void Task2();
void Task3();
void Task4();
void Task5();
void Task6();
void writeMenu();
char Read_Command(const char* c);   //  This also works as task 7

// A main code with a switch to let the user choose which task to use, a sort of main menu
int main()
{
    char command;

    writeMenu();
    command = Read_Command("Command");

    while (command != 'Q')
    {
        std::cin.ignore(32767, '\n');
        switch (command)
        {
        case '1': Task1(); break;
        case '2': Task2(); break;
        case '3': Task3(); break;
        case '4': Task4(); break;
        case '5': Task5(); break;
        case '6': Task6(); break;
        default: writeMenu(); break;
        }
        command = Read_Command("Command");
    }
}


//  Counting from 1 to 100 using a for- or while-loop
void Task1() 
{
    char command = ' ';
    int i = 1;

    std::cout << "(W)hile loop or (F)or loop?\n";
    command = Read_Command("Command");

    switch (command) 
    {
    case 'W':
        while (i <= 100)
            std::cout << i++ << '\n'; break;
    case 'F': 
        for (i = 0; i <= 100; i++)
            std::cout << i <<'\n';
        break;
    default: std::cout << "Invalid input\n"; break;
    }
}


//  Counting down from 100 to 1 using a for-loop
void Task2()
{
    for (int i = 100; i > 0; i--)
        std::cout << i << '\n';
}


//  Counting from 5 to 50 using a while-loop
void Task3()
{
    int i = 0;
    while (i < 50) 
    {
        i += 5;
        std::cout << i <<'\n';
    }  
}


//  Counting from 5 to 50 using a for-loop
void Task4()
{
    for (int i = 5; i <= 50; i+=5)
        std::cout << i << '\n';
}


//  Couting from 5 to 50 using a do-while-loop
void Task5()
{
    int i = 5;
    do
    {
        std::cout << i << '\n';
        i += 5;
    } while (i <= 50);
}


//  A switch that asks the user what grade they want and answers apporpriatly
void Task6()
{
    char command = ' ';
    command = Read_Command("What grade do you want in programming1?  ");
    switch (command)
    {
    case 'A': std::cout << "Outstanding\n"; break;
    case 'B': std::cout << "Very Good\n"; break;
    case 'C': std::cout << "Good\n"; break;
    case 'D': std::cout << "Some flaws\n"; break;
    case 'E': std::cout << "Not very good...\n"; break;
    case 'F': std::cout << "Fail\n"; break;
    default: std::cout << "That's not a grade!\n"; break;
    }
}

// A tiny function just to read input commands
//      (techincally doubles as task 7)
char Read_Command(const char* c)
{
    char command;
    std::cout << c << ":  ";
    std::cin >> command;
    return(toupper(command));
}

// A tiny function to write out the choices the switch provides in the main function
void writeMenu()
{
    std::cout << "The following commands are available: \n"
        << "\t 1    Runs task 1\n"
        << "\t 2    Runs task 2\n"
        << "\t 3    Runs task 3\n"
        << "\t 4    Runs task 4\n"
        << "\t 5    Runs task 5\n"
        << "\t 6    Runs task 6(technically 7 as well)\n"
        << "\t Q    Quits program\n";
}