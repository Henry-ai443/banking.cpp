#include <iostream>
using namespace std;

float celsius_to_fahrenheit(float celsius){
    return (celsius * 9/5 ) + 32;
}

float fahrenheit_to_celsius(float fahrenheit){
    return(fahrenheit * 5/9) - 32;
}

float celsius_to_kelvin(float celsius){
    return celsius + 273.15;
}

float kelvin_to_celsius(float kelvin){
    return kelvin - 273.15;
}

int main(){
    bool is_running = true;
    int selection;
    float temp;
    char unit;
    char target_unit;
    char exiting;
    cout<<"*******WELCOME TO TEMPERATURE CONVERTER*********"<< endl;
    cout<<"Press 1 to proceed 2 to exit"<< endl;
    cin>> selection;

    if(selection == 1){
        do{
            cout<<"*****WELCOME******"<< endl;
            cout<<"Enter the value of your temperature\n"<< endl;
            cin>>temp;
            cout<<"Enter the current unit of your temperature(C K F)\n"<< endl;
            cin>> unit;
            cout<<"Enter the Target unit\n"<< endl;
            cin>> target_unit;

            if(unit == 'c'){
                if(target_unit == 'f'){
                   float converted_temperature  = celsius_to_fahrenheit(temp);
                   cout<<"Your temp in Fahrenheit is:"<< converted_temperature<<"F." <<endl;
                }else if(target_unit == 'k'){
                    float converted_temperature = celsius_to_kelvin(temp);
                    cout<<"Your temperature in kelvin is:"<< converted_temperature<<"K."<<endl;
                }else{
                    cout<<"INVALID TARGET UNIT"<< endl;
                }

            }else if(unit == 'f'){
                if(target_unit == 'c'){
                    float converted_temperature = fahrenheit_to_celsius(temp);
                    cout<<"Your temperature in celsius is:"<< converted_temperature<<"C."<<endl;
                }else if(target_unit == 'k'){
                    float converted_temperature = fahrenheit_to_celsius(temp);
                    float kelvin_temp = celsius_to_kelvin(converted_temperature);
                    cout<<"Your temperature in Kelvin is:"<< kelvin_temp<<"K."<< endl;
                }else{
                    cout<<"INVALID TARGET UNIT"<< endl;
                }

            }else if(unit == 'k'){
                if(target_unit == 'c'){
                    float converted_temperature = kelvin_to_celsius(temp);
                    cout<<"Your temperature in celsius is:"<< converted_temperature<<"C."<< endl;
                }else if(target_unit == 'f'){
                    float converted_temperature = kelvin_to_celsius(temp);
                    float temp_fahrenheit = celsius_to_fahrenheit(converted_temperature);
                    cout<<"Your temperature in fahrenheit is:"<< temp_fahrenheit<<"F."<<endl;
                }else{
                    cout<<"INVALID TARGET UNIT!!"<< endl;
                }
            }else{
                cout<<"INVALID UNIT!!!"<< endl;
            }

            cout<<"Do you wish to continue?(Y/N)"<< endl;
            cin>>exiting;

            if(exiting == 'y'){
                return is_running = true;
            }else{
                return is_running = false;
            }
        }while(is_running);
    }else{
        cout<<"EXITING"<< endl;
    }
}