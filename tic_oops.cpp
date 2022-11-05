#include <bits/stdc++.h>
using namespace std;
string a[4][4];
int n1 = 9;
class tic_toc
{
private:
    int n, r, count1;

public:
    int next, t, com, choice1, esle, score1, score2, size;
    string name1, name2;
    tic_toc(int x)
    {
        next = 1;
        n = 7;
        r = 7;
        t = 1;
        size = x;
        choice1 = 1;
        name1="Player 1";
        name2="Player 2";
        for (int i = 1; i < size + 1; i++)
        {
            for (int j = 1; j < size + 1; j++)
            {
                a[i][j] = "[ ]";
            }
        }
    }
    void draw_tic_toc();
    void input();
    void result();
    void computer_play();
    void interesting();
    void check();
};
void tic_toc::draw_tic_toc()
{
    system("cls");
    for (int i = 1; i < size + 1; i++)
    {
        for (int j = 1; j < size + 1; j++)
        {
            if (t == 1)
            {
                if (i == r && j == n)
                    a[i][j] = "[O]";
            }
            if (t == 2)
            {
                if (i == r && j == n)
                    a[i][j] = "[X]";
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << name1 << " win times : " << score1 << "      "<<name2<<" win times : " << score2 << endl;
}
void tic_toc ::result()
{
    string s = "[ ]";
    if (size == 3)
    {
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 2] && a[i][1] != s)
                {
                    if (a[i][1] == "[X]")
                    {
                        cout << "--------"<<name2<<" Win--------" << endl;
                        score2++;
                        next = 0;
                    }
                    else if (a[i][1] == "[O]")
                    {
                        cout << "--------"<<name1<<" Win--------" << endl;
                        next = 0;
                        score1++;
                    }
                }
            }
        }
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[j][i] == a[j + 1][i] && a[j + 1][i] == a[j + 2][i] && a[1][i] != s)
                {
                    if (a[1][i] == "[X]")
                    {
                        cout << "--------"<<name2<<" Win--------" << endl;
                        next = 0;
                        score2++;
                    }
                    else if (a[1][i] == "[O]")
                    {
                        cout << "--------"<<name1<<" Win--------" << endl;
                        next = 0;
                        score1++;
                    }
                }
            }
        }
        if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != s)
        {
            if (a[1][1] == "[X]")
            {
                cout << "--------"<<name2<<" Win--------" << endl;
                next = 0;
                score2++;
            }
            else if (a[1][1] == "[O]")
            {
                cout << "--------"<<name1<<" Win--------" << endl;
                next = 0;
                score1++;
            }
        }
        else if (a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3] != s)
        {
            if (a[1][3] == "[X]")
            {
                cout << "--------"<<name2<<" Win--------" << endl;
                next = 0;
                score2++;
            }
            else if (a[1][3] == "[O]")
            {
                cout << "--------"<<name1<<" Win--------" << endl;
                next = 0;
                score1++;
            }
        }
    }
    if (size == 4)
    {
        for (int i = 1; i < 5; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 2] && a[i][j + 2] == a[i][j + 3] && a[i][1] != s)
                {
                    if (a[i][1] == "[X]")
                    {
                        cout << "--------"<<name2<<" Win--------" << endl;
                        score2++;
                        next = 0;
                    }
                    else if (a[i][1] == "[O]")
                    {
                        cout << "--------"<<name1<<" Win--------" << endl;
                        next = 0;
                        score1++;
                    }
                }
            }
        }
        for (int i = 1; i < 5; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[j][i] == a[j + 1][i] && a[j + 1][i] == a[j + 2][i] && a[j + 2][i] == a[j + 3][i] && a[1][i] != s)
                {
                    if (a[1][i] == "[X]")
                    {
                        cout << "--------"<<name2<<" Win--------" << endl;
                        next = 0;
                        score2++;
                    }
                    else if (a[1][i] == "[O]")
                    {
                        cout << "--------"<<name1<<" Win--------" << endl;
                        next = 0;
                        score1++;
                    }
                }
            }
        }
        if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[3][3] == a[4][4] && a[1][1] != s)
        {
            if (a[1][1] == "[X]")
            {
                cout << "--------"<<name2<<" Win--------" << endl;
                next = 0;
                score2++;
            }
            else if (a[1][1] == "[O]")
            {
                cout << "--------"<<name1<<" Win--------" << endl;
                next = 0;
                score1++;
            }
        }
        else if (a[1][4] == a[2][3] && a[2][3] == a[3][2] && a[3][2] == a[4][1] && a[1][4] != s)
        {
            if (a[1][4] == "[X]")
            {
                cout << "--------"<<name2<<" Win--------" << endl;
                next = 0;
                score2++;
            }
            else if (a[1][4] == "[O]")
            {
                cout << "--------"<<name2<<" Win--------" << endl;
                next = 0;
                score1++;
            }
        }
    }
}
void tic_toc ::interesting()
{
    if (size == 3)
    {
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[i][j] == a[i][j + 1] && a[i][j] != "[ ]" && a[i][j + 2] == "[ ]")
                {
                    r = i;
                    n = j + 2;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i][j + 2] && a[i][j] != "[ ]" && a[i][j + 1] == "[ ]")
                {
                    r = i;
                    n = j + 1;
                    esle = 0;
                    break;
                }
                else if (a[i][j + 1] == a[i][j + 2] && a[i][j + 1] != "[ ]" && a[i][j] == "[ ]")
                {
                    r = i;
                    n = j;
                    esle = 0;
                    break;
                }
            }
        }
        for (int j = 1; j < 4; j++)
        {
            for (int i = 1; i < 2; i++)
            {
                if (a[i][j] == a[i + 1][j] && a[i][j] != "[ ]" && a[i + 2][j] == "[ ]")
                {
                    r = i + 2;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i + 2][j] && a[i][j] != "[ ]" && a[i + 1][j] == "[ ]")
                {
                    r = i + 1;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i + 1][j] == a[i + 2][j] && a[i + 1][j] != "[ ]" && a[i][j] == "[ ]")
                {
                    r = i;
                    n = j;
                    esle = 0;
                    break;
                }
            }
        }
        if (a[1][1] == a[2][2] && a[1][1] != "[ ]" && a[3][3] == "[ ]")
        {
            r = 3;
            n = 3;
            esle = 0;
        }
        else if (a[1][1] == a[3][3] && a[1][1] != "[ ]" && a[2][2] == "[ ]")
        {
            r = 2;
            n = 2;
            esle = 0;
        }
        else if (a[3][3] == a[2][2] && a[2][2] != "[ ]" && a[1][1] == "[ ]")
        {
            r = 1;
            n = 1;
            esle = 0;
        }
        else if (a[1][3] == a[2][2] && a[2][2] != "[ ]" && a[3][1] == "[ ]")
        {
            r = 3;
            n = 1;
            esle = 0;
        }
        else if (a[1][3] == a[3][1] && a[1][3] != "[ ]" && a[2][2] == "[ ]")
        {
            r = 2;
            n = 2;
            esle = 0;
        }
        else if (a[3][1] == a[2][2] && a[3][1] != "[ ]" && a[1][3] == "[ ]")
        {
            r = 1;
            n = 3;
            esle = 0;
        }
    }
    if (size == 4)
    {
        for (int i = 1; i < 5; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 2] && a[i][j] != "[ ]" && a[i][j + 3] == "[ ]")
                {
                    r = i;
                    n = j + 3;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i][j + 2] && a[i][j + 2] == a[i][j + 3] && a[i][j] != "[ ]" && a[i][j + 1] == "[ ]")
                {
                    r = i;
                    n = j + 1;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 3] && a[i][j] != "[ ]" && a[i][j + 2] == "[ ]")
                {
                    r = i;
                    n = j + 2;
                    esle = 0;
                    break;
                }
                else if (a[i][j + 1] == a[i][j + 2] && a[i][j + 2] == a[i][j + 3] && a[i][j + 1] != "[ ]" && a[i][j] == "[ ]")
                {
                    r = i;
                    n = j;
                    esle = 0;
                    break;
                }
            }
        }
        for (int j = 1; j < 5; j++)
        {
            for (int i = 1; i < 2; i++)
            {
                if (a[i][j] == a[i + 1][j] && a[i + 1][j] == a[i + 3][j] && a[i][j] != "[ ]" && a[i + 2][j] == "[ ]")
                {
                    r = i + 2;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i + 2][j] && a[i][j] == a[i + 3][j] && a[i][j] != "[ ]" && a[i + 1][j] == "[ ]")
                {
                    r = i + 1;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i + 2][j] && a[i][j] == a[i + 1][j] && a[i][j] != "[ ]" && a[i + 3][j] == "[ ]")
                {
                    r = i + 1;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i + 1][j] == a[i + 2][j] && a[i + 1][j] == a[i + 3][j] && a[i + 1][j] != "[ ]" && a[i][j] == "[ ]")
                {
                    r = i;
                    n = j;
                    esle = 0;
                    break;
                }
            }
        }
        if (a[1][1] == a[2][2] && a[1][1] == a[4][4] && a[1][1] != "[ ]" && a[3][3] == "[ ]")
        {
            r = 3;
            n = 3;
            esle = 0;
        }
        else if (a[1][1] == a[3][3] && a[1][1] == a[4][4] && a[1][1] != "[ ]" && a[2][2] == "[ ]")
        {
            r = 2;
            n = 2;
            esle = 0;
        }
        else if (a[3][3] == a[2][2] && a[4][4] == a[2][2] && a[2][2] != "[ ]" && a[1][1] == "[ ]")
        {
            r = 1;
            n = 1;
            esle = 0;
        }
        else if (a[3][3] == a[2][2] && a[1][1] == a[2][2] && a[2][2] != "[ ]" && a[4][4] == "[ ]")
        {
            r = 4;
            n = 4;
            esle = 0;
        }
        else if (a[1][4] == a[2][3] && a[2][3] != "[ ]" && a[2][3] == a[3][2] && a[4][1] == "[ ]")
        {
            r = 4;
            n = 1;
            esle = 0;
        }
        else if (a[1][4] == a[4][1] && a[1][4] != "[ ]" && a[1][4] == a[3][2] && a[2][3] == "[ ]")
        {
            r = 2;
            n = 3;
            esle = 0;
        }
        else if (a[1][4] == a[4][1] && a[1][4] != "[ ]" && a[1][4] == a[2][3] && a[3][2] == "[ ]")
        {
            r = 3;
            n = 2;
            esle = 0;
        }
        else if (a[4][1] == a[2][3] && a[2][3] == a[3][2] && a[4][1] != "[ ]" && a[1][4] == "[ ]")
        {
            r = 1;
            n = 4;
            esle = 0;
        }
    }
}
void tic_toc ::input()
{
    if (size == 3)
    {
        if (t == 1)
        {
            cout << "First person Turn : ";
            cin >> n;
            if (n < 4)
            {
                r = 1;
            }
            if (n > 3 && n < 7)
            {
                r = 2;
                n -= 3;
            }

            if (n > 6 && n < 10)
            {
                r = 3;
                n -= 6;
            }
        }
        if (t == 2)
        {
            if (com == 2)
            {
                cout << "Second person Turn : ";
                cin >> n;
                if (n < 4)
                {
                    r = 1;
                }
                if (n > 3 && n < 7)
                {
                    r = 2;
                    n -= 3;
                }

                if (n > 6 && n < 10)
                {
                    r = 3;
                    n -= 6;
                }
            }
            if (com == 1)
            {
                if (choice1 == 1)
                {
                    esle = 1;
                    interesting();
                    if (esle == 1)
                    {
                        n = rand() % 10;
                        if (n < 4)
                        {
                            r = 1;
                        }
                        if (n > 3 && n < 7)
                        {
                            r = 2;
                            n -= 3;
                        }

                        if (n > 6 && n < 10)
                        {
                            r = 3;
                            n -= 6;
                        }
                    }
                }
                if (choice1 == 2)
                {
                    esle = 1;
                    computer_play();
                }
            }
        }
    }
    if (size == 4)
    {
        if (t == 1)
        {
            cout << "First person Turn : ";
            cin >> n;
            if (n < 5)
            {
                r = 1;
            }
            if (n > 4 && n < 9)
            {
                r = 2;
                n -= 4;
            }
            if (n > 8 && n < 13)
            {
                r = 3;
                n -= 8;
            }
            if (n > 12 && n < 17)
            {
                r = 4;
                n -= 12;
            }
        }
        if (t == 2)
        {
            if (com == 2)
            {
                cout << "Second person Turn : ";
                cin >> n;
                if (n < 5)
                {
                    r = 1;
                }
                if (n > 4 && n < 9)
                {
                    r = 2;
                    n -= 4;
                }
                if (n > 8 && n < 13)
                {
                    r = 3;
                    n -= 8;
                }
                if (n > 12 && n < 17)
                {
                    r = 4;
                    n -= 12;
                }
            }
            if (com == 1)
            {
                if (choice1 == 1)
                {
                    esle = 1;
                    interesting();
                    if (esle == 1)
                    {
                        n = rand() % 17;
                        if (n < 5)
                        {
                            r = 1;
                        }
                        if (n > 4 && n < 9)
                        {
                            r = 2;
                            n -= 4;
                        }
                        if (n > 8 && n < 13)
                        {
                            r = 3;
                            n -= 8;
                        }
                        if (n > 12 && n < 17)
                        {
                            r = 4;
                            n -= 12;
                        }
                    }
                }
                if (choice1 == 2)
                {
                    esle = 1;
                    computer_play();
                }
            }
        }
    }
}
void tic_toc ::computer_play()
{
    if (a[2][2] == "[ ]")
    {
        r = 2;
        n = 2;
    }
    else
    {
        interesting();
        if (esle == 0)
        {
            goto label3;
        }
        else
        {
        label1:
            int k1 = rand() % 10;
            if (k1 == 1 || k1 == 3 || k1 == 7 || k1 == 9)
            {
                if (k1 < 4)
                {
                    r = 1;
                    n = k1;
                    goto label3;
                }
                else if (k1 > 6)
                {
                    r = 3;
                    n = k1 - 6;
                    goto label3;
                }
                else if (a[r][n] != "[ ]")
                {
                    n = rand() % 10;
                    if (n < 4)
                    {
                        r = 1;
                        goto label3;
                    }
                    else if (n > 3 && n < 7)
                    {
                        r = 2;
                        n -= 3;
                        goto label3;
                    }

                    else if (n > 6 && n < 10)
                    {
                        r = 3;
                        n -= 6;
                        goto label3;
                    }
                }
            }
            else if (count1 == 4)
            {
                n = rand() % 10;
                if (n < 4)
                {
                    r = 1;
                    goto label3;
                }
                else if (n > 3 && n < 7)
                {
                    r = 2;
                    n -= 3;
                    goto label3;
                }

                else if (n > 6 && n < 10)
                {
                    r = 3;
                    n -= 6;
                    goto label3;
                }
            }
            else if (count1 >= 4 && n1 > 0)
            {
                n = rand() % 10;
                if (n < 4)
                {
                    r = 1;
                    goto label3;
                }
                else if (n > 3 && n < 7)
                {
                    r = 2;
                    n -= 3;
                    goto label3;
                }

                else if (n > 6 && n < 10)
                {
                    r = 3;
                    n -= 6;
                    goto label3;
                }
            }
            else
            {
                count1++;
                goto label1;
            }
        }
    }
label3:
    check();
}
void tic_toc ::check()
{
    if (a[r][n] != "[ ]")
    {
        cout << "Input is repeated So Again ";
        input();
        check();
    }
}
void Welcome()
{
    system("cls");
    cout << "               *********************\n";
    cout << "               | YOUR    WELCOME   |\n";
    cout << "               *********************" << endl;
}
void Thank_you()
{
    cout << "               *********************\n";
    cout << "               |      THANK YOU    |\n";
    cout << "               *********************" << endl;
}
int main()
{
come1:
    Welcome();
    int size;
    cout << "Enter size : ";
    cin >> size;
    int n = 3;
    if (size == 4)
        n1 = 16;
    int one = 0;
come:
    tic_toc t1(size);
    cout << "If you want take player name then Enter 1\nElse Enter 2\n";
    int name;
    cin >> name;
    if (name == 1)
    {
        cout << "Enter name of player 1 : ";
        cin >> t1.name1;
        cout << "Enter name of player 2 : ";
        cin >> t1.name2;
    }
    if (one == 0)
    {
        if (n == 3)
        {
            cout << "For two player : Enter-2\nFor One player : Enter-1\nEnter Choice :-";
            cin >> t1.com;
        }
        if (t1.com == 1 && size == 3)
        {
            cout << "Choose the level : \nFor Level 1. Enter 1\nFor Level 2. Enter 2.\nEnter Choice : ";
            cin >> t1.choice1;
        }
        t1.score1 = 0;
        t1.score2 = 0;
        one = 1;
    }
    t1.draw_tic_toc();
    while (n1--)
    {
        t1.input();
        t1.check();
        t1.draw_tic_toc();
        t1.result();
        if (t1.t == 1)
            t1.t = 2;
        else
        {
            t1.t = 1;
        }
        int a = t1.score1;
        int b = t1.score2;
        if (t1.next == 0 || n1 == 0)
        {
            cout << endl;
            if (t1.t == 1)
                t1.t = 2;
            else
            {
                t1.t = 1;
            }
            t1.draw_tic_toc();
            t1.result();
            if (t1.score1 > a)
                t1.score1--;
            if (t1.score2 > b)
                t1.score2--;
            if (n1 == 0 && t1.next != 0)
                cout << "-----Game draw------" << endl;
            cout << "Enter 1. : To play again" << endl;
            if (t1.com == 1 && size == 3)
                cout << "Enter 2. : To change level" << endl;
            cout << "Enter 3. : To start game with Starting \nEnter 0 : For exit" << endl;
            if (size == 3)
                n1 = 9;
            else
                n1 = 16;
            cout << "Enter choice : ";
            cin >> n;
            if (n == 1)
                goto come;
            if (n == 3 || n == 2)
                goto come1;
            if (n == 0)
            {
                Thank_you();
                exit(0);
            }
        }
    }
    return 0;
}