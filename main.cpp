#include <iostream>

using namespace std;

int main()
{
    char transaction_ID[20];
    char cashier_name[20];
    char item_number[20];
    int price_1, price_2, price_3;
    int total;
    int change;
    int amount;

    for (int a=0; a<2; ++a){

    cout<<"\t***JORDAN ENTERPRISES LTD***"<<endl;
    cout<<"transaction in:900"<<endl;
    cout<<"number of items:3"<<endl;
    cout<<"price of first item"<<endl;
    cin>>price_1;
    cout<<"price of second item"<<endl;
    cin>>price_2;
    cout<<"price of third item"<<endl;
    cin>>price_3;
    cout<<"............................"<<endl;
    cout<<"AMOUNT PAID:"<<endl;
    cin>>amount;
    total=price_1+ price_2+ price_3;
    change=amount-total;
    cout<<"............................"<<endl;
    cout<<"BILL TOTAL:"<<endl;
     total==price_1+ price_2+ price_3;
    cout<<total<<endl;
    cout<<"............................"<<endl;
    cout<<"CHANGE:"<<endl;
    change==amount-total;
    cout<<change<<endl;
    cout<<"served by:"<<endl;
    cin>>cashier_name;
    cout<<"\t***thank you***"<<endl;


    }


    return 0;
}
