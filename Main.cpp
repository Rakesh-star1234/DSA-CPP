#include<iostream>
using namespace std;

class Product{
public:
    int id;
    string name;    
    float price;         

    void input(){    
        cout<<"Enter Product ID: ";                 
        cin>>id;              
 
        cout<<"Enter Product Name: ";                        
        cin>>name;          

        cout<<"Enter Product Price: ";                           
        cin>>price;
    }

    void display(){        
        cout<<"\nProduct Details\n";             
        cout<<"ID: "<<id<<endl;        
        cout<<"Name: "<<name<<endl;        
        cout<<"Price: "<<price<<endl;        
    }
};

int main(){  
 Product products[100];     
    int count = 0;

    while(true){  

        cout<<"\n===== E-Commerce System =====\n";  
        cout<<"1. Phone\n";  
        cout<<"2. View Products\n";  
        cout<<"3. over product\n ";      
        cout<<"3. Exit\n";        

        int choice;       
        cout<<"Enter Choice: ";         
        cin>>choice;         

        if(choice == 1){                  
   
            products[count].input();                
            count++;           

        }
        else if(choice == 2){       

            for(int i=0; i<count; i++){          
                products[i].display();    
                cout<<endl;          
            }     

        }    
        else if(choice == 3){        
 
            break;     

        }  
    }   

    return 0;   
}