#include "Film.h"

//Data class:
Data::Data(){}
Data::Data(const int& zi_p, const char luna_p[21], const int& an_p)
{
    zi = zi_p;
    strcpy_s(luna, luna_p);
    an = an_p;
}
Data::Data(const Data& ob)
{
    *this = ob;
}
Data::~Data()
{
    ///cout << "Se apeleaza destructorul pentru un obiect de tip <Data>!\n";
}

const int& Data::get_zi()
{
    return zi;
}
void Data::set_zi(const int& other)
{
    zi = other;
}

const char* Data::get_luna()
{
    return luna;
}
void Data::set_luna(const char other[21])
{
    strcpy_s(luna, other);
}

const int& Data::get_an()
{
    return an;
}
void Data::set_an(const int& other)
{
    an = other;
}


//
void Data::message() const
{
    cout << "INVALID data, RESET it!!!\n";
}
//
const bool Data::check_valid_Data() const
{
    if (zi < 1 || zi > 31)
    {
        message();
        return false;
    }
    int max_zi_feb = 28;
    if (an % 4 == 0)
    {
        max_zi_feb++;
    }
    if (zi > 0 && zi <= 31 && strcmp(luna, "ianuarie") == 0 ||
        zi > 0 && zi <= max_zi_feb && strcmp(luna, "februarie") == 0 ||
        zi > 0 && zi <= 31 && strcmp(luna, "martie") == 0 ||
        zi > 0 && zi <= 30 && strcmp(luna, "aprilie") == 0 ||
        zi > 0 && zi <= 31 && strcmp(luna, "mai") == 0 ||
        zi > 0 && zi <= 30 && strcmp(luna, "iunie") == 0 ||
        zi > 0 && zi <= 31 && strcmp(luna, "iulie") == 0 ||
        zi > 0 && zi <= 31 && strcmp(luna, "august") == 0 ||
        zi > 0 && zi <= 30 && strcmp(luna, "septembrie") == 0 ||
        zi > 0 && zi <= 31 && strcmp(luna, "octombrie") == 0 ||
        zi > 0 && zi <= 30 && strcmp(luna, "noiembrie") == 0 ||
        zi > 0 && zi <= 31 && strcmp(luna, "decembrie") == 0){
        return true;
    }
    message();
    return false;

}

////
Data& Data::operator=(const Data& ob_p)
{
    cout << "Data::operator=\n\n";
    this->zi = ob_p.zi;
    strcpy_s(this->luna, ob_p.luna);
    this->an = ob_p.an;
    return *this;
}

//global
ostream& operator<<(ostream& c, const Data& ob_p)
{
    c << "Data: " << ob_p.zi << " " << ob_p.luna << " " << ob_p.an << "\n\n";
    return c;
}


//Actor class:
Actor::Actor(){}
Actor::Actor(const string& nume_p, const Data& data_nasterii_p)
{
    nume = nume_p;
    data_nasterii = data_nasterii_p;
}
Actor::Actor(const string& nume_p, const int& zi_p, const char luna_p[21], const int& an_p)
{
    nume = nume_p;
    data_nasterii = Data(zi_p, luna_p, an_p);
}
Actor::Actor(const Actor& ob)
{
    *this = ob;
}
Actor::~Actor()
{
    ///cout << "Se apeleaza destructorul pentru un obiect de tip <Actor>!\n";
}


const string Actor::get_nume()
{
    return nume;
}
void Actor::set_nume(const string& other)
{
    nume = other;
}

Data& Actor::get_data_nasterii()
{
    return data_nasterii;
}
void Actor::set_data_nasterii(const Data& other_ob)
{
    data_nasterii = other_ob;
}

////
Film operator+(const Actor& actor, const Film& film)
{
    Film Copy = film;
    Copy += actor;
    return Copy;
}
////
Actor& Actor::operator=(const Actor& ob_p)
{
    cout << "Actor::operator=\n\n";
    this->nume = ob_p.nume;
    this->data_nasterii = ob_p.data_nasterii;
    return *this;
}

//global
ostream& operator<<(ostream& c, const Actor& other)
{
    c << "Actorul: " << other.nume << "\n" << other.data_nasterii;
    return c;
}

//Film class:
Film::Film(){}
Film::Film(const char titlu_p[51])
{
    strcpy_s(titlu, titlu_p);
}
Film::Film(const char titlu_p[51], const int& nrActori_p)
{
    strcpy_s(titlu, titlu_p);
    nrActori = nrActori_p;
}
Film::Film(const Film& ob)
{
    *this = ob;
}
Film::~Film()
{
    ///cout << "Se apeleaza destructorul pentru un obiect de tip <Film>!\n";
}

const char* Film::get_titlu()
{
    return titlu;
}
void Film::set_titlu(const char other[51])
{
    strcpy_s(titlu, other);
}

const int& Film::get_nrActori()
{
    return nrActori;
}
void Film::set_nrActori(const int& other)
{
    if (other < 0)
    {
        nrActori = 0;
    }
    else
    {
        nrActori = other;
    }
}

vector<Actor>& Film::get_Act()
{
    return Act;
}


void Film::check_coresp_nrAct() const
{
    if (nrActori <= 0)
    {
        cout << "INVALID nrAct!!" << "\n\n";
    }
    else if (Act.size() <= 0)
    {
        cout << "NU avem niciun actor pentru film!\n\n";
    }
    else if (nrActori < Act.size())
    {
        cout << "Se cere o revizuire a listei actorilor!\n\n";
    }
    else if (nrActori == Act.size())
    {
        cout << "Avem suficienti actori pentru film!\n\n";
    }
    else
    {
        cout << "NU avem suficienti actori pentru film!\n\n";
    }
}


////
Film Film::operator+(const Actor& Act_p)
{
    Film copy = *this;
    copy += Act_p;
    return copy;
}
////
Film& Film::operator=(const Film& other)
{
    cout << "Film::operator=\n\n";
    strcpy_s(this->titlu, other.titlu);
    this->nrActori = other.nrActori;
    this->Act.clear();
    const int n_other = other.Act.size();
    for (int i = 0; i < n_other; i++)
    {
        //this->Act.push_back(other.Act[i]);
        *this += other.Act[i]; 
    }
    return *this;
}
//global
ostream& operator<<(ostream& c, const Film& other_f)
{
    c << "Nume film: " << other_f.titlu << "\n";
    c << "Numar actori: " << other_f.nrActori << "\n";
    c << "Lista actori:\n";
    const int n_act = other_f.Act.size();
    for (int i = 0; i < n_act; i++)
    {
        c << other_f.Act[i];
    }
    c << endl;
    return c;
}
Film& Film::operator+=(const Actor& Act_p)
{
    this->Act.push_back(Act_p);
    return *this;
}
istream& operator>>(istream& cin_p, Film& other_f)
{
    cout << "Dati titlul filmului: ";
    cin_p.getline(other_f.titlu, 51);
    cout << "Dati numarul total de actori din film: ";
    cin_p >> other_f.nrActori;

    for (int i = 0; i < other_f.nrActori; i++)
    {
        cout << "Dati numele actorului " << i + 1 << ": "; string _nume;
        cin_p >> _nume;
        cout << "Dati data_nasterii: "; int _zi, _an; char _luna[21];
        cin_p >> _zi;
        cin_p >> _luna;
        cin_p >> _an;
        other_f += Actor(_nume, Data(_zi, _luna, _an));
    }
    return cin_p;
}


