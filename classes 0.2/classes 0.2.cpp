// classes 0.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Parrot { // робимо папугу
public:
    double wings = 40; //см
    int legs_count = 2;
    string nick = "Sarah";
    string plumage_color = "red";
    string eyes_color = "yellow";


    //поведінка
    void MakeNoize() {
        cout << "ARH!\n";
    }

    void Fly() {
        cout << "папуга летить!\n";
    }

    void Eat(string meal) {
        cout << "папуга їсть " << meal << "\n";
    }

    void Sleep() {
        cout << "папуга спить\n";
    }

    void Stare() {
        cout << "папуга підозріло дивиться на вас\n";
    }
};

class Human { // робимо людину
public:
    double high = 162; //см
    double beauty = 100; //%
    double foot_size = 37; // EU size
    string name = "Alice";
    string eyes_color = "green";
    string hair_color = "light brown";
    string skill = "luck";

    //поведінка
    void PetLover() {
        cout << "диви яке кошеня!\n";
    }

    void LatestNews() {
        cout << "я тобі зараз таке розповім!\n";
    }

    void Cooking(string pasta) {
        cout << "*Аліса готує смачну страву для подруги*" << pasta << "\n";
    }

    void Lateness() { //завжди та усюди запізнюється
        cout << "вибачте за запізнення\n";
    }

    void Hobby() { //вміє робити гарний манікюр
        cout << "давай сюди свою лапцю\n";
    }
};

class Room { // робимо кімнату,

    int window_count = 1; //
    int residents_count = 2;
    string location = "Seoul";
    string size = "very small";
    double comfort = 2; // 2 out of 10


    //функції
    void SleepPlace() {
        cout << "на підлозі лежить матрац, щоб спати\n";
    }

    void NeighborhoodNoises() {
        cout << "knock bdjsdchk!\n";
    }

    void Food(string ramyeon) { //їжа у наявності
        cout << "десь біля раковини є рамьон" << ramyeon << "\n";
    }

    void AirConditioner() { //рятує від спеки, але не сильно
        cout << "фшшшшшш\n";
    }

    void Door() {
        cout << "грає пісня, коли відчіняються або зачиняються двері\n";
    }
};

class Phone {
public:
    double display_diagonol = 5.4; //дюйм
    double memory = 128; //гб
    int cameras_count = 2;
    string phone_model = "IPhone 13 mini";
    string color = "blue";


    //функції
    void CameraClick() {
        cout << "*чік*\n";
    }

    void Photo() {
        cout << "зараз як зроблю гарне фото\n";
    }

    void Memory() {
        cout << "на пристрї немає вільного місця\n";

    }
    void Calls() {
        cout << "вхідний дзвінок\n";
    }

    void Music() { //може програвати музику (це дуже добре)
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


    //функції
    void Lyrics() { // в основному пісня на англійській мові, тому можна із задоволенням підспівувати
        cout << "How could I forget" << "\n" << "The day you lied to me\n";
    }

    void Melody() { //піаніно
        cout << "відтворюється приємна мелодія\n";
    }

    void Mood() { // можна трохи посумувати під неї (чи просто насолоджуватись)
        cout << "яка чудова пісня\n";
    }

    void Vocabulary() { // можливість вивчити нові слова
        cout << "о, нове слово\n";
    }

    void Headphones() { //не буде нудно йти по вулиці
        cout << "*покачую головою у ритм музики*\n";
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
