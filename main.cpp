#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {
   
    string haslo, odpowiedz;
    int wiek;
   
    cout << "Podaj swoj wiek: ";
    cin >> wiek;
    if(wiek < 18)
    {
        cout <<endl<< "Jestes niepelnoletni";
    }
    else
    {
        cout << "Podaj haslo: ";
            cin >> haslo;
        if(haslo == "szarlotka")
        {
            cout <<endl<< "Logowanie udane";
        }
        else
        {
            cout <<endl<< "Logowanie nieudane";
        }
    }
    if(wiek >=35)
    {
        cout << "\n\nANKIETA\n";
        cout << "Bedziesz glosowal na prezydenta?"<<endl<<"1.Tak"<<endl<<"2.Nie\n\n";
        cin >> odpowiedz;
        cout << "\nDziekuje za wziecie udzialu w ankiecie!\n";
    }
    return 0;
}
