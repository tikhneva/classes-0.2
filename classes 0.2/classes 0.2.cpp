// classes 0.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Parrot { // ������ ������
public:
    double wings = 40; //��
    int legs_count = 2;
    string nick = "Sarah";
    string plumage_color = "red";
    string eyes_color = "yellow";


    //��������
    void MakeNoize() {
        cout << "ARH!\n";
    }

    void Fly() {
        cout << "������ ������!\n";
    }

    void Eat(string meal) {
        cout << "������ ���� " << meal << "\n";
    }

    void Sleep() {
        cout << "������ �����\n";
    }

    void Stare() {
        cout << "������ ������� �������� �� ���\n";
    }
};

class Human { // ������ ������
public:
    double high = 162; //��
    double beauty = 100; //%
    double foot_size = 37; // EU size
    string name = "Alice";
    string eyes_color = "green";
    string hair_color = "light brown";
    string skill = "luck";

    //��������
    void PetLover() {
        cout << "���� ��� ������!\n";
    }

    void LatestNews() {
        cout << "� ��� ����� ���� �������!\n";
    }

    void Cooking(string pasta) {
        cout << "*���� ���� ������ ������ ��� �������*" << pasta << "\n";
    }

    void Lateness() { //������ �� ����� �����������
        cout << "������� �� ���������\n";
    }

    void Hobby() { //�쳺 ������ ������ ������
        cout << "����� ���� ���� �����\n";
    }
};

class Room { // ������ ������,

    int window_count = 1; //
    int residents_count = 2;
    string location = "Seoul";
    string size = "very small";
    double comfort = 2; // 2 out of 10


    //�������
    void SleepPlace() {
        cout << "�� ����� ������ ������, ��� �����\n";
    }

    void NeighborhoodNoises() {
        cout << "knock bdjsdchk!\n";
    }

    void Food(string ramyeon) { //��� � ��������
        cout << "���� ��� �������� � ������" << ramyeon << "\n";
    }

    void AirConditioner() { //���� �� �����, ��� �� ������
        cout << "�������\n";
    }

    void Door() {
        cout << "��� ����, ���� ����������� ��� ����������� ����\n";
    }
};

class Phone {
public:
    double display_diagonol = 5.4; //����
    double memory = 128; //��
    int cameras_count = 2;
    string phone_model = "IPhone 13 mini";
    string color = "blue";


    //�������
    void CameraClick() {
        cout << "*���*\n";
    }

    void Photo() {
        cout << "����� �� ������ ����� ����\n";
    }

    void Memory() {
        cout << "�� ������ ���� ������� ����\n";

    }
    void Calls() {
        cout << "������� ������\n";
    }

    void Music() { //���� ���������� ������ (�� ���� �����)
        cout << "I feel the rush" << "\n" << "Addicted to your touch\n";
    }
};

class Music { // 
public:
    int song_release = 2022; //year
    string song_name = "i hate to admit";
    string kind_of_song = "sad";
    string song_author = "Bang Chan";
    string song_language = "English and Korean";


    //�������
    void Lyrics() { // � ��������� ���� �� ��������� ���, ���� ����� �� ������������ ����������
        cout << "How could I forget" << "\n" << "The day you lied to me\n";
    }

    void Melody() { //�����
        cout << "������������ ������ ������\n";
    }

    void Mood() { // ����� ����� ���������� �� �� (�� ������ ���������������)
        cout << "��� ������ ����\n";
    }

    void Vocabulary() { // ��������� ������� ��� �����
        cout << "�, ���� �����\n";
    }

    void Headphones() { //�� ���� ����� ��� �� ������
        cout << "*������� ������� � ���� ������*\n";
    }
};

int main()
{

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
