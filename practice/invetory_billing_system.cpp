#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Item
{
protected:
    int id;
    string name;
    float price;

public:
    virtual void input()
    {
        cout << "Enter Item ID: ";
        cin >> id;

        cout << "Enter Item Name: ";
        cin >> name;

        cout << "Enter Item Price: ";
        cin >> price;

        if (price < 0)
            throw invalid_argument("Price cannot be negative!");
    }

    virtual void display()
    {
        cout << id << "  " << name << "  " << price;
    }

    int getId() { return id; }
    float getPrice() { return price; }
    string getName() { return name; }

    virtual ~Item() {}
};

class Product : public Item
{
    int quantity;

public:
    void input() override
    {
        cout << "Enter Item ID: ";
        cin >> id;

        cout << "Enter Item Name: ";
        cin >> name;

        cout << "Enter Item Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;

        if (price < 0 || quantity < 0)
            throw invalid_argument("Price/Quantity cannot be negative!");
    }

    void display() override
    {
        cout << id << "  " << name << "  " << price << "  " << quantity << endl;
    }

    int getQty() { return quantity; }

    void reduceQty(int q)
    {
        if (q > quantity)
            throw runtime_error("Not enough stock!");
        quantity -= q;
    }

    void setData(int i, string n, float p, int q)
    {
        id = i;
        name = n;
        price = p;
        quantity = q;
    }
};

vector<Item *> inventory;

void loadData()
{
    ifstream file("inventory.txt");

    if (!file)
        return;

    int id, qty;
    string name;
    float price;

    while (file >> id >> name >> price >> qty)
    {
        Product *p = new Product();
        p->setData(id, name, price, qty);
        inventory.push_back(p);
    }

    file.close();
}

void saveData()
{
    ofstream file("inventory.txt");

    for (auto p : inventory)
    {
        Product *pr = dynamic_cast<Product *>(p);
        file << pr->getId() << "  "
             << pr->getName() << "  "
             << pr->getPrice() << "  "
             << pr->getQty() << endl;
    }

    file.close();
}

void addProduct()
{
    Product *p = new Product();

    cout << "\nAdd New Product\n";
    p->input();

    inventory.push_back(p);
    cout << "Product added successfully\n";

    saveData();
}

void viewInventory()
{
    cout << "\nAvailable Products:\n";
    cout << "ID   Name   Price   Qty\n";

    for (auto p : inventory)
    {
        p->display();
    }
}

void searchProduct()
{
    int id;
    cout << "\nEnter ID to search: ";
    cin >> id;

    for (auto p : inventory)
    {
        if (p->getId() == id)
        {
            cout << "Product Found:\n";
            p->display();
            return;
        }
    }

    cout << "Product Not Found\n";
}

void billing()
{
    int id, qty;
    float total = 0;
    char ch;

    cout << "\nBilling Section\n";

    do
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Quantity: ";
        cin >> qty;

        if (qty <= 0)
            throw invalid_argument("Quantity must be positive!");

        bool found = false;

        for (auto p : inventory)
        {
            Product *pr = dynamic_cast<Product *>(p);

            if (pr->getId() == id)
            {
                found = true;

                float cost = pr->getPrice() * qty;
                pr->reduceQty(qty);

                total += cost;

                cout << "Product Name: " << pr->getName()
                     << " Cost: " << cost << endl;
            }
        }

        if (!found)
            throw runtime_error("Product ID not found!");

        cout << "Add more items? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    float gst = total * 0.05;

    cout << "\n------ BILL ------\n";
    cout << "Subtotal: " << total << endl;
    cout << "GST (5%): " << gst << endl;
    cout << "Total: " << total + gst << endl;

    saveData();
}

int main()
{
    system("chcp 65001"); // for emoji
    loadData();

    int choice;

    cout << "**************************************" << endl;
    cout << "  Welcome to our Stationary Shop  \n";
    cout << "**************************************" << endl;

    do
    {
        try
        {
            cout << "--------------------------------\n";
            cout << "\n1. Add Product\n2. View Products\n3. Search Product\n4. Billing\n5. Exit\n";
            cout << "--------------------------------\n";

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                addProduct();
                break;
            case 2:
                viewInventory();
                break;
            case 3:
                searchProduct();
                break;
            case 4:
                billing();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice!\n";
            }
        }
        catch (exception &e)
        {
            cout << "Error: " << e.what() << endl;
        }

    } while (choice != 5);

    for (auto p : inventory)
        delete p;

    cout << "**************************************" << endl;
    cout << "    Thank you! Visit Again 😊\n";
    cout << "**************************************" << endl;

    return 0;
}