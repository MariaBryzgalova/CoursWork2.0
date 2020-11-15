#pragma once

class Interface {
public:
    virtual void PrintAllInformation() = 0;
    virtual char* GetName() const = 0;
    virtual char* GetDeveloper() const = 0;
    virtual char* GetData() const = 0;
    virtual double GetPrice() const = 0;
    virtual void SetName(char* name) = 0;
    virtual void SetDeveloper(char* developer) = 0;
    virtual void SetData(char* data) = 0;
    virtual void SetPrice(double price) = 0;
    virtual void WriteToFile(char* File) = 0;
    virtual void ReadFromFile(char* File) = 0;
    virtual ~Interface() = 0 {};
};



