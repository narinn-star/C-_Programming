#include <iostream>
using namespace std;

class Book {
    string title;
    int price, pages;
public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title; this->price = price; this->pages = pages;
    }
    void show() {
        cout << title << " " << price << "�� " << pages << " ������" << endl;
    }
    string getTitle() {
        return title;
    }
    /*bool operator== (int op2) {
        if (price == op2)
            return true;
        else return false;
    }
    bool operator== (string op2) {
        if (title == op2)
            return true;
        else return false;
    }
    bool operator== (Book op2) {
        if (price == op2.price && title == op2.title && pages == op2.pages)
            return true;
        else return false;
    }*/
    friend bool operator== (Book op1, int op2) {
        if (op1.price == op2)
            return true;
        else return false;
    }
    friend bool operator== (Book op1, string op2) {
        if (op1.title == op2)
            return true;
        else return false;
    }
    friend bool operator== (Book op1, Book op2) {
        if (op1.price == op2.price && op1.title == op2.title && op1.pages == op2.pages)
            return true;
        else return false;
    }
};

int main() {
    Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
    if (a == 30000) cout << "���� 30000��" << endl; // price �� 
    if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title �� 
    if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;  // title, price, pages ��� �� 
}