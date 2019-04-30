//Declaration Of All Libraries
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

//Declaration Of Computer Shop Managment Class
class compu_shop_mgmt
{
	public :

		//Declaration Of All The Necessary Parameters 
		int compu_id[2], compu_date_brought[2], compu_month_brought[2],compu_date_delivery_back[2];
		string compu_product[2];
		string compu_product_damage_status[2];
		string compu_type[2];
		int choice1,choice2;
		int member;
		int date,month;

		//Get Data Function For The Input of All The Data
		void get_data()
		{
			for(int i=0;i<2;i++)
			{
				cout << "Enter Computer ID : ";
				cin >> compu_id[i];
				
				cout << "Enter Computer Product : ";
				cin >> compu_product[i];
				
				cout << "Enter Computer Product Damage Status \n (1)Press 1 for Repair \n (2)Press 2 for Parts to be Replace : ";
				cin >> choice1;
				if(choice1 == 1)
				{
					compu_product_damage_status[i]="Repair";
				}
				else if(choice1 == 2)
				{
					compu_product_damage_status[i]="Parts To Be Replaced";
				}
				else
				{
					cout << "Wrong Input\n";
				}

				cout << "Enter Date Of Product Brought : ";
				cin >> compu_date_brought[i];

				cout << "Enter Month Of Product Brought : ";
				cin >> compu_month_brought[i];

				cout << "Enter Expected Date Of Delivery : ";
				cin >> compu_date_delivery_back[i];

				cout << "Enter Computer Product Type \n (1)Press 1 for Storage Device \n (2)Press 2 for Input Device : ";
				cin >> choice2;
				if(choice2 == 1)
				{
					compu_type[i]="Storage Device";
				}
				else if(choice2 == 2)
				{
					compu_type[i]="Input Device";
				}
				else
				{
					cout << "Wrong Input\n";
				}
			}
		}

		//Show All The Input DataBase 
		void show_data()
		{
			for(int i=0;i<2;i++)
			{
				cout << "\n\n ============ Database ============\n";
				cout << "\nComputer ID : " << compu_id[i] << "\n";
				cout << "Computer Product : " << compu_product[i] << "\n";
				cout << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
				cout << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
				cout << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
				cout << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
				cout << "Computer Product Type : " << compu_type[i] << "\n\n\n";
			}
		}
	
		//Display All The DataBase According To The Selection Of The Member
		void display()
		{			

			//Selection Of The Member
			cout << "Enter The Member Number to Perform The Task : ";
			cin >> member;

			//Store The Output In The File
			ofstream myfile("abc.txt", ios::out | ios::app | ios::binary);

			//Task Of Member 1
			if(-32)
			{
				cout << "Enter Today's Date to Show database : ";
				cin >> date;
				
				for(int i=0;i<2;i++)
				{
					if(compu_date_brought[i]==date)
					{
						myfile << "\n\n ============ Database According to Date ============\n";
						myfile << "\nComputer ID : " << compu_id[i] << "\n";
						myfile << "Computer Product : " << compu_product[i] << "\n";
						myfile << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
						myfile << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
						myfile << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
						myfile << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
						myfile << "Computer Product Type : " << compu_type[i] << "\n\n\n";
					}
				}
				for(int i=0;i<2;i++)
				{
					if(compu_type[i] == "Storage Device")
					{
						myfile << "\n\n ============ Database According to Storage Device ============\n";
						myfile << "\nComputer ID : " << compu_id[i] << "\n";
						myfile << "Computer Product : " << compu_product[i] << "\n";
						myfile << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
						myfile << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
						myfile << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
						myfile << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
						myfile << "Computer Product Type : " << compu_type[i] << "\n\n\n";
					}
				}
				for(int i=0;i<2;i++)
				{
					if(compu_product_damage_status[i] == "Parts To Be Replaced")
					{
						myfile << "\n\n ============ Database According to Damage Type Parts to Be replace ============\n";
						myfile << "\nComputer ID : " << compu_id[i] << "\n";
						myfile << "Computer Product : " << compu_product[i] << "\n";
						myfile << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
						myfile << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
						myfile << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
						myfile << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
						myfile << "Computer Product Type : " << compu_type[i] << "\n\n\n";
					}
				}
			}

			//Task Of Member 2
			else if(member == 2)
			{
				cout << "Enter Date to Show database : ";
				cin >> date;

				cout << "Enter Month to Show database : ";
				cin >> month;
				
				for(int i=0;i<2;i++)
				{
					if(compu_month_brought[i] == month)
					{
						myfile << "\n\n ============ Database According to Month ============\n";
						myfile << "\nComputer ID : " << compu_id[i] << "\n";
						myfile << "Computer Product : " << compu_product[i] << "\n";
						myfile << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
						myfile << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
						myfile << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
						myfile << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
						myfile << "Computer Product Type : " << compu_type[i] << "\n\n\n";
					}
				}
				for(int i=0;i<2;i++)
				{
					if(compu_date_delivery_back[i]==date && compu_type[i]=="Input Device")
					{
						myfile << "\n\n ============ Database According to Date Of Computer Device Deliver Back With Computer Type Input Device ============\n";
						myfile << "\nComputer ID : " << compu_id[i] << "\n";
						myfile << "Computer Product : " << compu_product[i] << "\n";
						myfile << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
						myfile << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
						myfile << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
						myfile << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
						myfile << "Computer Product Type : " << compu_type[i] << "\n\n\n";
					}
				}
				for(int i=0;i<2;i++)
				{
					if(compu_product_damage_status[i] == "Repair")
					{
						myfile << "\n\n ============ Database According to Damage Type Repair ============\n";
						myfile << "\nComputer ID : " << compu_id[i] << "\n";
						myfile << "Computer Product : " << compu_product[i] << "\n";
						myfile << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
						myfile << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
						myfile << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
						myfile << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
						myfile << "Computer Product Type : " << compu_type[i] << "\n\n\n";
					}
				}	
			}

			//Task Of Member 3
			else if(member == 3)
			{
				cout << "Enter Month to Show database : ";
				cin >> month;
				
				for(int i=0;i<2;i++)
				{
					if(compu_month_brought[i] == month && compu_product_damage_status[i] == "Repair")
					{
						myfile << "\n\n ============ Database According to Month And Item to be Repaired ============\n";
						myfile << "\nComputer ID : " << compu_id[i] << "\n";
						myfile << "Computer Product : " << compu_product[i] << "\n";
						myfile << "Product Damage Status : " << compu_product_damage_status[i] << "\n";
						myfile << "Date Of Product Brought : " << compu_date_brought[i] << "\n";
						myfile << "Month Of Product Brought : " << compu_month_brought[i] << "\n";
						myfile << "Expected Date Of Delivery : " << compu_date_delivery_back[i] << "\n";
						myfile << "Computer Product Type : " << compu_type[i] << "\n\n\n";
					}
				}
				for(int i=0;i<2;i++)
				{
						myfile << "\n\n ============ Database Of Computer Product With There Damage Status ============\n";
						myfile << "\nComputer Product : " << compu_product[i] << "\n";
						myfile << "Product Damage Status : " << compu_product_damage_status[i] << "\n\n\n";
				}
			}
			else
			{
				myfile << "Wrong Input\n\n";
			}
		}
		
};

//Declaration Of the Main Function
int main()
{
	//Declare Object For Computer Shop Managment
	compu_shop_mgmt ob;

	//calling Of Function through Object
	ob.get_data();
	ob.show_data();
	ob.display();

	return 0;
} 
