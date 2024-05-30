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
        {"������", "������", "������������� ��������", "����������", "�����������",  9984670 , 40000000 , "�������� �������"},
        {"����", "������", "����������", "���������", "������������", 110860 , 11061886 , "�������� �������"},
        {"�������", "������", "����������", "���������", "����������", 1972550 , 121005815 , "�������� �������"},
        {"���������", "��������", "��������������� ��������", "����������", "����������", 7692024 , 25969600 , "���������"},
        {"��������", "��������", "����������", "�������������", "������������", 8514877 , 201009622 , "����� �������"},
        {"������", "����", "����������", "��������", "�������������", 1001450 , 85294388 , "������"},
        {"��������", "���������", "����������", "����������", "�����������", 103125 , 376248 , "���������"},
        {"���������", "���-������", "����������", "���������", "�����", 2724902 , 19246300 , "�������"}
        };

    cout << "��������� ������ �����:\n";
    for(int i =0; i<8; i++)
    {
        cout << i+1 << ": ";
        cout << "������: " << cou_s[i].country;
        cout << "\t�������: " << cou_s[i].capital;
        cout << "\t����� ���������: " << cou_s[i].government;
        cout << endl ;
        cout << "����������� ����: " << cou_s[i].language;
        cout << "\t�������: " << cou_s[i].religion;
        cout << "\t������� (��^2): " << cou_s[i].area;
        cout << endl ;
        cout << "��������� (���.): " << cou_s[i].population;
        cout << "\t���������: " << cou_s[i].continent;
        cout << endl ;
        cout << endl ;
    }

    cout << "������� enter ��� ������������\n";
    cin.ignore();

    cout << "���������� ��������� ������� � ��������� ���������� �������� �������:\n";

    for(int i =0; i<8; i++)
    {
        if(cou_s[i].continent == "�������� �������")
        {
            sum_area += cou_s[i].area;
            sum_peop += cou_s[i].population;
        }
    }

    cout << "��������� ������� ����� �������� ������� = " << sum_area << " ��^2\n";
    cout << "��������� ��������� ����� �������� ������� = " << sum_peop << " �������\n";

    cout << "������� enter ��� ������������\n";
    cin.ignore();

    cout << "���������� �������� ����������� �������������� �����������:\n";

    for(int i =0; i<8; i++)
    {
        if(cou_s[i].language == "���������")
        {
             if(cou_s[most_i].population < cou_s[i].population)
            {
                most_i = i;
            }
        }
    }

    if ( most_i == 0 && cou_s[most_i].language != "���������")
    {
        cout << "�����c����� ������������� ������";
    }
    else
    {
        cout << "�������� ���������� ������������� �����������:" << cou_s[most_i].country << endl;
        cout << "�� �������� �:" << cou_s[most_i].capital << endl;
		cout << endl << "no hello" << endl;
		cout << endl << "yes hello" << endl;
    }

    return 0;
}
