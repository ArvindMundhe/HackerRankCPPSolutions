#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{
    string hh = s.substr(0, 2), mm, ss;
    if (s[8] == 'P')
    {
        if (stoi(hh) != 12)
        {
            hh = to_string(12 + stoi(hh));
        }

        return hh + ":" + s.substr(3, 5);
    }
    else
    {
        if(stoi(hh) == 12)
        {
            hh="00";
        }
        return hh + ":" + s.substr(3, 5);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
