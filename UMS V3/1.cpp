#include <iostream>
using namespace std;
void RoomAllotment(string name1, string name2, string name3, string name4, float st1_aggr, float st2_aggr, float st3_aggr, float st4_aggr)
{
    if (st1_aggr > st2_aggr && st1_aggr > st3_aggr && st1_aggr > st4_aggr)
    {
        if (st2_aggr > st3_aggr && st2_aggr > st4_aggr)
        {
            if (st3_aggr > st4_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name1 << "\t\tRoom 1";
                cout << name2 << "\t\tRoom 2";
                cout << name3 << "\t\tRoom 3";
                cout << name4 << "\t\tRoom 4";
            }
            else if (st4_aggr > st3_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name1 << "\t\tRoom 1";
                cout << name2 << "\t\tRoom 2";
                cout << name4 << "\t\tRoom 3";
                cout << name3 << "\t\tRoom 4";
            }
        }
        else if (st3_aggr > st2_aggr && st3_aggr > st4_aggr)
        {
            if (st2_aggr > st4_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name1 << "\t\tRoom 1";
                cout << name3 << "\t\tRoom 2";
                cout << name2 << "\t\tRoom 3";
                cout << name4 << "\t\tRoom 4";
            }
            if (st4_aggr > st2_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name1 << "\t\tRoom 1";
                cout << name3 << "\t\tRoom 2";
                cout << name4 << "\t\tRoom 3";
                cout << name2 << "\t\tRoom 4";
            }
        }
        else if (st4_aggr > st2_aggr && st4_aggr > st3_aggr)
        {
            if (st2_aggr > st3_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name1 << "\t\tRoom 1";
                cout << name4 << "\t\tRoom 2";
                cout << name2 << "\t\tRoom 3";
                cout << name3 << "\t\tRoom 4";
            }
            else if (st3_aggr > st2_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name1 << "\t\tRoom 1";
                cout << name4 << "\t\tRoom 2";
                cout << name3 << "\t\tRoom 3";
                cout << name2 << "\t\tRoom 4";
            }
        }
    }

    else if (st2_aggr > st1_aggr && st2_aggr > st3_aggr && st2_aggr > st4_aggr)
    {
        if (st1_aggr > st3_aggr && st1_aggr > st4_aggr)
        {
            if (st3_aggr > st4_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name2 << "\t\tRoom 1";
                cout << name1 << "\t\tRoom 2";
                cout << name3 << "\t\tRoom 3";
                cout << name4 << "\t\tRoom 4";
            }
            else if (st4_aggr > st3_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name2 << "\t\tRoom 1";
                cout << name1 << "\t\tRoom 2";
                cout << name4 << "\t\tRoom 3";
                cout << name3 << "\t\tRoom 4";
            }
        }
        else if (st3_aggr > st1_aggr && st3_aggr > st4_aggr)
        {
            if (st1_aggr > st4_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name2 << "\t\tRoom 1";
                cout << name3 << "\t\tRoom 2";
                cout << name1 << "\t\tRoom 3";
                cout << name4 << "\t\tRoom 4";
            }
            if (st4_aggr > st1_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name2 << "\t\tRoom 1";
                cout << name3 << "\t\tRoom 2";
                cout << name4 << "\t\tRoom 3";
                cout << name1 << "\t\tRoom 4";
            }
        }
        else if (st4_aggr > st1_aggr && st4_aggr > st3_aggr)
        {
            if (st1_aggr > st3_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name2 << "\t\tRoom 1";
                cout << name4 << "\t\tRoom 2";
                cout << name1 << "\t\tRoom 3";
                cout << name3 << "\t\tRoom 4";
            }
            else if (st3_aggr > st1_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name2 << "\t\tRoom 1";
                cout << name4 << "\t\tRoom 2";
                cout << name3 << "\t\tRoom 3";
                cout << name1 << "\t\tRoom 4";
            }
        }
    }
    else if (st3_aggr > st1_aggr && st3_aggr > st2_aggr && st3_aggr > st4_aggr)
    {
        if (st1_aggr > st2_aggr && st1_aggr > st4_aggr)
        {
            if (st2_aggr > st4_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name3 << "\t\tRoom 1";
                cout << name1 << "\t\tRoom 2";
                cout << name2 << "\t\tRoom 3";
                cout << name4 << "\t\tRoom 4";
            }
            else if (st4_aggr > st2_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name3 << "\t\tRoom 1";
                cout << name1 << "\t\tRoom 2";
                cout << name4 << "\t\tRoom 3";
                cout << name2 << "\t\tRoom 4";
            }
        }
        else if (st2_aggr > st1_aggr && st2_aggr > st4_aggr)
        {
            if (st1_aggr > st4_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name3 << "\t\tRoom 1";
                cout << name2 << "\t\tRoom 2";
                cout << name1 << "\t\tRoom 3";
                cout << name4 << "\t\tRoom 4";
            }
            if (st4_aggr > st1_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name3 << "\t\tRoom 1";
                cout << name2 << "\t\tRoom 2";
                cout << name4 << "\t\tRoom 3";
                cout << name1 << "\t\tRoom 4";
            }
        }
        else if (st4_aggr > st1_aggr && st4_aggr > st2_aggr)
        {
            if (st1_aggr > st2_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name3 << "\t\tRoom 1";
                cout << name4 << "\t\tRoom 2";
                cout << name1 << "\t\tRoom 3";
                cout << name2 << "\t\tRoom 4";
            }
            else if (st2_aggr > st1_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name3 << "\t\tRoom 1";
                cout << name4 << "\t\tRoom 2";
                cout << name2 << "\t\tRoom 3";
                cout << name1 << "\t\tRoom 4";
            }
        }
    }
    else if (st4_aggr > st1_aggr && st4_aggr > st2_aggr && st4_aggr > st3_aggr)
    {
        if (st1_aggr > st2_aggr && st1_aggr > st3_aggr)
        {
            if (st2_aggr > st3_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name4 << "\t\tRoom 1";
                cout << name1 << "\t\tRoom 2";
                cout << name2 << "\t\tRoom 3";
                cout << name3 << "\t\tRoom 4";
            }
            else if (st3_aggr > st2_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name4 << "\t\tRoom 1";
                cout << name1 << "\t\tRoom 2";
                cout << name3 << "\t\tRoom 3";
                cout << name2 << "\t\tRoom 4";
            }
        }
        else if (st2_aggr > st1_aggr && st2_aggr > st3_aggr)
        {
            if (st1_aggr > st3_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name4 << "\t\tRoom 1";
                cout << name2 << "\t\tRoom 2";
                cout << name1 << "\t\tRoom 3";
                cout << name3 << "\t\tRoom 4";
            }
            if (st3_aggr > st1_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name4 << "\t\tRoom 1";
                cout << name2 << "\t\tRoom 2";
                cout << name3 << "\t\tRoom 3";
                cout << name1 << "\t\tRoom 4";
            }
        }
        else if (st3_aggr > st1_aggr && st3_aggr > st2_aggr)
        {
            if (st1_aggr > st2_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name4 << "\t\tRoom 1";
                cout << name3 << "\t\tRoom 2";
                cout << name1 << "\t\tRoom 3";
                cout << name2 << "\t\tRoom 4";
            }
            else if (st2_aggr > st1_aggr)
            {
                cout << "Name\t\tRoom No." << endl;
                cout << name4 << "\t\tRoom 1";
                cout << name3 << "\t\tRoom 2";
                cout << name2 << "\t\tRoom 3";
                cout << name1 << "\t\tRoom 4";
            }
        }
    }
}
int main()
{
    string name1, name2, name3, name4;
    int st1_aggr, st2_aggr, st3_aggr, st4_aggr;

    return 0;
}