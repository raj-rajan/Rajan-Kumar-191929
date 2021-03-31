#include<iostream>
#include<string>
#include<regex>
using namespace std;

//Account class declartion and definition
class account
{
private:
    int accountno ;
    float balance ;
    string bankname ;
    int interest ;
    string IFSC ;
    int b_code ;
public:
    account()//default constructor
    {
        accountno = 751400017000028 ;
        balance = 0.0 ;
        bankname = " PNB " ;
        interest = 11;
        IFSC = " PUNB07517000 " ;
        b_code = 7514 ;
    }//end of default constructor

account(int ac_num, float bal, string b_name, int inter , string IFSCcode, int code)//parameterised constructor
{
    accountno = ac_num ;
balance = bal ;
bankname = b_name ;
interest = inter ;
IFSC = IFSCcode ;
int b_code = code ;
} //end of parameterised constructor

void withdraw(float draw_money)   //withdraw function
{
    if(balance<draw_money)
    {
        cout << " \n\a \"Insufficient balance...\" "  <<endl ;
    }
    else
    {
        balance -= draw_money ;
    }
}//End of withdrwl function

void deposit(float add_money)  //deposit function
{
    balance += add_money;
}
// here are some self explainatory functions of account class
float getBalance()
{
    return balance ;
}
int getAccountNo()
{
    return accountno ;
}
string getBankName()
{
    return bankname ;
}
int getinterest()
{
    return interest ;
}
string getIFSCcode()
{
    return IFSC ;
}
int getBranchCode()
{
    return b_code;
}
};  //End of account class

class customer
{
private:
    string name ;
    string address ;
public:
    account ac;
    customer(string n, string a, account acc)   //parameterised constructor
    {
        name=n;
        address=a;
        ac=acc;
    } //end of parametrised constructor

    void display()
    {
        cout << "customer Name: " << name <<endl ;
        cout << " customer Address: " <<address <<endl; 
        cout << " Bank Name: " << ac.getBankName() <<endl ;
        cout << " interest: " << ac.getinterest() <<endl ;
        cout << " IFSC code: " << ac.getIFSCcode() <<endl ;
        cout << " Branch code: " << ac.getBranchCode() <<endl ;
        cout << " Current Balance: " <<ac.getBalance()<<endl;
        cout << " Account no: " << ac.getAccountNo()<<endl ;
    }
};  //end of customer class

int main()
{
    cout << " --- Customer Account Information --- " <<endl ;
    account myaccount(751400017000028, 100000, " PNB ", 11,"PUNB07517000",7514);//creating an account object
    customer DD("Rajan Kumar "," Delhi NCR ",myaccount );//creating an customer object
    DD.display();

    float dep, draw;
    cout << " \n\n Please Enter a Value that you want to Deposit: " ;
    cin >> dep ;
    DD.ac.deposit(dep) ;
    cout << " Current Balance after deposting the value: " <<endl <<endl ;
    DD.display();

    cout << " \n\nPlease enter a value which you want to Withdraw: " ;
    cin >> draw ;
    DD.ac.withdraw(draw) ;
    cout << " Current balance after withdrawl: " <<endl ;
    DD.display() ;

    return 0 ;
}