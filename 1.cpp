#include <iostream>
#include <locale>

using namespace std;

struct state
{
string country;
string capital;
string government;
string language;
string religion;
unsigned int area;
unsigned int population;
string continent;
};

int main()
{
    int sum_peop = 0, sum_area = 0, most_i = 0;
    setlocale(LC_ALL, "Russian");
    state cou_s[8] ={
        {"Канада", "Оттава", "парламентская монархия", "английский", "отсутствует",  9984670 , 40000000 , "Северная Америка"},
        {"Куба", "Гавана", "республика", "испанский", "христианство", 110860 , 11061886 , "Северная Америка"},
        {"Мексика", "Мехико", "республика", "испанский", "католицизм", 1972550 , 121005815 , "Северная Америка"},
        {"Австралия", "Канберра", "конституционная монархия", "английский", "католицизм", 7692024 , 25969600 , "Австралия"},
        {"Бразилия", "Бразилиа", "республика", "португальский", "христианство", 8514877 , 201009622 , "Южная Америка"},
        {"Египет", "Каир", "республика", "арабский", "масульманство", 1001450 , 85294388 , "Африка"},
        {"Исландия", "Рейкьявик", "республика", "исландский", "лютеранство", 103125 , 376248 , "островное"},
        {"Казахстан", "Нур-Султан", "республика", "казахский", "ислам", 2724902 , 19246300 , "Евразия"}
        };

    cout << "первичный список стран:\n";
    for(int i =0; i<8; i++)
    {
        cout << i+1 << ": ";
        cout << "Страна: " << cou_s[i].country;
        cout << "\tСтолица: " << cou_s[i].capital;
        cout << "\tФорма правления: " << cou_s[i].government;
        cout << endl ;
        cout << "Официальный язык: " << cou_s[i].language;
        cout << "\tРелигия: " << cou_s[i].religion;
        cout << "\tПлощадь (км^2): " << cou_s[i].area;
        cout << endl ;
        cout << "Население (чел.): " << cou_s[i].population;
        cout << "\tКонтинент: " << cou_s[i].continent;
        cout << endl ;
        cout << endl ;
    }

    cout << "нажмите enter для проодолжения\n";
    cin.ignore();

    cout << "Вычисление суммарной площади и населения государств Северной Америки:\n";

    for(int i =0; i<8; i++)
    {
        if(cou_s[i].continent == "Северная Америка")
        {
            sum_area += cou_s[i].area;
            sum_peop += cou_s[i].population;
        }
    }

    cout << "Суммарная площадь стран северной америки = " << sum_area << " км^2\n";
    cout << "Суммарное население стран северной америки = " << sum_peop << " человек\n";

    cout << "нажмите enter для проодолжения\n";
    cin.ignore();

    cout << "Вычисление наиболее населенного испаноязычного государства:\n";

    for(int i =0; i<8; i++)
    {
        if(cou_s[i].language == "испанский")
        {
             if(cou_s[most_i].population < cou_s[i].population)
            {
                most_i = i;
            }
        }
    }

    if ( most_i == 0 && cou_s[most_i].language != "испанский")
    {
        cout << "отсутcтвуют испаноязычные страны";
    }
    else
    {
        cout << "Наиболее населенное испаноязычное государство:" << cou_s[most_i].country << endl;
        cout << "Со столицей в:" << cou_s[most_i].capital << endl;
		cout << endl << "no hello" << endl;
		cout << endl << "yes hello" << endl;
    }

    return 0;
}
