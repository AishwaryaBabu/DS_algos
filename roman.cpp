#include<iostream>
#include<string>

using namespace std;

string ToRoman(int input);
string ToRoman2(int input);

int main(int argc, char* argv[])
{

int input;
cout<<"Enter NUmber"<<endl;
cin>>input;
string roman;
    roman = ToRoman2(input);
    cout<<endl<<roman<<endl;


return 0;
}

//SOme issue with function:
string ToRoman (int input)
{
    if(input >= 1000) return "M" + ToRoman(input - 1000);
    if(input >= 900) return "CM" + ToRoman(input - 900);
    if(input >= 500) return "D" + ToRoman(input - 500);
    if(input >= 400) return "CD" + ToRoman(input - 400);
    if(input >= 100) return "C" + ToRoman(input - 100);
    if(input >= 90) return "XC" + ToRoman(input - 90);
    if(input >= 50) return "L" + ToRoman(input - 50);
    if(input >= 40) return "XL" + ToRoman(input - 40);
    if(input >= 10) return "X" + ToRoman(input - 10);
    if(input >= 5) return "V" + ToRoman(input - 5);
    if(input >= 1) return "I" + ToRoman(input - 1);
   

}

string ToRoman2 (int input)
{
string roman="";
    while(input >= 1000)
        {   
            roman += "M";
            input -= 1000;
        }   
    while(input >= 900)
        {
            roman += "CM";
            input -= 900;
        }
    while(input >= 500)
        {
            roman += "D";
            input -= 500;
        }
    while(input >= 400)
        {
           roman += "CD";
           input -= 400;
        }
    while(input >= 100)
        {
            roman += "C";
            input -= 100;
        }
    while(input >= 90)
        {
            roman += "XC";
            input -= 90;
        }
    while(input >= 50)
        {
            roman += "L";
            input -= 50;
            
        }
    while(input >= 40)
        {
            roman += "XL";
            input -= 40;
        }
    while(input >= 10)
        {
            roman += "X";
            input -= 10;
        }
    while(input >= 9)
    {
        roman += "IX";
        input -= 9;
    }   
    while(input >= 5)
        {
            roman += "V";
            input -= 5;
        }
    while(input >= 4)
    {
        roman += "IV";
        input -= 4;
    }
    while(input >= 1)
        {
            roman += "I";
            input -= 1;
        }

return roman;
}
