int main()
{
    int Jan[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int i;

    int s = sizeof(Jan)/sizeof(int);

    enum month{jan=1, feb, mar, april, may, june, july, aug, sept, oct, nov, dec};
    enum days{sun,mon, tues, wed, thurs, fri, sat};

    cout << "elements in array : "<< s<<endl;

    cout << "***January***"<< endl;
    cout << "S  M  T  W  T  F  S" << endl;
   
    
   
    for (i=0; i<7  ; i++)
        cout <<Jan[i]<<"  ";
        cout << endl;
    for (i=7; i<=10; i++)      //split for screen formatting of single digit vs double
        cout <<Jan[i]<<"  ";

    for (i=11; i<14; i++)
        cout <<Jan[i]<<" ";
        cout<< endl;

    for (i=14; i<21; i++)
        cout <<Jan[i]<<" ";
        cout<<endl;
    for (i=21; i<28; i++)
        cout <<Jan[i]<<" ";
        cout<<endl;
    for (i=28; i<s; i++)
        cout <<Jan[i]<<" ";
        cout<<endl;
}
