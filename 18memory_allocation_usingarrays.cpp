#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item number " << (counter + 1) << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of your item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}

/* 	"boilerplate": {
	 	"prefix": "txu",
	 	"body": [
	 		"#include<iostream>",
			 "using namespace std;\n",
			 "int main()",
			 "{",
			 "\t$1",
			 "\treturn 0;",
			 "}"
	 	],
	 	"description": "code snippet for c++"
	 }
	} */