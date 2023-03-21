// Nr.4:
/*
    Se considera urmatoarele clase:
    "Data" ce contine atributele: zi(int), luna(sir de caractere de lungime fixa 20), an(int).
    "Actor" ce contine atributele: nume(sir de caractere de lungime variabila), data_nasterii(Data).
    "Film" ce contine atributele: titlu(sir de caractere de lungime fixa 50), nrActori(int),
Act(vector de obiecte de tip Actor).
*/

#include "Film.h"
int main()
{
    Data d1(15, "iulie", 1975), d2 = d1;
    Actor a1("Ionescu", d1), a2("Popescu", 2, "ianuarie", 1980);
    Film f1("Matrix"), f2, f3;
    f1 += a1;
    f1 += a2;
    cout << f1;
    cin >> f2;
    f3 = f2;
    cout << f3;


    /*
    Data d(d2);
    Actor a(a1);
    Film f(f3);
    */

    ////
    /*
    f1 + a1;
    cout << f1;
    f1 = f1 + Actor("Marcel", Data(2, "iunie", 2020));
    cout << f1;
    f1 + Actor("Flavius", 1, "decembrie", 2014);
    cout << f1;
    cout << "NOI TESTE!\n\n";
    cout << f2;
    f2 = f2 + Actor("Stefan", 23, "august", 1995);
    cout << f2;
    f2 = f2 + Actor("Rares", Data(29, "februarie", 2016));
    cout << f2;
    f2 = f1 + a1;
    cout << f2;
    f2 += Actor("Radu", 10, "iulie", 1700);
    cout << f2;
    cout << "IN SENS INVERS!\n\n";
    f2 = a1 + f1;
    cout << f2;
    f2 = Actor("Dan", 7, "iunie", 2003) + f2;
    cout << f2;
    f2 = Actor("Ion", 8, "iulie", 2004) + f2;
    cout << f2;
    f2 = f2 + Actor("Yannis", 9, "august", 2005);
    cout << f2;
    f2 = Actor("Mircea", 1, "ianuarie", 2002) + f3 + Actor("Mihnea", 1, "ianuarie", 2001);
    cout << f2;
    */

    /*
    f1 += Actor("Dobrescu", Data(5, "mai", 2000));
    f2 += Actor("Georgescu", Data(18,  "martie", 1971));
    f1 += Actor("Bucur", 2, "august", 1997);
    cout << "AFISAM ACTORII f1: \n\n";
    for (int i = 0; i < f1.get_Act().size(); i++)
    {
        cout << f1.get_Act()[i] << endl;
    }
    cout << "AFISAM ACTORII f2: \n\n";
    for (int i = 0; i < f2.get_Act().size(); i++)
    {
        cout << f2.get_Act()[i] << endl;
    }
    cout << f1.get_Act().size() << endl;
    cout << f2.get_Act().size() << endl;
    cout << endl << f1.get_Act()[2] << endl;
    f1.get_Act()[2].set_nume("Radu");
    f1.get_Act()[2].set_data_nasterii(Data(15, "octombrie", 1961));
    cout << endl << f1.get_Act()[2] << endl;
    f1.get_Act()[2].set_nume("Matei");
    f1.get_Act()[2].set_data_nasterii(Data(10, "aprilie", 2010));
    cout << endl << f1.get_Act()[2] << endl;
    cout << "SEPARAT\n";
    for (int i = 0; i < f1.get_Act().size(); i++)
    {
        cout << f1.get_Act()[i] << endl;
    }
    cout << "\n\n\n";
    cout << f1.get_titlu() << endl;
    f1.set_titlu("Home alone");
    cout << f1.get_titlu() << endl;
    */
    
    // cout << f1.Act[0] << endl; - vector<Actor> Act este inaccesibil;
    
    ////
    /*
    string nm, nmm, er;
    getline(cin, nm);
    getline(cin, er);
    cout << nm << "\n";
    cout << er << "\n";
    */
    ////

    ///
    /*
    f3 = f2 = f1;
    cout << f2;
    cout << d1;
    Data d3 = Data(1, "iunie", 2003);
    cout << d2;
    cout << d3;
    cout << a2;
    a2.set_data_nasterii(d3);
    cout << a2;
    cout << d1;
    cout << a1;
    cout << d1;
    d1.set_zi(30);
    cout << d1;
    cout << a1;
    a1.set_data_nasterii(d1);
    cout << a1;
    cout << f1;
    f1.set_nrActori(11);
    cout << f1;
    f1 += a2;
    cout << f1;
    f1 += Actor("Dumitrescu", 1, "aprilie", 1998);
    cout << f1;
    cout << f2;
    f1.set_titlu("Avatar");
    f2 = f1;
    cout << f1;
    cout << f2;
    cout << f3;
    cout << "\n\n";
    f1 = f3 = f2; // f1 = f2;f3 = f2;
    cout << f1 << f2 << f3;
    */
    ///

    

    // Teste suplimentare:
    /*
    cout << d1.get_zi() << endl;
    cout << d2.get_zi() << endl;
    cout << endl;
    d1.set_zi(20);
    cout << d1.get_zi() << endl;
    cout << d2.get_zi() << endl;
    cout << endl;
    d2.set_zi(25);
    cout << d1.get_zi() << endl;
    cout << d2.get_zi() << endl;
    cout << endl;
    */

    /*
    cout << d1.get_luna() << endl;
    cout << d2.get_luna() << endl;
    cout << endl;
    d1.set_luna("august");
    cout << d1.get_luna() << endl;
    cout << d2.get_luna() << endl;
    cout << endl;
    d2.set_luna("mai");
    cout << d1.get_luna() << endl;
    cout << d2.get_luna() << endl;
    cout << endl;
    */

    /*
    cout << d1.get_an() << endl;
    cout << d2.get_an() << endl;
    cout << endl;
    d1.set_an(2003);
    cout << d1.get_an() << endl;
    cout << d2.get_an() << endl;
    cout << endl;
    d2.set_an(1971);
    cout << d1.get_an() << endl;
    cout << d2.get_an() << endl;
    cout << endl;
    */


    /*
    cout << a1.get_nume() << endl;
    cout << a2.get_nume() << endl;
    cout << endl;
    a1.set_nume("Mincu");
    cout << a1.get_nume() << endl;
    cout << a2.get_nume() << endl;
    cout << endl;
    a2.set_nume("Lupsa");
    cout << a1.get_nume() << endl;
    cout << a2.get_nume() << endl;
    cout << endl;
    */
    
    /*
    cout << a1.get_data_nasterii().get_zi() << " ";
    cout << a1.get_data_nasterii().get_luna() << " ";
    cout << a1.get_data_nasterii().get_an() << endl;
    cout << a2.get_data_nasterii().get_zi() << " ";
    cout << a2.get_data_nasterii().get_luna() << " ";
    cout << a2.get_data_nasterii().get_an() << endl;
    cout << endl;
    Data d_new(7, "iunie", 2003);
    a1.set_data_nasterii(d_new);
    cout << a1.get_data_nasterii().get_zi() << " ";
    cout << a1.get_data_nasterii().get_luna() << " ";
    cout << a1.get_data_nasterii().get_an() << endl;
    cout << a2.get_data_nasterii().get_zi() << " ";
    cout << a2.get_data_nasterii().get_luna() << " ";
    cout << a2.get_data_nasterii().get_an() << endl;
    cout << endl;
    Data d_new_2 = d_new;
    a2.set_data_nasterii(d_new_2);
    cout << a1.get_data_nasterii().get_zi() << " ";
    cout << a1.get_data_nasterii().get_luna() << " ";
    cout << a1.get_data_nasterii().get_an() << endl;
    cout << a2.get_data_nasterii().get_zi() << " ";
    cout << a2.get_data_nasterii().get_luna() << " ";
    cout << a2.get_data_nasterii().get_an() << endl;
    cout << endl;
    */

    
    /*
    f2.set_titlu("Home alone");
    cout << f1.get_titlu() << endl;
    cout << f2.get_titlu() << endl;
    cout << endl;
    f1.set_titlu("Fast & Furious");
    cout << f1.get_titlu() << endl;
    cout << f2.get_titlu() << endl;
    cout << endl;
    f2.set_titlu("IT");
    cout << f1.get_titlu() << endl;
    cout << f2.get_titlu() << endl;
    cout << endl;
    */
    
    /*
    f2.set_nrActori(10);
    f1.set_nrActori(19);
    cout << f1.get_nrActori() << endl;
    cout << f2.get_nrActori() << endl;
    cout << endl;
    f1.set_nrActori(45);
    cout << f1.get_nrActori() << endl;
    cout << f2.get_nrActori() << endl;
    cout << endl;
    f2.set_nrActori(70);
    cout << f1.get_nrActori() << endl;
    cout << f2.get_nrActori() << endl;
    cout << endl;

    cout << "In filmul: <<" << f1.get_titlu() << ">> joaca " << f1.get_nrActori() << " de actori!" << "\n\n";
    */
    
    //
    /*
    cout << "\n\n\nTeste suplimentare:\n";
    Film f4("Venom", 32);
    cout << f4.get_titlu() << endl;
    cout << f4.get_nrActori() << endl;
    cout << endl;
    f4.set_titlu("Teambuilding");
    cout << f4.get_titlu() << endl;
    cout << f4.get_nrActori() << endl;
    cout << endl;
    f4.set_nrActori(f4.get_nrActori() + 20);
    cout << f4.get_titlu() << endl;
    cout << f4.get_nrActori() << endl;
    cout << endl << endl;

    ///d1.printInfo_Data();
    ///d2.printInfo_Data();
    ///a1.printInfo_Actor();
    ///a2.printInfo_Actor();
    ///f4.printInfo_Film();
    */
    //
    /*
    cout << d1.check_valid_Data() << "\n\n";
    d1.set_zi(32);
    cout << d1.check_valid_Data() << "\n\n";
    */
    //

    //
    /*
    cout << f4.get_nrActori() << endl;
    f4.check_coresp_nrAct();
    */
    //

    return 0;
}

