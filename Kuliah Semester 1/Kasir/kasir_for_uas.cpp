#include <iostream>
#include <fstream>

using namespace std;

class belanja
{
	// define the variabel yang digunakan
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

};

// menu utama
void belanja::menu()
{
    begin:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t_____________________________________________\n";
    cout<<"\t\t\t\t                                             \n";
    cout<<"\t\t\t\t             Havivya Main Menu :)            \n";
    cout<<"\t\t\t\t               Have a Good Day!              \n";
    cout<<"\t\t\t\t     Jangan lupa mulai dengan bismillah!     \n";
    cout<<"\t\t\t\t                                             \n";
    cout<<"\t\t\t\t_____________________________________________\n";
    cout<<"\t\t\t\t|                          |\n";
    cout<<"\t\t\t\t|   1)  Admin              |\n";
    cout<<"\t\t\t\t|                          |\n";
    cout<<"\t\t\t\t|   2)  Buyer              |\n";
    cout<<"\t\t\t\t|                          |\n";
    cout<<"\t\t\t\t|   3)  Exit               |\n";
    cout<<"\t\t\t\t|                          |\n";
    cout<<"\n\t\t\t  Please select who you are!";
    cin>>choice;
    
    // pemilihan casenya
    switch(choice){
        case 1:
            cout<<"\t\t\t Please Login First! \n";
            cout<<"\t\t\t Enter Email         \n";
            cin>>email;
            cout<<"\t\t\t Password            \n";
            cin>>password;
			
			// checking the admin account
            if(email=="lintangashshofa@gmail.com" && password=="Admin_123!!")
            {
                administrator();
            }
            // jika bukan admin
            else
            {
                cout<<"\t\t\t Invalid Email or Password \n";
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
			
			// jika salah ketik angka pilihan atau belum memilih
            default :
                {
                    cout<<"Please select from the given options!";
                }
	}

// kembali ke proses awal yaitu begin
goto begin;
}

// menu admin untuk merubah data yang ada
void belanja::administrator()
{
    begin:
    int choice;
    
    cout<<"\n\n\n\t\t\t|      Admin Menu                   |";
    cout<<"\n\t\t\t|_____1) Tambah Produk______________|";
    cout<<"\n\t\t\t|                                   |";
    cout<<"\n\t\t\t|_____2) Ubah Produk________________|";
    cout<<"\n\t\t\t|                                   |";
    cout<<"\n\t\t\t|_____3) Hapus Produk_______________|";
    cout<<"\n\t\t\t|                                   |";
    cout<<"\n\t\t\t|_____4) Kembali Ke Halaman Utama___|";

    cout<<"\n\n\t  Submit Perubahan yang Ada!   ";
    cin>>choice;

	// pilihan case pada admin menu
    switch(choice)
    {
    	case 1: // tambah data
        	add();
        	break;
    
    	case 2: // edit data
        	edit();
       		break;

    	case 3: // hapus data
        	rem();
        	break;

    	case 4: // kembali ke menu
        	menu();
        	break;

    	default: // jika salah pilih atau ada error
        	cout<<"Invalid!";
    }
// kembali ke proses awal halaman admin
goto begin;
}

// menu belanja pembeli
void belanja::buyer()
{
    begin:
    int choice;
    
    cout<<"\t\t\t       Buyer Menu       \n";
    cout<<"\t\t\t________________________\n";
    cout<<"                              \n";
    cout<<"\t\t\t 1) Buy Product         \n";
    cout<<"                              \n";
    cout<<"\t\t\t 2) Go Back             \n";
    cout<<"\t\t\t    Enter your choice :   ";

    cin>>choice;

	// pilihan menu pembeli
    switch(choice)
    {
    	case 1: // menampilkan bon belanja
        	receipt();
        	break;
    
    	case 2: // kembali ke menu
        	menu();
        	break;

    	default: // salah pilih
        	cout<<"Invalid choice!";
    }
// kembali ke proses awal
goto begin;
}

// masuk ke bagian penambahan data bagi admin
void belanja::add()
{
	// define the variable will use
	begin:
    fstream data; // create data object
    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout<<"\n\n\t\t\t       Add new product   ";
    cout<<"\n\n\t Product code of the product ";
    cin>>pcode;
    cout<<"\n\n\t Name of the product ";
    cin>>pname;
    cout<<"\n\n\t Price of the product ";
    cin>>price;
    cout<<"\n\n\t Discount of the product ";
    cin>>disc;
    
    // untuk sistem membuka file database yang sudah atau akan dimasukkan data
    data.open("database.txt", ios::in); //menbuka database dalam reading mode
    
    if(!data)
    {
    	data.open("database.txt", ios::app|ios::out);
    	data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<disc<<"\n";
    	data.close();
	}
	else
	{
		data>>c>>n>>p>>d;
		
		while(!data.eof())
		{
			if(c==pcode)
			{
				token++;
			}
			data>>c>>n>>p>>d;
		}
		data.close();
	
	if(token==1)
		goto begin;
		else
		{
			data.open("database.txt", ios::app|ios::out);
    		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<disc<<"\n";
    		data.close();
		}
	}
	cout<<"\n\n\t\t Data recorded! ";
}
void belanja::edit()
{
	fstream data,data1; //create data object
	int pkey;
	int token=0;
	int c;
	float p;
	float d;
	string n;
		
	cout<<"\n\t\t\t Modify the data ";
	cout<<"\n\t\t\t Product code: ";
	cin>>pkey;
	
	// sistem menbuka database untuk admin
	data.open("database.txt", ios::in); //menbuka database dalam reading mode
	if(!data) // jika database belum ada
	{
		cout<<"\n\n Data doesn't exist! ";
	}
	else // jika database sudah ada
	{
		data1.open("database1.txt", ios::app|ios::out);
		
		data>>pcode>>pname>>price>>disc;		
		while(!data.eof())
		{
			if(pkey==pcode)
			{
				cout<<"\n\t\t Product new code: ";
				cin>>c;
				cout<<"\n\t\t Name of the product: ";
				cin>>n;
				cout<<"\n\t\t Price: ";
				cin>>p;
				cout<<"\n\t\t Discount: ";
				cin>>d;
				data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
				cout<<"\n\n\t\t Data recorded! ";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<disc<<"\n";
			}
			data>>pcode>>pname>>price>>disc;
		}
		data.close();
		data1.close();
		
		// ubah nama database ke yang baru
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Data tidak ditemukan! ";
		}
	}
}
vo
	int pkey;
	int token=0;
	cout<<"\n\n\t Delete product";
	cout<<"\n\n\t Product code: ";
	cin>>pkey;
	data.open("database.txt", ios::in); //menbuka database dalam reading mode
	if(!data)
	{
		cout<<"Data tidak ditemukan";
	}
	else
	{
		data1.open("database1.txt", ios::app|ios::out);
		data>>pcode>>pname>>price>>disc;
		while(!data.eof())
		{
			if(pcode==pkey)
			{
				cout<<"\n\n\t Product deleted succesfully!";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<disc<<"\n";
			}
			data>>pcode>>pname>>price>>disc;
		}
		data.close();
		data1.close();
		remove("database.txt");
		rename("database1.txt", "database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Data tidak ditemukan";
		}
	}
{
	begin:
	fstream data;
	cout<<"\n\n|______________________________________\n";
	cout<<"ProNo\t\tName\t\tPrice\n";
	cout<<"\n\n|______________________________________\n";
	data>>pcode>>pname>>price>>disc;
	while(!data.eof())
	{
		cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
		data>>pcode>>pname>>price>>disc;
	}
	data.close();
	
goto begin;	  	
void belanja::receipt()
{
	fstream data;
	int arrc[100]; // array of code
	int arrq[100]; // array of quantity
	string choice;
	int c=0;
	float amount=0;
	float disc=0;
	float total=0;
	
	cout<<"\n\n\t\t\t\t RECEIPT ";
	data.open("database.txt", ios::in); //menbuka database dalam reading mode
	if(!data)
	{
		cout<<"\n\n Empty database";
	}
	else
	{
		data.close();
		
		list();
		cout<<"\n_______________________________________\n";
		cout<<"\n|                                      \n";
		cout<<"\n       Silahkan masukkan pesanan!      \n";
		cout<<"\n|                                      \n";
		cout<<"\n_______________________________________\n";
		do
		{
			begin:
			cout<<"\n\nMasukkan kode produk: ";
			cin>>arrc[c];
			cout<<"\n\nMasukkan jumlah produk: ";
			cin>>arrq[c];
			
			// check apakah kode produk yang dimasukkan user sama dengan kode prudok yang telah ada
			for(int i=0; i<c; i++)
			{
				if(arrc[c]==arrc[i])
				{
					cout<<"\n\n Duplicate product code. Please try again!";
					goto begin;
				}
			}
			c++;
			cout<<"\n\n Apakah kamu akan membeli produk lain? Jika YA, tekan <y>, jika TIDAK, tekan <n>";
			cin>>choice;
		}
		while(choice == "y");
		
		cout<<"\n\n\t\t\t_______________RECEIPT______________\n";
		cout<<"\nProduct No\t Product Name\t Product Quantity\t Price\t Amount\t Amount With Discount\n";
		
		for(int i=0; i<c; i++)
		{
			data.open("database.txt", ios::in);
			data>>pcode>>pname>>price>>disc;
			while(!data.eof())
			{
				if(pcode==arrc[i])
				{
					amount=price*arrq[i];
					disc=amount-(amount*disc/100);
					total=total+disc;
					cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t\t"<<amount<<"\t\t"<<disc;
				}
				data>>pcode>>pname>>price>>disc;
			}
		}
		data.close();
	}
	cout<<"\n\n_______________________________________";
	cout<<"\n  Total Amount: "<<total;

// fungsi utama untuk menjalankan semua
int main()
{
	belanja s;
	s.menu();
}

