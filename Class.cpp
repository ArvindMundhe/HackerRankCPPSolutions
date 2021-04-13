#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    int age, strd;
    string agestring, strdstring;

    string fname, lname;

public:
    void set_age(int a)
    {
        age = a;
    }
    void set_standard(int b)
    {
        strd = b;
    }
    void set_first_name(string k)
    {
        fname = k;
    }

    void set_last_name(string k)
    {

        lname = k;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return strd;
    }
    string get_last_name()
    {
        return lname;
    }
    string get_first_name()
    {
        return fname;
    }

    string to_string()
    {
        stringstream ss;
        ss << age << "," << fname << "," << lname << "," << strd;
        return ss.str();
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}