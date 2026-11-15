#include<bits/stdc++.h>
using namespace std;

//this is not in accordance with single responsibility principle as ShoppingCart class is doing multiple things like calculating price, printing invoice and saving to database. We can separate these responsibilities into different classes.

// //product class
// class Product{
//     public:
//     int price;
//     string name;

//     Product(int price,string name){
//         this->price=price;
//         this->name=name;
//     }

// };

// //class for product details
// class ShoppingCart{
//     vector<Product> products;
//     public:
//     void AddProduct(Product p ){
//         products.push_back(p);
//     }

//     void CalculatePrice(){
//         int total=0;
//         for(auto p: products){
//             total+=p.price;
//         }
//         cout<<"Total Price: "<<total<<endl;
//     }

//     void PrintInvoice(){
//         cout<<"-------------------Invoice: -------------------------- "<<endl;
//         for(auto p: products){
//             cout<<p.name<<" "<<p.price<<endl;
//         }
//         CalculatePrice();
//     }

//     void savetodb(){
//         cout<<"Saving to database"<<endl;
//         cout<<"Save Successfully"<<endl;
//     }

// };


// int main(){
//     ShoppingCart cart;
//     int n;
//     cout<<"Enter number of products: ";
//     cin>>n;
//     int price;
//     string name;
//     for (int i=0;i<n;i++){
//         cout<<"Enter product name: ";
//         cin>>name;
//         cout<<"Enter product price: ";
//         cin>>price;
//         cart.AddProduct(Product(price,name));
//     }
//     cart.PrintInvoice();
//     cart.savetodb();
// }



class Product {
public:
    int price;
    string name;

    Product(int price, string name) {
        this->price = price;
        this->name = name;
    }
};

class ShoppingCart {
    public:
    vector<Product*> products;

    void AddProduct(Product *p) {
        products.push_back(p);
    }
    void ShowProducts() {
        cout << "-------------------Products: -------------------------- " << endl;
        for (auto p : products) {
            cout << p->name << " " << p->price << endl;
        }
    }
};
class cartInvoiceCalculator {
    public:
    ShoppingCart *cart;
    cartInvoiceCalculator(ShoppingCart *cart) {
        this->cart = cart;
    }
    void CalculatePrice() {
        int total = 0;
        for (auto p : cart->products) {
            total += p->price;
        }
        cout << "Total Price: " << total << endl;
    }
    void PrintInvoice() {
        cout << "-------------------Invoice: -------------------------- " << endl;
        for (auto p : cart->products) {
            cout << p->name << " " << p->price << endl;
        }
        CalculatePrice();
    }

};

class cartDatabaseSaver {
    ShoppingCart *cart;
    public:
    cartDatabaseSaver(ShoppingCart *cart) {
        this->cart = cart;
    }
    void savetodb() {
        cout << "Saving to database" << endl;
        cout << "Save Successfully" << endl;
    }
};

int main(){
    ShoppingCart cart;
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    int price;
    string name;
    for (int i = 0; i < n; i++) {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product price: ";
        cin >> price;
        cart.AddProduct(new Product(price, name));
    }
    cartDatabaseSaver *db=new cartDatabaseSaver(&cart);
    cartInvoiceCalculator *invoice=new cartInvoiceCalculator(&cart);
    invoice->PrintInvoice();
    db->savetodb();


}