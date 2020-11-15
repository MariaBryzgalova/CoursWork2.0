#include "OS.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

OS::OS() {
    Name = new char[20];
    strcpy(Name, "Empty");
    Developer = new char[20];
    strcpy(Developer, "Empty");
    Data = new char[10];
    strcpy(Data, "Empty");
    Price = 14500;
    BLastV = new char[20];
    strcpy(BLastV, "Empty");
    GUI = new char[20];
    strcpy(GUI, "Empty");
}
OS::OS(const OS& soft) {
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    Price = soft.Price;
    BLastV = new char[strlen(soft.BLastV) + 1];
    strcpy(BLastV, soft.BLastV);
    GUI = new char[strlen(soft.GUI) + 1];
    strcpy(GUI, soft.GUI);
}
void OS::PrintAllInformation() {
    cout << "Name: " << Name << endl;
    cout << "Developer: " << Developer << endl;
    cout << "Data: " << Data << endl;
    cout << "Price: " << Price << endl;
    cout << "Last version" << BLastV << endl;
    cout << "Graphical user interface: " << GUI << endl;
}


OS& OS::operator=(const OS& soft) {
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] BLastV;
    delete[] GUI;
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    BLastV = new char[strlen(soft.BLastV) + 1];
    strcpy(BLastV, soft.BLastV);
    GUI = new char[strlen(soft.GUI) + 1];
    strcpy(GUI, soft.GUI);
    Price = soft.Price;
    return *this;
}
void OS::WriteToFile(char* File) {
    ofstream file(File);
    file << Name << endl;
    file << Developer << endl;
    file << Data << endl;
    file << Price << endl;
    file << BLastV << endl;
    file << GUI << endl;
    file.close();
}
void OS::ReadFromFile(char* File) {
    ifstream file(File);
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] BLastV;
    delete[] GUI;
    string tmp;
    getline(file, tmp);
    Name = new char[strlen(tmp.c_str()) + 1];
    strcpy(Name, tmp.c_str());
    getline(file, tmp);
    Developer = new char[strlen(tmp.c_str()) + 1];
    strcpy(Developer, tmp.c_str());
    getline(file, tmp);
    Data = new char[strlen(tmp.c_str()) + 1];
    strcpy(Data, tmp.c_str());
    getline(file, tmp);
    BLastV = new char[strlen(tmp.c_str()) + 1];
    strcpy(BLastV, tmp.c_str());
    getline(file, tmp);
    GUI = new char[strlen(tmp.c_str()) + 1];
    strcpy(GUI, tmp.c_str());
    getline(file, tmp);
    file.close();
}

char* OS::GetGUI() const {
    return GUI;
}
void OS::SetGUI(char* gui) {
    delete[] GUI;
    GUI = new char[strlen(gui) + 1];
    strcpy(GUI, gui);
}
OS::~OS() {
    delete[] GUI;

}