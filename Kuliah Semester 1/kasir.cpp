#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
    private: 
        int pcode;
        float price;
        float disc;
        string pname;

        public:
            void menu();
            void administrator();
            void buyer();
            void add();
            void edit();
            void rem();
            void list();
            void receipt();

}

void shopping::menu()
{
    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t____________________________\n";
    cout<<"\t\t\t\t                            \n";
    cout<<"\t\t\t\t    Supermarket Main Menu   \n";
    cout<<"\t\t\t\t                            \n";
    cout<<"\t\t\t\t____________________________\n";
    cout<<"\t\t\t\t|   1)  Administrator   |\n";
    cout<<"\t\t\t\t|                       |\n";
    cout<<"\t\t\t\t|   1)  Buyer           |\n";
    cout<<"\t\t\t\t|                       |\n";
    cout<<"\t\t\t\t|   3)  Exit            |\n";
    cout<<"\t\t\t\t|                       |\n";
    cout<<"\n\t\t\t  Please select!";
    cin>>choice;
    
    switch(choice){
        case 1:
            cout<<"\t\t\t Please Login First! \n";
            cout<<"\t\t\t Enter Email         \n";
            cin>>email;
            cout<<"\t\t\t Password            \n";
            cin>>password;

            if(email="lintangashshofa@gmail.com" && password="admin123")
            {
                administrator();
            }
            else
            {
                cout<<"\t\t\t Invalid Username or Password \n";
            }
            break;

        case 2:
            {
                buyer();
            }
        
        case 3:
            {
                exit(0);
            }

            default :
                {
                    cout<<"Please select from the given options!";
                }
}
goto m;
}

void shopping::administrator()
{
    m:
    int choice;
    cout<<"\n\n\n\t\t\t Administrator Menu             |";
    cout<<"\n\t\t\t|_____1) Tambah Produk______________|";
    cout<<"\n\t\t\t|                                   |";
    cout<<"\n\t\t\t|_____2) Ubah Produk________________|";
    cout<<"\n\t\t\t|                                   |";
    cout<<"\n\t\t\t|_____3) Hapus Produk_______________|";
    cout<<"\n\t\t\t|                                   |";
    cout<<"\n\t\t\t|_____4) Kembali Ke Halaman Utama___|";

    cout<<"\n\n\t  Submit Perubahan yang Ada!   ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        add();
        break;
    
    case 2:
        edit();
        break;

    case 3:
        rem();
        break;

    case 4:
        menu();
        break;

    default:
        cout<<"Invalid!";
    }
    goto m;
}

void shopping::buyer()
{
    m:
    int choice;
    cout<<"\t\t\t       Buyer \n";
    cout<<"\t\t\t________________________\n";
    cout<<"                              \n";
    cout<<"\t\t\t 1) Buy Product         \n";
    cout<<"                              \n";
    cout<<"\t\t\t 2) Go Back             \n";
    cout<<"\t\t\t    Enter your choice :   ";

    cin>>choice;

    switch (choice)
    {
    case 1:
        receipt();
        break;
    
    case 2:
        menu();
        break;

    default:
        cout<<"Invalid choice!";
    }
    goto m;
}

void shopping::add()
{
    fstream default;
    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout<<""
}