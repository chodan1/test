#include <iostream>

using namespace std;

int main()
{
    cout << "Learning: " << endl;
    cout << "::, const, volatile, struct, union, enum, arrays, sizeof, typedef" << endl;


    // global variables

    auto int i;    //auto is optional
    int j;
    int k;
    short int si;
    int* ptr;
    typedef char letter;  // alaising data type char as letter;
    float flt;
    long int long_i;
    float d_flt;
    char d_char;
    int sizes [] = {'int',j, '*ptr','float','flt','long_i', 'd_char','\0'};

    struct golfbag {
        char club;
        int swing;
        float meas;
    };

    union golfstroke {              // members rotation and speed share the same memory location.
                                    // compiler will allocate the memory to store the widest member.
        char rotation;              // full, half, quarter
        int speed;                  // slow, medium, fast
    };

    golfbag micky {'d', 5, 100.3};   // declaring struct(micky) and initializing members of struct micky.

     golfstroke micky_st;           // Union type golfstroke declared as micky_st,
        micky_st.rotation = 'h';     // initializing rotation
        micky_st.speed = 96;        // initializing speed


        //
        ptr = &micky_st.speed;
        d_char= micky_st.rotation;

     cout<< "micky.club= : "<< micky.club<< endl;
     cout<< "micky.swing= : "<< micky.swing<< endl;
     cout<< "micky.meas= : "<< micky.meas<< endl;

     cout << "address of speed: "<< ptr<< endl;
     cout << "content of of speed: "<< *ptr<< endl;
     cout << "micky_st.rotation: "<< d_char <<endl;    //???? don't know why this does not print "h"???
     cout << "value of micky_st.speed: "<< micky_st.speed<< endl;
     cout << "size of micky_st.speed: "<< sizeof(micky_st.speed)<< endl;




    letter test = 't';          // typedef application. letter is alias for datatype char!!



  enum selection { level1=1, level2, level3};// enumerated data type ;

      cout<< "enter selection"<< endl;
      cin >> j;

      switch (j) {

      case level1:                      \\ using level1 enumerated as 1


      cout<< "sizeof (float) "<< sizeof (float)<< endl;
       cout<< "sizeof (char) "<< sizeof (char)<< endl;
        cout<< "sizeof (letter) "<< sizeof (letter)<< endl;
         cout<< "sizeof (test) "<< sizeof test<< endl;
          break;

      case level2:                      \\ using level2 enumerated as 2



        cout<< "sizeof i "<< sizeof i<< endl;
         cout<< "sizeof (j) "<< sizeof (j)<< endl;
          cout<< "sizeof (&j) "<< sizeof (&j)<< endl;
           cout<< "sizeof (shortint) "<< sizeof (short int)<< endl;
            cout<< "sizeof (long int) "<< sizeof long_i<< endl;
             break;

      case level3:                      \\ using level3 enumerated as 3



             cout<< "sizeof (si) "<< sizeof si<< endl;
             cout<< "sizeof struct (golbag micky) "<< sizeof micky<< endl;
              cout<< "sizeof (golfstroke) "<< sizeof micky_st<< endl;
        }












}
