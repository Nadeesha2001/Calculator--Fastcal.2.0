#include<iostream>
#include<string>
#include<fstream>
#include<windows.h> // for change output text colour 

using namespace std;

// start add ASCII Art 
void asciiprint(string fileName)
 {
    string line = "";
    ifstream infile;
    infile.open("art.txt");
    if(infile.is_open())
    {
        while(getline(infile,line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "file failed load" << endl;
        cout << "No nuck displayed" << endl;
    }
    infile.close();
 }
//End ASCII Art

void Addition(){

    float a , b , c;
    cout << "Enter First Value : " << endl;
    cin >> a;
    cout << "Enter Second Value : " << endl;
    cin >> b;
    c = a + b;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Your Result is : " << c << endl; 
}

void Subtraction() {

    float a , b , c;
    cout << "Enter First Value : " << endl;
    cin >> a;
    cout << "Enter Second Value : " << endl;
    cin >> b;
    c = a - b;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Your Result is : " << c << endl;
}

void Multiplication() {

    float a , b , c;
    cout << "Enter First Value : " << endl;
    cin >> a;
    cout << "Enter Second Value : " << endl;
    cin >> b;
    c = a * b;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Your Result is : " << c << endl;
}

void Division() {

    float a , b , c;
    cout << "Enter First Value : " << endl;
    cin >> a;
    cout << "Enter Second Value : " << endl;
    cin >> b;
    c = a / b;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Your Result is : " << c << endl;
}  

void Modulo_Operation() {

    int a , b , c;
    cout << "Enter First Value : " << endl;
    cin >> a;
    cout << "Enter Second Value : " << endl;
    cin >> b;
    c = a%b;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Your Result is : " << c << endl;    
}

void  Logical_AND() {

    float a , b;
    cout << "Enter First Value : " << endl;
    cin >> a;
    cout << "Enter Second Value : " << endl;
    cin >> b;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Your Result is : " << (a && b) << endl;
}

void Logical_OR() {

    float a , b;
    cout << "Enter First Value : " << endl;
    cin >> a;
    cout << "Enter Second Value : " << endl;
    cin >> b;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Your Result is : " << (a || b) << endl;
}

void Logical_NOT() {

    float a , b;
    cout << "Enter Value : " << endl;
    cin >> a;
    //cout << "Enter Second Value : " << endl;
    //cin >> b;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Your Result is : " << (!a) << endl;
}

 int main()
 {
    string fileName = "art.txt";
    asciiprint(fileName);
    
    //float a , b , c;
    int num;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //unit of windows.h library
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Welcome to C++ Calculator FastCal.2.0" << endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << " 1. Addition---------(+) " << endl;
    cout << " 2. Subtraction------(-) " << endl;
    cout << " 3. Multiplication---(*) " << endl;
    cout << " 4. Division---------(/) " << endl;
    cout << " 5. Modulo Operation-(%) " << endl;
    /*SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << " 6. Equal To------------------(==) " << endl;
    cout << " 7. Greater Than or Equal-----(>=) " << endl;
    cout << " 8. Less Than ----------------(<) " << endl;
    cout << " 9. Less Than or Equal--------(<=) " << endl;
    cout << " 10. Not Equal----------------(>) " << endl;*/
    SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << " 6. Logical AND---(&&) " << endl;
    cout << " 7. Logical OR----(||) " << endl;
    cout << " 8. Logical NOT---(!) " << endl;

    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "\n *** Remember you can only perform operations using two numbers *** \n" << endl;

    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "Slelct Your Operation : " << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Your are selected Addition" << endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Addition();
        break;
    
    case 2:
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Your are selected Subtraction" << endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Subtraction();
        break;

    case 3:
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Your are selected Multiplication" << endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Multiplication();
        break;

    case 4:
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Your are selected Division" << endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Division();
        break;

    case 5:
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Your are selected Modulo_Operation" << endl;
        cout << "Now You Can Input Integer Value Only" << endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Modulo_Operation();
        break;

    case 6:
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Your are selected Logical_AND" << endl;
        cout << "OUTPUT = 0 is False ** OUTPUT = 1 is True " <<endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Logical_AND();
        break;

    case 7:
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Your are selected Logical_OR" << endl;
        cout << "OUTPUT = 0 is False ** OUTPUT = 1 is True " <<endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Logical_OR();
        break;

    case 8:
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Your are selected Logical_NOT" << endl;
        cout << "OUTPUT = 0 is False ** OUTPUT = 1 is True " <<endl;
        cout << "Now You Can Input Integer Value Only" << endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Logical_NOT();
        break;
    
    default:
        break;
    }

    return 0;
 }