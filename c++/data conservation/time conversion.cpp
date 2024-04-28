#include<iostream>
#include<string>
#include<cstring> // Added for strcmp and strupr
using namespace std;

class time24hrs
{
    int hour, minute, second;

public:
    time24hrs()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    time24hrs(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    int returnHour() const { return hour; }
    int returnMinute() const { return minute; }
    int returnSecond() const { return second; }

    void showFrom24()
    {
        cout << hour << ":" << minute << ":" << second;
    }
};

class timeform12
{
    int hour, minute, second;
    bool pm;

public:
    timeform12()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    timeform12(int h, int m, int s, const char *t)
    {
        hour = h;
        minute = m;
        second = s;

        if (strcmp(strupr(t), "PM") == 0)
            pm = true;
        else
            pm = false;
    }

    // time conversion
    timeform12(time24hrs time)
    {
        hour = time.returnHour() % 12;
        minute = time.returnMinute();
        second = time.returnSecond();
        pm = time.returnHour() >= 12;  // Simplified the expression
    }

    // operator function for time conversion
    operator time24hrs() const
    {
        int hrs = pm ? hour + 12 : hour;
        int mins = minute;
        int sec = second;
        return time24hrs(hrs, mins, sec);
    }

    void showFrom12()
    {
        cout << hour << ":" << minute << ":" << second;
        cout << (pm ? " PM" : " AM");
    }
};

int main()
{
    // Example usage
    time24hrs time24(15, 30, 45);
    time24.showFrom24();
    cout << endl;

    timeform12 time12 = time24;
    time12.showFrom12();
    cout << endl;

    time24hrs convertedTime = time12;
    convertedTime.showFrom24();

    return 0;
}
