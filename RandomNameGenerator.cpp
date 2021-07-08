#include <iostream>
#include <ctime>
#include <array>

using namespace std;

enum Culture
{
    Turkish,German,French
};
enum Gender
{
    Male,Female
};
const string maleTurkishNames[]
{
    "Tahsin","Başar","Kemal","Altan","İsmail","Bayram","Ali","Ahmet","Teoman","Recep","Tayyip","Ekrem","Mehmet","Mansur",
    "Burak","Murat","Kaan","Atilla","Orkun"
};
const string femaleTurkishNames[]
{
    "Hatice","Cemre","Şebnem","Ayşe","Fadime","Emine","Aysu","Aysun","Esma","Çiğdem","Gökçe","Gökçem","Arzu","Gizem"
};
const string germanMaleNames[]
{
    "Hans","Rudolf","Adolf","Paul","Elias","Fynn","Helmut","Konrad"
};
const string germanFemaleNames[]
{
    "Emma","Mia","Hannah","Emilia","Angela","Anna"
};
const string frenchMaleNames[]
{
    "Albert","Claude","Arthur","Jean","Jacques"
};
const string frenchFemaleNames[]
{
    "Adelene","Adelle","Amélie","Bella","Danielle"
};
string GetRandomName(Gender gender,Culture culture)
{
    switch (gender)
    {
        case Male:
            switch (culture)
            {
                case Turkish:
                    return maleTurkishNames[rand()%maleTurkishNames->size()];
                break;
                case German:
                    return germanMaleNames[rand()%germanMaleNames->size()];
                break;
                case French:
                    return frenchMaleNames[rand()%frenchMaleNames->size()];
                break;
            }
        break;
        case Female:
            switch (culture)
            {
                case Turkish:
                    return femaleTurkishNames[rand()%femaleTurkishNames->size()];
                break;
                case German:
                    return germanFemaleNames[rand()%germanFemaleNames->size()];
                break;
                case French:
                    return frenchFemaleNames[rand()%frenchFemaleNames->size()];
                break;
            }
        break;
    }
    return NULL;
}
int main()
{
    srand(time(NULL));
    for (int i = 0; i < 5000; i++)
    {
        cout << GetRandomName(Male,German) << endl;//Gets Male German Names
    }
    

}