#include <iostream>

using namespace std;

class Czlowiek{
public:
    string imie;
    int wiek;

    void dodaj(){
        cout<<"Dodaj czlowieka"<<endl;
        cout<<"Podaj imie:";
        cin>>imie;
        cout<<endl<<"Podaj wiek:";
        cin>>wiek;
    }

    void odpowiedz(){
        cout<<imie<<" "<<wiek<<endl;

    }



};
int main()
{
    Czlowiek dosia;

    dosia.odpowiedz();
    return 0;
}
