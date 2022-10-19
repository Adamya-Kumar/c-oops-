#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float Rating;

public:
    CWH(string s, float r)
    {
        title = s;
        Rating = r;
    }
    virtual void display() { cout << "Cwh display is called " << endl; }
};
class CWH_video : public CWH
{
    int lenght;

public:
    CWH_video(string s, float r, int l) : CWH(s, r)
    {
        lenght = l;
    }
    void display()
    {
        cout << "title : " << title << endl;
        cout << "Rating : " << Rating << endl;
        cout << "lenght : " << lenght << endl;
    }
};

class CWH_text : public CWH
{
    int text;

public:
    CWH_text(string s, float r, int w) : CWH(s, r)
    {
        text = w;
    }
    void display()
    {
        cout << "title : " << title << endl;
        cout << "Rating : " << Rating << endl;
        cout << "words : " << text << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWH_video djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWH_text djText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();
}