//#include<iostream>
//using namespace std;
//class Product
//{
//	string name;
//	float price;
//	int stock[5];
//public:
//	Product()
//	{
//		name = '\0';
//		price = 0;
//		stock[0] = 0;
//	}
//	Product(string n, float p, int s[5])
//	{
//		name = n;
//		price = p;
//		for (int i = 0; i < 5; i++)
//		{
//			stock[i] = s[i];
//		}
//	}
//	////getters
//	//string getName() const
//	//{
//	//	return name;
//	//}
//	//float getPrice() const
//	//{
//	//	return price;
//	//}
//	///*int getstock() const
//	//{
//	//	int* c = stock[5];
//	//	for (int i = 0; i < 5; i++)
//	//	{
//	//		c[i] = stock[i];
//	//	}
//	//	return *c;
//	//}*/
//	void displayProductInfo() const
//	{
//		cout << "Name: " << name << endl;
//		cout << "Price: " << price << endl;
//		cout << "Current Stock: " << stock << endl;
//	}
//	int updateStock()
//	{
//		int wareHouseIndex, int newstock;
//		cout << "Enter index to update b/w 0-4: ";
//		cin >> wareHouseIndex;
//		cout << "Enter value to be updated: ";
//		cin >> newstock;
//		for (int i = 0; i <= wareHouseIndex; i++)
//		{
//			if (i = wareHouseIndex)
//			{
//				stock[i] = stock[newstock];
//				return stock[i];
//			}
//			else
//			{
//				exit(0);
//			}
//		}
//
//	}
//	int addStock()
//	{
//		int wareHouseIndex, int addStock;
//		cout << "Enter index to update b/w 0-4: ";
//		cin >> wareHouseIndex;
//		cout << "Enter value to be updated: ";
//		cin >> addStock;
//		for (int i = 0; i <= wareHouseIndex; i++)
//		{
//			if (i = wareHouseIndex)
//			{
//				stock[i] = stock[i] + stock[addStock];
//				return stock[i];
//			}
//			else
//			{
//				exit(0);
//			}
//		}
//	}
//};
//int main()
//{
//	Product p;
//	int op;
//	cout << "Select which operation you want to perform: ";
//	cin >> op;
//	if (op == 1)
//	{
//		cout << p.updateStock();
//	}
//	else if (op == 2)
//	{
//		cout << p.addStock();
//	}
//	else
//	{
//		p.displayProductInfo();
//	}
//	return 0;
//}