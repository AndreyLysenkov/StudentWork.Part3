#pragma once

class Printing
{
private:
    Printing* next;
protected:
    float price;
    char* title;
    void Init(float price,const char* title);
public:
    static Printing* Top;

    Printing();
    Printing(float price, char* title);
    Printing(const Printing&);
    ~Printing();

    char* GetTitle();
    void SetTitle(char*);

    float GetPrice();
    void SetPrice(float);

    Printing* GetNext();
    void Add();
    virtual void Show();
    static void Print();
};
