#include<iostream>
#include<cstring>
using namespace std;

// class bikes{
//     public:
//         float price1;
//         int model;
//         char name[10];
//         float discount(float x){
//             return (price1*(100-x))*0.01;
//         }
//         void print_details(){
//             cout<<"Name :"<<name<<endl;
//             cout<<"Model No:"<<model<<endl;
//             cout<<"Price :"<<price1<<endl;
//         }
//         float apply_discount(float x){
//             price1 = (price1*(100-x))*0.01;
//             return 0;
//         }
// };
class cars{
    private:
        float price; //here i make price parameter private so no one can access outside the class
    public:
        
        int model;
        char name[10];
        cars(){

        }
        //Creating a constructor : using the same name of the class
        cars(char *n,int m,float p){
            
            model = m;
            price = p;
            strcpy(name,n);

        }



        float discount(float x){
            return (price*(100-x))*0.01;
        }
        
        void print_details(){
            cout<<"Name :"<<name<<endl;
            cout<<"Model No:"<<model<<endl;
            cout<<"Price :"<<price<<endl;
        }
        float apply_discount(float x){
            price = (price*(100-x))*0.01;
            return price;
        }
        // In order to set the price outside the class , i will use setters
        void set_price(float p){           // this is known as setter (accessing the private parameter internally)
           float msp = 51;
           if(p>0){
               price = p;
           } 
           else{
               price = msp;
           }
            
        }
        float get_price(){               // this is getter
            return price;
        }


};
int main(){
    // bikes c,d;
    // cars b,c,d;
    cars b;
    //we are printing all values by assigning here in main 
    b.name[0] = 'A';
    b.name[1] = 'c';
    b.name[2] = 'e';
    b.name[3] = '\0';
    b.model = 473;
    b.set_price(100);
    //lets do the above by using constructor
    cars c("BMW",474,101);
    cars d("BOOM",475,102);
    float discount;
    cout<<"Enter the discount : "<<endl;
    cin>>discount;
    b.apply_discount(discount);
    c.apply_discount(discount);
    d.apply_discount(discount);
    b.print_details();
    c.print_details();
    d.print_details();
    
    return 0;
}