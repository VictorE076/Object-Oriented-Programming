#pragma once
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

//
class Data
{
private:
    int zi;
    char luna[21];
    int an;

protected:
    void message() const;

public:
    Data();
    Data(const int& zi_p, const char luna_p[21], const int& an_p);
    Data(const Data& ob);
    ~Data();


    const int& get_zi();
    void set_zi(const int& other);

    const char* get_luna();
    void set_luna(const char other[21]);

    const int& get_an();
    void set_an(const int& other);


    const bool check_valid_Data() const;
    
    ////
    Data& operator=(const Data& ob_p);
    friend ostream& operator<<(ostream& c, const Data& ob_p);
};
//global
ostream& operator<<(ostream& c, const Data& ob_p);

//
class Actor
{
private:
    string nume;
    Data data_nasterii;

public:
    Actor();
    Actor(const string& nume_p, const Data& data_nasterii_p);
    Actor(const string& nume_p, const int& zi_p, const char luna_p[21], const int& an_p);
    Actor(const Actor& ob);
    ~Actor();


    const string get_nume();
    void set_nume(const string& other);

    Data& get_data_nasterii();
    void set_data_nasterii(const Data& other_ob);


    ////
    ////
    Actor& operator=(const Actor& ob_p);
    friend ostream& operator<<(ostream& c, const Actor& other);
};
//global
ostream& operator<<(ostream& c, const Actor& other);

////

////

//
class Film
{
private:
    char titlu[51];
    int nrActori;
    vector<Actor> Act;

public:
    Film();
    Film(const char titlu_p[51]);
    Film(const char titlu_p[51], const int& nrActori_p);
    Film(const Film& ob);
    ~Film();


    const char* get_titlu();
    void set_titlu(const char other[51]);

    const int& get_nrActori();
    void set_nrActori(const int& other);

    vector<Actor>& get_Act();


    void check_coresp_nrAct() const;

    ////
    Film operator+(const Actor& Act_p);
    friend Film operator+(const Actor& actor, const Film& film);
    ////
    Film& operator+=(const Actor& Act_p);
    Film& operator=(const Film& other);
    friend ostream& operator<<(ostream& c, const Film& other_f);
    friend istream& operator>>(istream& cin_p, Film& other_f);
};
//global
ostream& operator<<(ostream& c, const Film& other_f);
istream& operator>>(istream& cin_p, Film& other_f);
////
Film operator+(const Actor& actor, const Film& film);
////

