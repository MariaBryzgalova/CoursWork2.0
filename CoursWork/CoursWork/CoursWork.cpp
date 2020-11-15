#include <iostream>
#include <string>
#include "Software.h"
#include "Exception.h"
#include "Vector.h"
#include "Basic.h"
#include "Applications.h"
#include "OS.h"
#include "Backend.h"
#include "GeneralAssignment.h"
#include "SpecialAssignment.h"
#include "SoftwareTools.h"

using namespace std;

//Внешняя функция для сравнения всех объектов по стоимости (используется при сортировке)
template<class T>
bool CompareByPrice(const T& comp1, const T& comp2) {
    if (comp1->GetPrice() > comp2->GetPrice()) return true;
    return false;
}

//Внешняя функция для поиска одного объекта по стоимости (используется при поиске)
template<class T>
bool FinderByPrice(double value, const T& comp) {
    if (value == comp->GetPrice()) return true;
    return false;
}

//Внешняя функция для поиска всех объектов по стоимости (используется при поиске)
template<class T>
bool FinderAllByPrice(double min, double max, const T& comp) {
    if (comp->GetPrice() >= min && comp->GetPrice() <= max) return true;
    return false;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int choise = 0, choise2 = 0;
    Vector<Interface*> vec;
    while (true) {
        cout << "Выберите желаемое действие: " << endl;
        cout << "1 - Добавить объект" << endl;
        cout << "2 - Редактировать существующий объект" << endl;
        cout << "3 - Удалить объект" << endl;
        cout << "4 - Отсортировать элементы по цене" << endl;
        cout << "5 - Вывод полной информации об объекте" << endl;
        cout << "6 - Вывод названий всех объектов" << endl;
        cout << "7 - Поиск объекта" << endl;
        cout << "8 - Поиск объектов по диапазону" << endl;
        cout << "9 - Запись в файл" << endl;
        cout << "10 - Чтение из файла" << endl;
        cout << "11 - Выйти из программы" << endl;
        cin >> choise;
        system("cls");
        if (choise == 1 || choise == 2) {
            cout << "Выберите класс для работы: " << endl;
            cout << "1 - Программное обеспечение" << endl;
            cout << "2 - Базовое ПО" << endl;
            cout << "3 - Сервисное ПО" << endl;
            cout << "4 - Операционная система" << endl;
            cout << "5 - Прикладное ПО" << endl;
            cout << "6 - ПО общего назначения" << endl;
            cout << "7 - ПО Специального назначения" << endl;
            cout << "8 - Инструментальное ПО" << endl;
        }
        int n;
        string tmp;
        int col = 0;
        double var = 0.0;
        try {
            switch (choise)
            {
            case 1:
            {
                cin >> choise2;
                switch (choise2)
                {
                case 1:
                {
                    vec.PushBack(new Software());
                    break;
                }
                case 2:
                {
                    vec.PushBack(new Basic());
                    break;
                }
                case 3:
                {
                    vec.PushBack(new Backend());
                    break;
                }
                case 4:
                {
                    vec.PushBack(new OS());
                    break;
                }
                case 5:
                {
                    vec.PushBack(new Applications());
                    break;
                }
                case 6:
                {
                    vec.PushBack(new GeneralAssignment());
                    break;
                }
                case 7:
                {
                    vec.PushBack(new SpecialAssignment());
                    break;
                }
                case 8:
                {
                    vec.PushBack(new SoftwareTools());
                    break;
                }
                default:
                    return 0;
                }
            }
            case 2:
            {
                if (choise2 == 0) cin >> choise2;
                switch (choise2)
                {
                case 1:
                {
                    cout << "Задать название ПО: " << endl;
                    cin.get();
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetName((char*)tmp.c_str());
                    cout << "Изменить разработчика: " << endl;
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetDeveloper((char*)tmp.c_str());
                    cout << "Изменить дату выпуска ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Software*>(vec[vec.Length() - 1])->SetData((char*)tmp.c_str());
                    cout << "Изменить цену: " << endl;
                    cin >> var;
                    vec[vec.Length() - 1]->SetPrice(var);
                    break;
                }
                case 2:
                {
                    cout << "Задать название ПО: " << endl;
                    cin.get();
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetName((char*)tmp.c_str());
                    cout << "Изменить разработчика: " << endl;
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetDeveloper((char*)tmp.c_str());
                    cout << "Изменить дату выпуска ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Basic*>(vec[vec.Length() - 1])->SetData((char*)tmp.c_str());
                    cout << "Изменить цену: " << endl;
                    cin >> var;
                    vec[vec.Length() - 1]->SetPrice(var);
                    cout << "Изменить дату последнего обновления ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Basic*>(vec[vec.Length() - 1])->SetBLastV((char*)tmp.c_str());
                    break;
                }
                case 3:
                {
                    cout << "Задать название ПО: " << endl;
                    cin.get();
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetName((char*)tmp.c_str());
                    cout << "Изменить разработчика: " << endl;
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetDeveloper((char*)tmp.c_str());
                    cout << "Изменить дату выпуска ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Backend*>(vec[vec.Length() - 1])->SetData((char*)tmp.c_str());
                    cout << "Изменить цену: " << endl;
                    cin >> var;
                    vec[vec.Length() - 1]->SetPrice(var);
                    cout << "Изменить дату последнего обновления ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Backend*>(vec[vec.Length() - 1])->SetBLastV((char*)tmp.c_str());
                    cout << "Изменить тип ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Backend*>(vec[vec.Length() - 1])->SetBeType((char*)tmp.c_str());
                    break;
                }
                case 4:
                {
                    cout << "Задать название ПО: " << endl;
                    cin.get();
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetName((char*)tmp.c_str());
                    cout << "Изменить разработчика: " << endl;
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetDeveloper((char*)tmp.c_str());
                    cout << "Изменить дату выпуска ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<OS*>(vec[vec.Length() - 1])->SetData((char*)tmp.c_str());
                    cout << "Изменить цену: " << endl;
                    cin >> var;
                    vec[vec.Length() - 1]->SetPrice(var);
                    cout << "Изменить дату последнего обновления ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<OS*>(vec[vec.Length() - 1])->SetBLastV((char*)tmp.c_str());
                    cout << "Изменить тип графического интерфейса: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<OS*>(vec[vec.Length() - 1])->SetGUI((char*)tmp.c_str());
                    break;
                }
                case 5:
                {
                    cout << "Задать название ПО: " << endl;
                    cin.get();
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetName((char*)tmp.c_str());
                    cout << "Изменить разработчика: " << endl;
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetDeveloper((char*)tmp.c_str());
                    cout << "Изменить дату выпуска ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Applications*>(vec[vec.Length() - 1])->SetData((char*)tmp.c_str());
                    cout << "Изменить цену: " << endl;
                    cin >> var;
                    vec[vec.Length() - 1]->SetPrice(var);
                    cout << "Изменить сферу применения: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Applications*>(vec[vec.Length() - 1])->SetAppArea((char*)tmp.c_str());
                    cout << "Изменить тип установки: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<Applications*>(vec[vec.Length() - 1])->SetAppType((char*)tmp.c_str());
                    break;
                }
                case 6:
                {
                    cout << "Задать название ПО: " << endl;
                    cin.get();
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetName((char*)tmp.c_str());
                    cout << "Изменить разработчика: " << endl;
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetDeveloper((char*)tmp.c_str());
                    cout << "Изменить дату выпуска ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<GeneralAssignment*>(vec[vec.Length() - 1])->SetData((char*)tmp.c_str());
                    cout << "Изменить цену: " << endl;
                    cin >> var;
                    vec[vec.Length() - 1]->SetPrice(var);
                    cout << "Изменить сферу применения: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<GeneralAssignment*>(vec[vec.Length() - 1])->SetAppArea((char*)tmp.c_str());
                    cout << "Изменить тип установки: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<GeneralAssignment*>(vec[vec.Length() - 1])->SetAppType((char*)tmp.c_str());
                    cout << "Изменить тип программы: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<GeneralAssignment*>(vec[vec.Length() - 1])->SetGAType((char*)tmp.c_str());
                    break;
                }
                case 7:
                {
                    cout << "Задать название ПО: " << endl;
                    cin.get();
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetName((char*)tmp.c_str());
                    cout << "Изменить разработчика: " << endl;
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetDeveloper((char*)tmp.c_str());
                    cout << "Изменить дату выпуска ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<SpecialAssignment*>(vec[vec.Length() - 1])->SetData((char*)tmp.c_str());
                    cout << "Изменить цену: " << endl;
                    cin >> var;
                    vec[vec.Length() - 1]->SetPrice(var);
                    cout << "Изменить сферу применения: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<SpecialAssignment*>(vec[vec.Length() - 1])->SetAppArea((char*)tmp.c_str());
                    cout << "Изменить тип установки: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<SpecialAssignment*>(vec[vec.Length() - 1])->SetAppType((char*)tmp.c_str());
                    cout << "Изменить дату последнего обновления: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<SpecialAssignment*>(vec[vec.Length() - 1])->SetSALastV((char*)tmp.c_str());
                    cout << "Изменить тип лицензии: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<SpecialAssignment*>(vec[vec.Length() - 1])->SetLicence((char*)tmp.c_str());
                    break;
                }
                case 8:
                {
                    cout << "Задать название ПО: " << endl;
                    cin.get();
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetName((char*)tmp.c_str());
                    cout << "Изменить разработчика: " << endl;
                    getline(cin, tmp);
                    vec[vec.Length() - 1]->SetDeveloper((char*)tmp.c_str());
                    cout << "Изменить дату выпуска ПО: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<SoftwareTools*>(vec[vec.Length() - 1])->SetData((char*)tmp.c_str());
                    cout << "Изменить цену: " << endl;
                    cin >> var;
                    vec[vec.Length() - 1]->SetPrice(var);
                    cout << "Изменить дату последнего обновления: " << endl;
                    getline(cin, tmp);
                    dynamic_cast<SoftwareTools*>(vec[vec.Length() - 1])->SetSWLastV((char*)tmp.c_str());

                    break;
                }
               
                default:
                    return 0;
                }
                break;
            }
            case 3:
            {
                cout << "Выберите номер объекта, который хотите удалить:" << endl;
                cin >> n;
                vec.Erase(n);
                break;
            }
            case 4:
            {
                if (vec.Length() == 0) throw Exception("Нечего сортировать!");
                vec.ComparableSort(CompareByPrice);
                break;
            }
            case 5:
            {
                cout << "Введите номер объекта: " << endl;
                cin >> n;
                vec[n]->PrintAllInformation();
                break;
            }
            case 6:
            {
                if (vec.Length() <= 0) cout << "У вас ещё нет объектов." << endl;
                for (int i = 0; i < vec.Length(); i++) {
                    cout << "№" << i + 1 << ": " << vec[i]->GetName() << endl;
                }
                break;
            }
            case 7:
            {
                cout << "Введите стоимость объекта, который хотите найти (будет найден первый элемент):" << endl;
                cin >> var;
                Interface** temp = vec.Search(var, FinderByPrice);
                if (temp == nullptr) cout << "Вашего элемента не существует..." << endl;
                else (*temp)->PrintAllInformation();
                break;
            }
            case 8:
            {
                double min, max;
                cout << "Введите минимальную стоимость объектов: " << endl;
                cin >> min;
                cout << "Введите максимальную стоимость объектов: " << endl;
                cin >> max;
                Vector<Interface*>* find = vec.Search(min, max, FinderAllByPrice);
                if (find == nullptr) cout << "Вашего элемента не существует..." << endl;
                else {
                    cout << "Ваши найденные элементы: " << endl;
                    for (int i = 0; i < find->Length(); i++) {
                        cout << "#" << i + 1 << " " << (*find)[i]->GetName() << endl;
                    }
                    delete find;
                }
                break;
            }
            case 9:
            {
                cout << "Укажите номер объекта, который хотите записать в файл" << endl;
                cin >> n;
                cout << "Укажите путь для сохранения файла" << endl;
                cin >> tmp;
                vec[n]->WriteToFile((char*)tmp.c_str());
                break;
            }
            case 10:
            {
                cout << "Укажите путь до считываемого файла" << endl;
                cin >> tmp;
                cout << "Какой класс представляет файл?" << endl;
                cout << "1 - Программное обеспечение" << endl;
                cout << "2 - Базовое ПО" << endl;
                cout << "3 - Сервисное ПО" << endl;
                cout << "4 - Операционная система" << endl;
                cout << "5 - Прикладное ПО" << endl;
                cout << "6 - ПО общего назначения" << endl;
                cout << "7 - ПО Специального назначения" << endl;
                cout << "8 - Инструментальное ПО" << endl;
                cin >> choise2;
                Interface* temp;
                switch (choise2) {
                case 1:
                {
                    vec.PushBack(new Software());
                    break;
                }
                case 2:
                {
                    vec.PushBack(new Basic());
                    break;
                }
                case 3:
                {
                    vec.PushBack(new Backend());
                    break;
                }
                case 4:
                {
                    vec.PushBack(new OS());
                    break;
                }
                case 5:
                {
                    vec.PushBack(new Applications());
                    break;
                }
                case 6:
                {
                    vec.PushBack(new GeneralAssignment());
                    break;
                }
                case 7:
                {
                    vec.PushBack(new SpecialAssignment());
                    break;
                }
                case 8:
                {
                    vec.PushBack(new SoftwareTools());
                    break;
                }
                default:
                    return 0;
                }
                if (vec.Length()) vec[vec.Length() - 1]->ReadFromFile((char*)tmp.c_str());
                else cout << "Нет элементов в векторе!" << endl;
                break;
            }
            default:
                return 0;
            }
        }
        catch (Exception& ex) {
            cout << "<---------------ОШИБКА!-------------->" << endl;
            cout << ex.GetError() << endl;
            cout << "<------------------------------------>" << endl << endl;
        }
    }
    system("pause");
    return 0;
}


