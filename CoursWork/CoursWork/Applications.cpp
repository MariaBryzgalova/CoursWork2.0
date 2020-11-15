#include "Applications.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

Applications::Applications() {
    Name = new char[20];
    strcpy(Name, "Empty");
    Developer = new char[20];
    strcpy(Developer, "Empty");
    Data = new char[10];
    strcpy(Data, "Empty");
    Price = 14500;
    AppArea = new char[20];
    strcpy(AppArea, "Empty");
    AppType = new char[20];
    strcpy(AppType, "Empty");
}
Applications::Applications(const Applications& soft) {
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    Price = soft.Price;
    AppArea = new char[strlen(soft.AppArea) + 1];
    strcpy(AppArea, soft.AppArea);
    AppType = new char[strlen(soft.AppType) + 1];
    strcpy(AppType, soft.AppType);
}
void Applications::PrintAllInformation() {
    cout << "Name: " << Name << endl;
    cout << "Developer: " << Developer << endl;
    cout << "Data: " << Data << endl;
    cout << "Price: " << Price << endl;
    cout << "Scope of application" << AppArea << endl;
    cout << "Type of installation" << AppType << endl;
}


Applications& Applications::operator=(const Applications& soft) {
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] AppArea;
    delete[] AppType;
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    AppArea = new char[strlen(soft.AppArea) + 1];
    strcpy(AppArea, soft.AppArea);
    AppType = new char[strlen(soft.AppType) + 1];
    strcpy(AppType, soft.AppType);
    Price = soft.Price;
    return *this;
}
void Applications::WriteToFile(char* File) {
    ofstream file(File);
    file << Name << endl;
    file << Developer << endl;
    file << Data << endl;
    file << Price << endl;
    file << AppArea << endl;
    file << AppType << endl;
    file.close();
}
void Applications::ReadFromFile(char* File) {
    ifstream file(File);
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] AppArea;
    delete[] AppType;
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
    AppArea = new char[strlen(tmp.c_str()) + 1];
    strcpy(AppArea, tmp.c_str());
    getline(file, tmp);
    AppType = new char[strlen(tmp.c_str()) + 1];
    strcpy(AppType, tmp.c_str());
    getline(file, tmp);
    file.close();
}

char* Applications::GetAppArea() const {
    return AppArea;
}
void Applications::SetAppArea(char* appArea) {
    delete[] AppArea;
    AppArea = new char[strlen(appArea) + 1];
    strcpy(AppArea, appArea);
}

char* Applications::GetAppType() const {
    return AppType;
}
void Applications::SetAppType(char* appType) {
    delete[] AppType;
    AppType = new char[strlen(appType) + 1];
    strcpy(AppType, appType);
}

Applications::~Applications() {
    delete[] AppType;
    delete[] AppArea;

}